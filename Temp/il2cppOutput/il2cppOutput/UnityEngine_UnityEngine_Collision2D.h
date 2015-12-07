#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t38;
// UnityEngine.Collider2D
struct Collider2D_t49;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t174;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Collision2D
struct  Collision2D_t24  : public Object_t
{
	// UnityEngine.Rigidbody2D UnityEngine.Collision2D::m_Rigidbody
	Rigidbody2D_t38 * ___m_Rigidbody_0;
	// UnityEngine.Collider2D UnityEngine.Collision2D::m_Collider
	Collider2D_t49 * ___m_Collider_1;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_Contacts
	ContactPoint2DU5BU5D_t174* ___m_Contacts_2;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t13  ___m_RelativeVelocity_3;
	// System.Boolean UnityEngine.Collision2D::m_Enabled
	bool ___m_Enabled_4;
};
