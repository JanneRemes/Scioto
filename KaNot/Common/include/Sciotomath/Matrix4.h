#pragma once
#ifndef MATRIX4_H_SCIOTO
#define MATRIX4_H_SCIOTO

#include <Sciotomath\Vector4.h>

namespace Scioto
{
	class Matrix4
	{
	public:
		/**
		Creates Identity Matrix
		*/
		Matrix4();
		Matrix4(
			const Vector4& Column1,
			const Vector4& Column2,
			const Vector4& Column3,
			const Vector4& Column4);
		Matrix4(
			const float& c1r1,const float& c1r2,const float& c1r3,const float& c1r4,
			const float& c2r1,const float& c2r2,const float& c2r3,const float& c2r4,
			const float& c3r1,const float& c3r2,const float& c3r3,const float& c3r4,
			const float& c4r1,const float& c4r2,const float& c4r3,const float& c4r4);
		~Matrix4();

		float* GetElements();

		const Vector4& operator [](const unsigned int& index) const;
		Vector4& operator [](const unsigned int& index);

	private:
		Vector4 c1,c2,c3,c4;

	};

	Matrix4 operator *(const Matrix4& LeftVal, const Matrix4& RightVal);
	const Matrix4 operator *=(Matrix4& LeftVal, const Matrix4& RightVal);
	
}

#endif