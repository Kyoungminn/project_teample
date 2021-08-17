using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
 
public class SplashScript : MonoBehaviour {
 
    public float delayTime = 3;
 
    // Use this for initialization
    IEnumerator Start () {
        yield return new WaitForSeconds( delayTime );
     
        SceneManager.LoadScene ("LoginScene");
    }
}
