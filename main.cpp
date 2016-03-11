#include <iostream>
#include "racional.h"
#include <vector>
#include <string>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char*argv[]){
	vector <racional> racionales;
	vector <string> historial;

	int opcion;

	while(opcion != 7){
		cout << "------------------------------------------" << endl
			<< "1- Crear racionales" << endl
			<< "2.- Suma de racionales" << endl
			<< "3.- Resta de racionales" << endl
			<< "4.- Multiplicacion de racionales" << endl
			<< "5.- Division de racionales" << endl
			<< "6.- Ver historial de racionales" << endl
			<< "7.- Salir" << endl
			<< "Ingrese una opcion: ";
		cin >> opcion;
		cout << "---------------------------------------------" << endl;


		if (opcion == 1){
		  	int num, den, temp1;

		  	cout << "Ingrese el numerador: ";
		  	cin >> num;

		  	cout << "Ingrese el denominador: ";
		  	cin >> den;

		  	if (den < 0){
		  		temp1 = num;
		  		num = den;
		  		den = temp1;
		  	}

		  	while (den == 0){
		  		cout << "Ingresaste cero en el denominador!" << endl;
		  		cout << "Ingrese el denominador: ";
		  		cin >> den;
		  		cout << endl;
		  	}

			racional s(num, den);
			racionales.push_back(s);
		}

		if (opcion == 2){
			int indice1, indice2;

		  	for (int i = 0; i < racionales.size(); i++){
		  		cout << i << ".- " << racionales[i].toString() << endl;
		  	}

		  	cout << "Ingrese el primer racional: ";
		  	cin >> indice1;

		  	cout << "Ingrese el segundo racional: ";
		  	cin >> indice2;

		  	racional r = racionales[indice1] + racionales[indice2];
		  	cout << r.toString();
		  	cout << endl;
		}

		if (opcion == 3){
		  	int indice1, indice2;

		  	for (int i = 0; i < racionales.size(); i++){
		  		cout << i << ".- " << racionales[i].toString() << endl;
		  	}

		  	cout << "Ingrese el primer racional: ";
		  	cin >> indice1;

		  	cout << "Ingrese el segundo racional: ";
		  	cin >> indice2;

		  	racional r = racionales[indice1] - racionales[indice2];
		  	cout << r.toString();
		  	cout << endl;
		}

		if (opcion == 4){
		  	int indice1, indice2;

		  	for (int i = 0; i < racionales.size(); i++){
		  		cout << i << ".- " << racionales[i].toString() << endl;
		  	}

		  	cout << "Ingrese el primer racional: ";
		  	cin >> indice1;

		  	cout << "Ingrese el segundo racional: ";
		  	cin >> indice2;

		  	racional r = racionales[indice1] * racionales[indice2];
		  	cout << r.toString();
		  	cout << endl;
		}

		if (opcion == 5){
		  	int indice1, indice2;

		  	for (int i = 0; i < racionales.size(); i++){
		  		cout << i << ".- " << racionales[i].toString() << endl;
		  	}

		  	cout << "Ingrese el primer racional: ";
		  	cin >> indice1;

		  	cout << "Ingrese el segundo racional: ";
		  	cin >> indice2;

		  	racional r = racionales[indice1] / racionales[indice2];
		  	cout << r.toString();
		  	cout << endl;
		}

		if (opcion == 6){
		  	
		}

	}

	return 0;
}
