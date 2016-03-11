#ifndef RACIONAL_H
#define RACIONAL_H
#include <string>
#include <iostream>

using std::string;
using std::ostream;
//using std::ostream;

class racional{
	double num, den;
	public:
		racional(int, int = 1);
		string toString() const;
		//const racional& simplificar();
		const racional& operator+=(const racional&);
		const racional& operator-=(const racional&);
		const racional& operator*=(const racional&);
		const racional& operator/=(const racional&);
		const racional& operator=(const racional&);
		friend ostream& operator<<(ostream& output, const racional&);

};
const racional operator+(const racional&, const racional&);
const racional operator-(const racional&, const racional&);
const racional operator*(const racional&, const racional&);
const racional operator/(const racional&, const racional&);

#endif


