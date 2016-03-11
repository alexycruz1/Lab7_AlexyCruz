#include "racional.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::stringstream;
using std::cout;

racional::racional(int num, int den){
	this -> num = num;
	this -> den = den;
	int mayor = 0;

	if (num > den){
		mayor = num;
	}else{
		mayor = den;
	}

	for (int i = 1; i < mayor; i++){
		if ((num % i == 0) && (den % i == 0)){
			this -> num = num/i;
			this -> den = den/i;
		}
	}

	if (num == den){
		this -> num = num/num;
		this -> den = den/den;
	}
}

const string racional::toString()const{
	stringstream ss;
	ss<< num << "/" << den;
	return ss.str();
} 

const double racional::toDouble()const{
	double nuevo = num/den;
	return nuevo;
}

const racional& racional::assign(const racional& r){
	num = r.num;
	den = r.den;
	return *this;
}

const racional racional::sum(const racional& r)const{
	if (den == r.den){
		return racional(num + r.num, den);
	}else{
		return racional(((num * r.den) + (den * r.num)), den * r.den);
	}
}

const racional racional::resta(const racional& r)const{
	if (den == r.den){
		return racional(num - r.num, den);
	}else{
		return racional(((num * r.den) - (den * r.num)), den * r.den);
	}
}

const racional racional::minus()const{
	return racional(-num, -den);
}
		
const racional& racional::add(const racional& r){
	if (den == r.den){
		num += r.num;
		den = r.den;
		return *this;
	}else{
		num = ((num * r.den) + (den * r.num));
		den = (den * r.den);
		return *this;
	}
	
}
		
const racional& racional::sub(const racional& r){
	return add(r.minus());
}

const racional& racional::multi(const racional& r){
	num *=r.num;
	den *= r.den;
	return *this;
}
	
const racional racional::product(const racional& r) const{
	return racional(num * r.num, den * r.den);
}

const racional racional::cociente(const racional& r)const{
	return racional(num * r.den, den * r.num);
}

const racional& racional::division(const racional& r){
	num = num * r.den;
	den = den * r.num;
	return *this;
}

/*

Copias superficiales duplican lo menos posible. 
Una copia superficial de una colección es una copia 
de la estructura de la colección, no de los elementos. 
Con una copia superficial, dos colecciones comparten 
ahora los elementos individuales.

Copias en profundidad duplican todo. 
Una copia en profundidad de una colección 
es dos colecciones con todos los elementos 
de la colección original duplicado.

En definitiva, depende de lo que apunta a lo que.
En una copia superficial, objeto B señala a la ubicación 
del objeto A en la memoria. En copia en profundidad, 
todo en objeto de A memoria se copia a la ubicación de memoria objeto de B*/