using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class ButtonEvent : MonoBehaviour
{
    GameObject sceneAni1;
    GameObject sceneAni2;
    int CurrentScene = 1;
    int MaxScene = 2;

    // Start is called before the first frame update
    private void Start()
    {
        sceneAni1 = GameObject.Find("clip1");
        sceneAni2 = GameObject.Find("clip2");

        ScaleAllAni();
    }

    public void ScaleAllAni()
    {
        //sceneAni1.transform.localScale = new Vector3(0f, 0f, 0f);
        sceneAni2.transform.localScale = new Vector3(0f, 0f, 0f);
    }

    public void OnButton()
    {
        if (CurrentScene < MaxScene)
        {
            GameObject CurrentAni = GameObject.Find("clip" + CurrentScene);
            CurrentAni.transform.localScale = new Vector3(0f, 0f, 0f);
            CurrentScene++;
            GameObject NextAni = GameObject.Find("clip" + CurrentScene);
            NextAni.transform.localScale = new Vector3(50f, 50f, 50f);
            NextAni.gameObject.GetComponent<VideoPlayer>().Play();
        }
        else if(CurrentScene == MaxScene)
        {
            GameObject CurrentAni = GameObject.Find("clip" + CurrentScene);
            CurrentAni.transform.localScale = new Vector3(0f, 0f, 0f);
            CurrentScene = 1;
            GameObject NextAni = GameObject.Find("clip" + CurrentScene);
            NextAni.transform.localScale = new Vector3(50f, 50f, 50f);
            NextAni.gameObject.GetComponent<VideoPlayer>().Play();
        }
    }
}
