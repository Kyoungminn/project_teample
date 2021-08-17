using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChecklistObjectTut : MonoBehaviour
{
    public string objName;
    public int index;

    private Text itemText;


    private void Start()
    {
        itemText = GetComponentInChildren<Text>();
        itemText.text = objName;
    }

    public void SetObjectInfo(string name, int index)
    {
        this.objName = name;
        this.index = index;
    }
}
