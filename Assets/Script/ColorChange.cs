using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ColorChange : MonoBehaviour
{
    public Text t;

    public void changeColor()
    {
        t.color = Color.red;
    }
}
