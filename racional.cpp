#include "racional.h"
#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::stringstream;
using std::cout;
using std::ostream;
using std::showpos;
using std::noshowpos;

racional::racional(int num, int den){
	this -> num = num;
	this -> den = den;
	int mayor = 0;

	if (num > den){
		mayor = num;
	}else{
		mayor = den;
	}

	for (int i = mayor; i > 1; i--){
		if ((num % i == 0) && (den % i == 0)){
			this -> num = num/i;
			this -> den = den/i;
			num = num/i;
			den = den/i;
		}
	}

	if (num == den){
		this -> num = num/num;
		this -> den = den/den;
	}
}

/*const racional& racional::simplificar(){
	int mayor = 0;

	if (num > den){
		mayor = num;
	}else{
		mayor = den;
	}

	for (int i = mayor; i > 1; i--){
		if ((num % i == 0) && (den % i == 0)){
			num = num/i;
			den = den/i;
		}
	}

	return *this;
}*/

const racional& racional::operator=(const racional& r){
	num = r.num;
	den = r.den;
	return *this;
}

const racional& racional::operator+=(const racional& r){
   	if (den == r.den){
   		den = den;
   		num = (num + r.num);
   	}else{
   		den = (r.den * den);
   		num = ((r.num * den) + (r.den * num));
   	}
   
   	return *this;
}

const racional& racional::operator-=(const racional& r){
   	if (den == r.den){
   		den = den;
   		num = (num - r.num);
   	}else{
   		den = (r.den * den);
   	}

   	return *this;
}

const racional& racional::operator*=(const racional& r){
	num = (r.num * num);
   	den = (r.den * den);
   	return *this;
}

const racional& racional::operator/=(const racional& r){
	num = (num * r.den);
   	den = (den * r.num);
   	return *this;
}


const racional operator+(const racional& lhs, const racional& rhs){
	racional retVal = lhs;
	retVal += rhs;
	return retVal;
}

const racional operator-(const racional& lhs, const racional& rhs){
	racional retVal = lhs;
	retVal -= rhs;
	return retVal;
}

const racional operator*(const racional& lhs, const racional& rhs){
	racional retVal = lhs;
	retVal *= rhs;
	return retVal;
}

const racional operator/(const racional& lhs, const racional& rhs){
	racional retVal = lhs;
	retVal /= rhs;
	return retVal;
}

string racional::toString() const{
	stringstream ss;
	int mayor = 0;

	if (den == 1){
		ss << num;
	}else if (den == num){
		ss << num/den;
	}else if(num == 0){
		ss << 0;
	}else{
		ss << num << "/" << den;
	}

	

	return ss.str();
}

ostream& operator<<(ostream& output, const racional& c){
	if (c.den == 1){
		output << c.num;
	}else if (c.den == c.num){
		output << c.num;
	}else if(c.num == 0){
		output << 0;
	}else{
		output << c.num << "/" << c.den;
	}

	output << noshowpos;
	return output;
}