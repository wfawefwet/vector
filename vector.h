#pragma once
#include<iostream>
#ifndef VECTOR_H_
#define VECTOR_H_
namespace VECTOR
{
	class Vector
	{
	public:
		enum Mode { RECT, POL };  //直角坐标系 极坐标
	private:
		double x;
		double y;   
		double mag;    //大小,就是长度
		double ang;   //角度
		Mode mode;      //方法

		void set_mag();   
		void set_ang();
		void set_x();
		void set_y();
	public:
		Vector();
		Vector(double n1, double n2, Mode from = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		~Vector();
		double xval() const { return x; }
		double yval() const { return y; }
		double magval() const { return mag; }
		double angval() const { return ang; }

		void polar_mode();
		void rect_mode();

	//operator overloading
		Vector operator+(const Vector& b) const;
		Vector operator-(const Vector& b) const;
		Vector operator-() const;
		Vector operator*(double n) const;
	

	//firends
		friend Vector operator*(double n, const Vector& a);
		friend std::ostream&
			operator<<(std::ostream& os, const Vector& v);
			
	};
	






}




#endif // !VECTOR_H_
