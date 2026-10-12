// LAB 2 Adam Małecki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {

	// Zad.1
	/*
		for(int i = 0; i <= 10; i++) {
			cout << i << endl;
		}
		return 0;
	}	Dodanie zmiana na <= sprawia, że pętla nie zatrzyma się na 9 tylko na 10*/

	/*
		for (int i = 5; i < 7; i++) {
			cout << i << endl;
		}
		return 0;
	}	Pokazuje wartości [5,7)*/

	/*
		for (int i = 5; i <= 7; i++) {
			cout << i << endl;
		}
		return 0;
	}	Pokazuje wartości [5,7]*/

	/*
		for (int i = 0; i <= 10; i+=2) {
			cout << i << endl;
		}
		return 0;
	}	Pokazuje co drugie liczby z zakresu [0,10] */

	/*
		for (int i = 10; i >= 0; i--) {
			cout << i << endl;
		}
		return 0;
	}	Kod pokazuje wartości od 10 do 0*/

	//Zad.2 i Zad.3
	/*
		int fahr, celsius;
		int start, limit, krok;

		start = 0;
		limit = 200;
		krok = 20;

		fahr = start;
		while (fahr <= limit) {
			celsius = 5 * (fahr - 32) / 9;
			cout << fahr << "\t" << celsius << endl;
			fahr = fahr + krok;
		}
	}*/

	/*
		int fahr, celsius;
		int start, limit, krok;

		start = 0;
		limit = 200;
		krok = 20;

		fahr = start;
		for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) {
			float celsius = (5.0 / 9.0) * (fahr - 32.0);
			cout << fahr << "\t" << celsius << endl;
		}
	}	Zmiany jakie się pojawiły to potrzeba zdefiniowania miejsca po przecinku dla zmiennych które są cyframi, zmienna celsius została wsadzona do float i kolejność działań została zmieniona */

	//Zad.5
	/*
		int fahr, celsius;
		int start, limit, krok;

		start = 0;
		limit = 200;
		krok = 20;

		fahr = start;
		for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) {
			float celsius = (5 / 9) * (fahr - 32.0);
			cout << fahr << "\t" << celsius << endl;
		}
	}	Zmiana z 5.0/9.0 na 5/9 spowodowała, że wynik jest zawsze 0, ponieważ dzielenie całkowite zwraca wynik całkowity.*/

	//Zad.6

	/*
		int fahr, celsius;
		int start, limit, krok;

		start = 0;
		limit = 0;
		krok = 0;
		cout << "Podaj limit: ";
		cin >> limit;
		cout << "Podaj krok: ";
		cin >> krok;

		fahr = start;
		for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) {
			float celsius = (5.0 / 9.0) * (fahr - 32.0);
			cout << fahr << "\t" << celsius << endl;
		}
	} */

	//Zad.7

	/*int r;
	int i;
	for (int i = 0; i < 10; i++) {
		cout << "Podaj liczbe rzeczywista: ";
		cin >> r;
		if (r > 0) {
			cout << r << endl;
		}
	}
}*/

//Zad.8

/*	for (int i = 0; i <= 100; i+=2) {
		cout << i << endl;
	}
	return 0;
}*/

//Zad.9

	int n;
	int i;
	n = 0;
	cin >> n;
	for (int i = 0; i <= 100; i++) {
		if (i % n == 0) {
			cout << i << endl;
		}
	}
}