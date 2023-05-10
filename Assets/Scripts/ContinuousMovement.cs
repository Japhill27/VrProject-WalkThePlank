using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit;
using Unity.XR.CoreUtils;

public class ContinuousMovement : MonoBehaviour
{
    public XRNode inputSource;
    public float speed = 1;

    private XROrigin rig;
    private Vector2 inputAxis;
    private CharacterController character;

[SerializeField] float worldBottomBoundary = -100f;

(Vector3, Quaternion) initialPositionAndRotation;

    // Start is called before the first frame update
    void Start()
    {
        character = GetComponent<CharacterController>();
        rig = GetComponent<XROrigin>();
        initialPositionAndRotation = (transform.position, transform.rotation);
    }

    // Update is called once per frame
    void Update()
    {
        InputDevice device = InputDevices.GetDeviceAtXRNode(inputSource);
        device.TryGetFeatureValue(CommonUsages.primary2DAxis, out inputAxis);
        CheckBounds();
    }

    private void FixedUpdate()
    {
        Quaternion headYaw = Quaternion.Euler(0, rig.Camera.transform.eulerAngles.y, 0);
        Vector3 direction = headYaw *  new Vector3(inputAxis.x, 0, inputAxis.y);

        character.Move(direction * Time.fixedDeltaTime * speed);
    }
    public void Teleport(Vector3 position, Quaternion rotation){
        transform.position = position;
        Physics.SyncTransforms();
        

    }
    void CheckBounds(){
        if (transform.position.y < worldBottomBoundary){
            var (position, rotation) = initialPositionAndRotation;
            Teleport(position, rotation);
        }
    }
}
