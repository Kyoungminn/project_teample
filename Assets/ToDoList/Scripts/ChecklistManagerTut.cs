using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChecklistManagerTut : MonoBehaviour
{
    public Transform content;
    public GameObject addPanel;
    public Button createButton;
    public GameObject checklistItemPrefab;

    string filePath;

    private List<ChecklistObjectTut> checklistObjects = new List<ChecklistObjectTut>();


    private InputField[] addInputFields;
    private void Start()
    {
        filePath = Application.persistentDataPath + "/checklist.txt";
        addInputFields = addPanel.GetComponentsInChildren<InputField>();

        createButton.onClick.AddListener(delegate { CreateChecklistItem(addInputFields[0].text); });
    }

    public void SwitchMode(int mode) 
    {
        switch (mode)
        {
            // Regular checklist mode
            case 0:
                addPanel.SetActive(false);
                break;

            // Adding a new checklist item
            case 1:
                addPanel.SetActive(true);
                break;
        }
    }

    void CreateChecklistItem(string name)
    {
        GameObject item = Instantiate(checklistItemPrefab);

        item.transform.SetParent(content);
        ChecklistObjectTut itemObject = item.GetComponent<ChecklistObjectTut>();
        int index = 0;
        if(checklistObjects.Count > 0)
            index = checklistObjects.Count - 1;
        itemObject.SetObjectInfo(name, index);
        checklistObjects.Add(itemObject);
        ChecklistObjectTut temp = itemObject;
        itemObject.GetComponent<Toggle>().onValueChanged.AddListener(delegate { CheckItem(temp); });

        SwitchMode(0);
    }


    void CheckItem(ChecklistObjectTut item)
    {
        checklistObjects.Remove(item);
    }
}
