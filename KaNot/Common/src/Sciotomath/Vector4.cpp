#include <cmath>
#include <Sciotomath/Math.h>


namespace Scioto
{
	Vector4::Vector4()
			: x(0), y(0),z(0),w(0)
	{}
	Vector4::Vector4(const Vector3 Vec3, const float W)
		: 
		x(Vec3[0]),
		y(Vec3[1]),
		z(Vec3[2]),
		w(W)
	{}
	Vector4::Vector4(const float X, const float Y, const float Z, const float W)
		: x(X), y(Y), z(Z), w(W)
	{}
	Vector4::~Vector4(){}

	float Vector4::getLenght()
	{	
		return sqrt(pow(x,2) + pow(y,2) + pow(z,2) + pow(w,2));
	}
	/*float Vector4::getAngle()
	{
		if (x == 0)
		{
			if (y > 0)
				return 90;
			return 270;
		}
		else
		{
			float angle = float(atan(y/x)*(180.0f/PI));

			if (x < 0)
				angle += 180;

			else if (angle < 0)
				angle += 360;

			return angle;
		}
	}*/

	// Public
	// Operators
	
	const float& Vector4::operator [](const unsigned int& index) const
	{
		return (&x)[index];
	}
	float& Vector4::operator [](const unsigned int& index)
	{
		return (&x)[index];
	}


	Vector4 operator -(const Vector4& RightVal)
	{
		return Vector4(-RightVal.x, -RightVal.y,-RightVal.z, -RightVal.w);
	}

	Vector4 operator +(const Vector4& LeftVal,const Vector4& RightVal)
	{
		return Vector4(LeftVal.x+RightVal.x,LeftVal.y+RightVal.y,LeftVal.z+RightVal.z,LeftVal.w+RightVal.w);
	}
	Vector4 operator -(const Vector4& LeftVal,const Vector4& RightVal)
	{
		return Vector4(LeftVal.x-RightVal.x,LeftVal.y-RightVal.y,LeftVal.z-RightVal.z,LeftVal.w-RightVal.w);
	}

	const Vector4& operator +=(Vector4& LeftVal,const Vector4& RightVal)
	{
		LeftVal.x += RightVal.x;
		LeftVal.y += RightVal.y;
		LeftVal.z += RightVal.z;
		LeftVal.w += RightVal.w;
		return LeftVal;
	}
	const Vector4& operator -=(Vector4& LeftVal,const Vector4& RightVal)
	{
		LeftVal.x -= RightVal.x;
		LeftVal.y -= RightVal.y;
		LeftVal.z -= RightVal.z;
		LeftVal.w -= RightVal.w;
		return LeftVal;
	}

	Vector4 operator /(const Vector4& LeftVal, const float& RightVal)
	{
		return Vector4(LeftVal.x / RightVal,LeftVal.y / RightVal, LeftVal.z / RightVal, LeftVal.w / RightVal);
	}
	const Vector4& operator /=(Vector4& LeftVal, const float& RightVal)
	{
		LeftVal.x /= (float)RightVal;
		LeftVal.y /= (float)RightVal;
		LeftVal.z /= (float)RightVal;
		LeftVal.w /= (float)RightVal;
		return LeftVal;
	}

	bool operator ==(const Vector4& LeftVal,const Vector4& RightVal)
	{
		if (LeftVal.x == RightVal.x && LeftVal.y == RightVal.y && LeftVal.z == RightVal.z && LeftVal.w == RightVal.w)
			return true;
		return false;
	}
	bool operator !=(const Vector4& LeftVal,const Vector4& RightVal)
	{
		return !(LeftVal == RightVal);
	}

	Vector4 operator *(const Vector4& LeftVal, const float& RightVal)
	{
		return Vector4(LeftVal.x * RightVal,LeftVal.y * RightVal, LeftVal.z * RightVal, LeftVal.w * RightVal);
	}
	Vector4 operator *(const float& LeftVal, const Vector4& RightVal)
	{
		return Vector4(LeftVal * RightVal.x,LeftVal * RightVal.y, LeftVal * RightVal.z, LeftVal * RightVal.w);
	}

	const Vector4& operator *=(Vector4& LeftVal,const float& RightVal)
	{
		LeftVal.x *= RightVal;
		LeftVal.y *= RightVal;
		LeftVal.z *= RightVal;
		LeftVal.w *= RightVal;
		return LeftVal;
	}
}