#pragma once
#include <iostream>
using namespace std;

class Fraction {
public:

	
	Fraction(int num, int denom);
	void simplify();
	Fraction(const Fraction& copy);
		
	int get_Num() const;
	int get_Denom() const;

	Fraction add(const Fraction& other) const;
	Fraction multiply(const Fraction& other) const;
	Fraction divide(const Fraction& other) const;
	
	void print();


private:
	int _num, _denom;
	int gcd(int a, int b);
};
