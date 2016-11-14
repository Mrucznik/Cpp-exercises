#pragma once

template <class T> class Complex
{
private:
	T real;
	T imaginary;
public:
	//konstruktory
	Complex() : real(0), imaginary(0)
	{
	};
	
	Complex(T real) : real(real), imaginary(0)
	{
	};
	
	Complex(T real, T imaginary) : real(real), imaginary(imaginary)
	{
	};
	
	//operatory
	Complex& operator=(const Complex& c)
	{
		real = c.real;
		imaginary = c.imaginary;
		return *this;
	};
	
	Complex& operator=(const T t)
	{
		real = t;
		imaginary = 0;
		return *this;
	};
	
	Complex& operator+=(Complex c)
	{
		real += c.real;
		imaginary += c.imaginary;
		return *this;
	};
	
	Complex& operator-=(Complex c)
	{
		real -= c.real;
		imaginary -= c.imaginary;
		return *this;
	};
	
	Complex& operator*=(Complex c)
	{
	};
	
	Complex& operator/=(Complex c)
	{
	};
	
	Complcex operator+(const Complex& c) const
	{
		return Complex(real+c.real, imaginary+c.imaginary);
	};
	
	Complex operator-(const Complex& c) const
	{
		return Complex(real-c.real, imaginary-c.imaginary);
	};
	
	Complex operator*(const Complex& c) const
	{
	};
	
	Complex operator/(const Complex& c) const
	{
	};
	
	Complex operator-() const
	{
		return Complex(-real, -imaginary);
	};
	
	//metody
	T GetReal()
	{
	};
	
	T GetImaginary()
	{
	};
	
	T GetAbsolute()
	{
	};
	
	T GetArgument()
	{
	};
};
