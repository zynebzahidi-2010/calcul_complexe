#pragma once
class Complex
{
private:
	double re;
	double img;
public:
	
	Complex(double, double);
	Complex(const Complex& origianl);

	Complex operator+( Complex z)const;
	Complex operator+( double a)const;

	Complex operator-( Complex c)const;
	Complex operator-(double a)const;

	Complex operator*(const Complex z)const;
	Complex operator*(double a)const;

	Complex operator/(const Complex z)const;
	Complex operator/(double a)const;
	

	bool operator == (const Complex z)const;
	bool operator == (double a)const;

	
	bool operator < (const Complex z)const;
	bool operator < (double a)const;
	/*
	bool operator !== (const Complex z)const;
	bool operator !== (double a)const;

	bool operator > (const Complex z)const;
	bool operator > (double a)const;
	*/
	
	void afficher() const;
	~Complex();

};

