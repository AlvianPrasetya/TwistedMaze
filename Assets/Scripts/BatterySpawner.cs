using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class BatterySpawner : MonoBehaviour {

	public int numBatteries = 35;
	public GameObject battery;
	public List<GameObject> batteries;
	public float minSpawnRadius = 5.0f;
	public float maxSpawnRadius = 35.0f;
	public int numBatteriesToRenew = 0;
	public float mapRadius = 35.0f;

	// Use this for initialization
	void Start () {
		GameObject last;
		for (int i = 0; i < numBatteries; i++) {
			int signX = Random.Range (0, 2) * 2 - 1;
			int signY = Random.Range (0, 2) * 2 - 1;
			float randomX = signX * (Random.value * (maxSpawnRadius - minSpawnRadius) + minSpawnRadius);
			float randomY = signY * (Random.value * (maxSpawnRadius - minSpawnRadius) + minSpawnRadius);
			last = (GameObject) Instantiate (battery, new Vector3 (randomX, randomY, 0.0f), battery.transform.rotation);
			last.GetComponent<BatteryController>().parentSpawner = gameObject;
			batteries.Add (last);
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (Time.timeScale == 0f) {
			return;
		}
		for (int i = batteries.Count - 1; i >= 0; i--) {
			float dist = Vector2.Distance (batteries[i].transform.position, Vector2.zero);
			if (dist > mapRadius) {
				Destroy (batteries[i].GetComponent<BatteryController>().energyLabel);
				Destroy (batteries[i]);
				batteries.RemoveAt (i);
				numBatteriesToRenew++;
			}
		}

		RenewBatteries ();
	}

	void RenewBatteries () {
		GameObject last;
		for (int i = 0; i < numBatteriesToRenew; i++) {
			int signX = Random.Range (0, 2) * 2 - 1;
			int signY = Random.Range (0, 2) * 2 - 1;
			float randomX = signX * (Random.value * (maxSpawnRadius - minSpawnRadius) + minSpawnRadius);
			float randomY = signY * (Random.value * (maxSpawnRadius - minSpawnRadius) + minSpawnRadius);
			last = (GameObject) Instantiate (battery, new Vector3 (randomX, randomY, 0.0f), battery.transform.rotation);
			last.GetComponent<BatteryController>().parentSpawner = gameObject;
			batteries.Add (last);
		}
		numBatteriesToRenew = 0;
	}
}
