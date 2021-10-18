/**
 * Project OOP3200-F2021-ICE5
 * @author Katherine Bellman
 * @Student number: 100325825
 * @Course: OOP 3200
 *
 * @Date: Octorber 17th 2021
 * @version 1.0
 */

#pragma once
#ifndef __VECTOR3D__
#define __VECTOR3D___
#include <string>

template <class T>
class Vector3D
{
public:
	Vector3D(T x = static_cast<T>(0.0f), T y = static_cast < T>(0.0f), T z = static_cast < T>(0.0f));
	~Vector3D();

	//accesors
	T GetX() const;
	T GetY() const;
	T GetZ() const;

	//mutators
	void setX(const T x);
	void setY(const T y);
	void setZ(const T x);
	void set(const T x, const T y, const T z);

	 std::string  ToString() const;


private:
	T m_x;
	T m_y;
	T m_z;
};
#endif /* degined (__VECTOR3D__*/


