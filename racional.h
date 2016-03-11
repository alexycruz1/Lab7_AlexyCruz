#ifndef RACIONAL_H
#define RACIONAL_H
#include <string>

using std::string;

class racional{
	double num, den;
	public:
		racional(int = 1, int = 1);
		const string toString()const;
		const double toDouble()const;
		const racional& assign(const racional&);
		const racional sum(const racional&)const;
		const racional resta(const racional&)const;
		const racional minus()const;
		const racional& add(const racional&);
		const racional& sub(const racional&);
		const racional& multi(const racional&);
		const racional product(const racional&)const;
		const racional cociente(const racional&)const;
		const racional& division(const racional&);
};
#endif


