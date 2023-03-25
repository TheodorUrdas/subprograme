#pragma once
#include <iostream>
using namespace std;

void citire(int v[], int& n) {

	cout << "n=";
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
}

void afisare(int v[], int n) {

	for (int i = 0; i < n; i++) {
		cout << v[i];
	}
}

bool suma(int v[], int p, int sum) {

	int s = 0;
	for (int i = 0; i < p; i++) {
		s = s + v[i];
		
	}
	if (s >= sum) {
		return true;
	}
	else {
		return false;
	}
	
}

long long NrSecvS(int a[], int n, int S) {

	int ct = 0;
	bool s = true;
	for (int i = 0; i < n; i++) {
		s = suma(a, i, S);
		if (s == true) {
			ct++;
		}
	}
	return ct;
}

int sumaNr(int n) {

	int suma = 0;
	while (n != 0) {
		suma = suma + n % 10;
		n = n / 10;
	}
	return suma;

}

int DouaNumere(int a[], int n, int sumaA, int p) {

	int suma = 0;
	int sumaMax = 0;
	for (p=p+1; p < n; p++) {
		suma = sumaNr(a[p]);
		if (suma = sumaA && suma > sumaMax) {
			sumaMax = suma;
			
		}
	}
	return sumaMax;
}