using UnityEngine;
using System.Collections;

public class TouchController : MonoBehaviour {

	public static float inputX;
	public static float inputY;

	void Awake () {
		Screen.orientation = ScreenOrientation.LandscapeRight;
	}

	// Use this for initialization
	void Start () {
		inputX = 0.0f;
		inputY = 0.0f;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void FixedUpdate () {
		if (Input.touchCount > 0){
			inputY = (Input.GetTouch (0).position.y - Screen.height / 2.0f) / (Screen.height / 2.0f);
			inputX = (Input.GetTouch (0).position.x - Screen.width / 2.0f) / (Screen.width / 2.0f);
			if (Mathf.Abs (inputY) > Mathf.Abs (inputX)) {
				float scaling = 1.0f / Mathf.Abs (inputY);
				inputY *= scaling;
				inputX *= scaling;
			} else {
				float scaling = 1.0f / Mathf.Abs (inputX);
				inputY *= scaling;
				inputX *= scaling;
			}
		} else {
			inputX = 0.0f;
			inputY = 0.0f;
		}
	}
}
