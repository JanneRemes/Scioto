#define PI 3.14159265358979323846264
#include <cmath>
#include <Sciotomath/Math.h>


namespace Scioto
{
	////// Vector 2

	Vector2::Vector2()
			: x(0), y(0)
	{}
	Vector2::Vector2(float X, float Y)
		: x(X), y(Y)
	{}
	Vector2::~Vector2(){}

	float Vector2::getLenght()
	{	
		return sqrt(pow(x,2) + pow(y,2));
	}
	float Vector2::getAngle()
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
	}

	Vector2 operator -(const Vector2& RightVal)
	{
		return Vector2(-RightVal.x, -RightVal.y);
	}

	Vector2 operator +(const Vector2& LeftVal,const Vector2& RightVal)
	{
		return Vector2(LeftVal.x+RightVal.x,LeftVal.y+RightVal.y);
	}
	Vector2 operator -(const Vector2& LeftVal,const Vector2& RightVal)
	{
		return Vector2(LeftVal.x-RightVal.x,LeftVal.y-RightVal.y);
	}

	Vector2& operator +=(Vector2& LeftVal,const Vector2& RightVal)
	{
		LeftVal.x += RightVal.x;
		LeftVal.y += RightVal.y;
		return LeftVal;
	}
	Vector2& operator -=(Vector2& LeftVal,const Vector2& RightVal)
	{
		LeftVal.x -= RightVal.x;
		LeftVal.y -= RightVal.y;
		return LeftVal;
	}

	Vector2 operator /(const Vector2& LeftVal, const float& RightVal)
	{
		return Vector2(LeftVal.x / RightVal,LeftVal.y / RightVal);
	}
	Vector2& operator /=(Vector2& LeftVal, const float& RightVal)
	{
		LeftVal.x /= RightVal;
		LeftVal.y /= RightVal;
		return LeftVal;
	}

	bool operator ==(const Vector2& LeftVal,const Vector2& RightVal)
	{
		if (LeftVal.x == RightVal.x && LeftVal.y == RightVal.y)
			return true;
		return false;
	}
	bool operator !=(const Vector2& LeftVal,const Vector2& RightVal)
	{
		return !(LeftVal==RightVal);
	}

	Vector2 operator *(const Vector2& LeftVal, const float& RightVal)
	{
		return Vector2(LeftVal.x * RightVal,LeftVal.y * RightVal);
	}
	Vector2 operator *(const float& LeftVal, const Vector2& RightVal)
	{
		return Vector2(LeftVal * RightVal.x,LeftVal * RightVal.y);
	}

	Vector2& operator *=(Vector2& LeftVal,const float& RightVal)
	{
		LeftVal.x *= RightVal;
		LeftVal.y *= RightVal;
		return LeftVal;
	}


	//////////////// Vector 3

	
	Vector3::Vector3()
			: x(0), y(0),z(0)
	{}
	Vector3::Vector3(float X, float Y, float Z)
		: x(X), y(Y), z(Z)
	{}
	Vector3::~Vector3(){}

	float Vector3::getLenght()
	{	
		return sqrt(pow(x,2) + pow(y,2));
	}
	/*float Vector3::getAngle()
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

	Vector3 operator -(const Vector3& RightVal)
	{
		return Vector3(-RightVal.x, -RightVal.y,-RightVal.z);
	}

	Vector3 operator +(const Vector3& LeftVal,const Vector3& RightVal)
	{
		return Vector3(LeftVal.x+RightVal.x,LeftVal.y+RightVal.y,LeftVal.z+RightVal.z);
	}
	Vector3 operator -(const Vector3& LeftVal,const Vector3& RightVal)
	{
		return Vector3(LeftVal.x-RightVal.x,LeftVal.y-RightVal.y,LeftVal.z-RightVal.z);
	}

	Vector3& operator +=(Vector3& LeftVal,const Vector3& RightVal)
	{
		LeftVal.x += RightVal.x;
		LeftVal.y += RightVal.y;
		return LeftVal;
	}
	Vector3& operator -=(Vector3& LeftVal,const Vector3& RightVal)
	{
		LeftVal.x -= RightVal.x;
		LeftVal.y -= RightVal.y;
		return LeftVal;
	}

	Vector3 operator /(const Vector3& LeftVal, const float& RightVal)
	{
		return Vector3(LeftVal.x / RightVal,LeftVal.y / RightVal, LeftVal.z / RightVal);
	}
	Vector3& operator /=(Vector3& LeftVal, const float& RightVal)
	{
		LeftVal.x /= (float)RightVal;
		LeftVal.y /= (float)RightVal;
		return LeftVal;
	}

	bool operator ==(const Vector3& LeftVal,const Vector3& RightVal)
	{
		if (LeftVal.x == RightVal.x && LeftVal.y == RightVal.y)
			return true;
		return false;
	}
	bool operator !=(const Vector3& LeftVal,const Vector3& RightVal)
	{
		if (LeftVal.x == RightVal.x && LeftVal.y == RightVal.y)
			return false;
		return true;
	}

	Vector3 operator *(const Vector3& LeftVal, const float& RightVal)
	{
		return Vector3(LeftVal.x * RightVal,LeftVal.y * RightVal, LeftVal.z * RightVal);
	}
	Vector3 operator *(const float& LeftVal, const Vector3& RightVal)
	{
		return Vector3(LeftVal * RightVal.x,LeftVal * RightVal.y, LeftVal * RightVal.z);
	}

	Vector3& operator *=(Vector3& LeftVal,const float& RightVal)
	{
		LeftVal.x *= RightVal;
		LeftVal.y *= RightVal;
		return LeftVal;
	}


	//////////////// Vector 4


	Vector4::Vector4()
			: x(0), y(0),z(0),w(0)
	{}
	Vector4::Vector4(float X, float Y, float Z, float W)
		: x(X), y(Y), z(Z), w(W)
	{}
	Vector4::~Vector4(){}

	float Vector4::getLenght()
	{	
		return sqrt(pow(x,2) + pow(y,2));
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

	Vector4& operator +=(Vector4& LeftVal,const Vector4& RightVal)
	{
		LeftVal.x += RightVal.x;
		LeftVal.y += RightVal.y;
		return LeftVal;
	}
	Vector4& operator -=(Vector4& LeftVal,const Vector4& RightVal)
	{
		LeftVal.x -= RightVal.x;
		LeftVal.y -= RightVal.y;
		return LeftVal;
	}

	Vector4 operator /(const Vector4& LeftVal, const float& RightVal)
	{
		return Vector4(LeftVal.x / RightVal,LeftVal.y / RightVal, LeftVal.z / RightVal, LeftVal.w / RightVal);
	}
	Vector4& operator /=(Vector4& LeftVal, const float& RightVal)
	{
		LeftVal.x /= (float)RightVal;
		LeftVal.y /= (float)RightVal;
		return LeftVal;
	}

	bool operator ==(const Vector4& LeftVal,const Vector4& RightVal)
	{
		if (LeftVal.x == RightVal.x && LeftVal.y == RightVal.y)
			return true;
		return false;
	}
	bool operator !=(const Vector4& LeftVal,const Vector4& RightVal)
	{
		if (LeftVal.x == RightVal.x && LeftVal.y == RightVal.y)
			return false;
		return true;
	}

	Vector4 operator *(const Vector4& LeftVal, const float& RightVal)
	{
		return Vector4(LeftVal.x * RightVal,LeftVal.y * RightVal, LeftVal.z * RightVal, LeftVal.w * RightVal);
	}
	Vector4 operator *(const float& LeftVal, const Vector4& RightVal)
	{
		return Vector4(LeftVal * RightVal.x,LeftVal * RightVal.y, LeftVal * RightVal.z, LeftVal * RightVal.w);
	}

	Vector4& operator *=(Vector4& LeftVal,const float& RightVal)
	{
		LeftVal.x *= RightVal;
		LeftVal.y *= RightVal;
		return LeftVal;
	}
}