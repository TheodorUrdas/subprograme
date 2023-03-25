#pragma once
#include <iostream>
using namespace std;
#include "functii.h"

//Scrieţi definiția completă a subprogramului C++ cu antetul:
//long long NrSecvS(int a[], int n, int S)
//Subprogramul returnează numărul de secvențe din vector care au suma strict mai mare decât S.
void pb1() {

	int a[1000], n, S, ct = 0;
	citire(a, n);
	cout << "S=";
	cin >> S;
	
	cout << NrSecvS(a, n, S);
}

//Scrieti definitia completa a programului C++ cu antetul: 
//int DouaNumere(int a[], int n)
//Subprogramul returneaza suma maxima care poate fi obtinuta adunand doua numere din a care au aceeasi suma a cifrelor. Daca nu exista doua numere cu 
//aceeasi sima a cifrelor, atunci functia va returna -1.
void pb2() {

	int a[1000], n;
	citire(a, n);

	int sumaMax = 0;
	for (int i = 0; i < n; i++) {
		int suma = DouaNumere(a, n, i, a[i]);
		if (suma > sumaMax) {
			sumaMax = suma;
		}
	}
	cout << sumaMax;
}