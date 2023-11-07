
#include <iostream>
#include <stdexcept>

#include "class.h"

using namespace std;


//конструктор с 2-мя параметрами
Fraction::Fraction(int num, int denom) {

	if (denom == 0) {
		throw invalid_argument("Denominator mustn't equal 0");
	}
	this->_num = num;
	this->_denom = denom;

	simplify();
}

//функция сокращения дроби
void Fraction::simplify() {
	int gcd_value = gcd(_num, _denom);
	_num /= gcd_value;
	_denom /= gcd_value;
}

//конструктор копирования
Fraction::Fraction(const Fraction& copy) {
	_num = copy._num;
	_denom = copy._denom;
}

// для доступа к числителю и знаменателю вне класса
int Fraction::get_Num() const {
	return _num;
}
int Fraction::get_Denom() const {
	return _denom;
}

//метод сложения дробей
Fraction Fraction::add(const Fraction& other) const {
	int reNum = (_num * other._denom) + (other._num * _denom);
	int reDenom = _denom * other._denom;
	Fraction result(reNum, reDenom);
	result.simplify();
	return result;
}

//метод умножения дробей
Fraction Fraction::multiply(const Fraction& other) const {
	int reNum = _num * other._num;
	int reDenom = _denom * other._denom;
	Fraction result(reNum, reDenom);
	result.simplify();
	return result;
}

//метод деления дробей
Fraction Fraction::divide(const Fraction& other) const {
	int reNum = _num * other._denom;
	int reDenom = _denom * other._num;
	Fraction result(reNum, reDenom);
	result.simplify();
	return result;
}

//функция вывода дроби 
void Fraction::print() {
	cout << _num << "/" << _denom;
}


int Fraction::gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
