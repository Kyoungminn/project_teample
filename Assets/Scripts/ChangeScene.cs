using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour
{
    public void SceneChangeLogin()
    {
        SceneManager.LoadScene("MainScene");
    }
    public void SceneChangeMain()
    {
        SceneManager.LoadScene("SceneHome");
    }
    public void SceneChangeCalendar()
    {
        SceneManager.LoadScene("TodoScene");
    }
    public void SceneChangeTodo()
    {
        SceneManager.LoadScene("VoteScene");
    }
    public void SceneChangeVote()
    {
        SceneManager.LoadScene("GameScene");
    }

    public void SceneChangeGame()
    {
        SceneManager.LoadScene("SceneHome");
    }

    public void SceneChangeDraw()
    {
        SceneManager.LoadScene("TextChatScene");
    }

    public void SceneChangeSetting()
    {
        SceneManager.LoadScene("ARScene");
    }

    public void SceneChangePort()
    {
        SceneManager.LoadScene("PortfolioScene");
    }
   
   
}
