﻿/************************************************************************************

Depthkit Unity SDK License v1
Copyright 2016-2018 Scatter All Rights reserved.  

Licensed under the Scatter Software Development Kit License Agreement (the "License"); 
you may not use this SDK except in compliance with the License, 
which is provided at the time of installation or download, 
or which otherwise accompanies this software in either electronic or hard copy form.  

You may obtain a copy of the License at http://www.depthkit.tv/license-agreement-v1

Unless required by applicable law or agreed to in writing, 
the SDK distributed under the License is distributed on an "AS IS" BASIS, 
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
See the License for the specific language governing permissions and limitations under the License. 

************************************************************************************/

using UnityEngine;
using System.Collections;

namespace Depthkit
{

    /// <summary>
    /// The Photo Renderer provides the most basic rendering system for Depthkit clips
    /// </summary>
    /// <remarks>
    /// This class provides methods that are implemented in child classes to allow
    /// a way for clip to be rendered in different ways
    /// </remarks>
    public class Depthkit_PhotoLook : Depthkit_ClipRenderer
    {

        [SerializeField]
        protected Shader _shader;
        public Shader Shader
        {
            get { return _shader; }
            set
            {
                _materialDirty = true;
                _shader = value;
            }
        }

        protected Material _material;
        protected Mesh _mesh;

        public override RenderType GetRenderType()
        {
            return RenderType.Photo;
        }

        void Start()
        {
            BuildMesh();
            BuildMaterial();

            //need this so it draws on first load
            Draw();
        }

        // Update is called once per frame
        void Update()
        {
            Draw();
        }

        /// <summary>
        /// Submits Draw calls to the current state of the renderer
        /// <summary>
        public override void Draw()
        {
            if(Texture == null)
            {
                return;
            }

            if (_geometryDirty)
            {
                BuildMesh();
                _geometryDirty = false;
            }

            if (_metadataChanged && _mesh != null)
            {
                _mesh.bounds = Bounds;
                _metadataChanged = false;
            }

            if (_materialDirty)
            {
                BuildMaterial();
                _materialDirty = false;
            }

            if (_material != null && _metadata != null)
            {
                SetMaterialProperties(_material);

                //drawing mesh
                Matrix4x4 transformmat = Matrix4x4.TRS(transform.position, transform.rotation, transform.localScale);
                Graphics.DrawMesh(_mesh, transformmat, _material, 0);
            }
        }


        protected void BuildMesh()
        {
            if (_mesh == null)
            {
                _mesh = new Mesh();
            }

            GetMeshLattice(ref _mesh);
        }

        protected void BuildMaterial()
        {

#if UNITY_EDITOR
            //Auto-populate shaders if they are set to null in the Editor
            if (_shader == null)
            {
                _shader = Shader.Find("Depthkit/Photo");
            }
#endif

            if (_shader != null)
            {
                _material = new Material(_shader);
            }
            else
            {
                _material = null;
            }
        }


        /// <summary>
        /// Cleans the scene of all scripts and game objects generated by this renderer
        /// <summary>
        public override void RemoveComponents()
        {
            if (!Application.isPlaying)
            {
                DestroyImmediate(this, true);
            }
            else
            {
                Destroy(this);
            }
        }
    }
} //END namespace Depthkit