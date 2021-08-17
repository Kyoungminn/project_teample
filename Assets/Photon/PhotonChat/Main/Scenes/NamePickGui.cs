using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof (ChatGui))]
public class NamePickGui : MonoBehaviour
{
    private const string UserNamePlayerPref = "NamePickUserName";

    public ChatGui chatNewComponent;

    public InputField idInput;

    public void Start()
    {
        this.chatNewComponent = FindObjectOfType<ChatGui>();


        string prefsName = PlayerPrefs.GetString(NamePickGui.UserNamePlayerPref);
        if (!string.IsNullOrEmpty(prefsName))
        {
            this.idInput.text = prefsName;
        }

        this.idInput.text = "minkyoung";

        ChatGui chatNewComponent = FindObjectOfType<ChatGui>();
        chatNewComponent.UserName = this.idInput.text.Trim();
        chatNewComponent.Connect();
    }

    // new UI will fire "EndEdit" event also when loosing focus. So check "enter" key and only then StartChat.
    public void EndEditOnEnter()
    {
            this.StartChat();
    }

    public void StartChat()
    {
        ChatGui chatNewComponent = FindObjectOfType<ChatGui>();
        chatNewComponent.UserName = this.idInput.text.Trim();
		chatNewComponent.Connect();
        enabled = false;

        PlayerPrefs.SetString(NamePickGui.UserNamePlayerPref, chatNewComponent.UserName);
    }
}