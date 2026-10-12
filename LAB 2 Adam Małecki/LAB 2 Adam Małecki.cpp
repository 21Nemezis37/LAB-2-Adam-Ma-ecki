#include <iostream>
#include <stdlib.h>
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

						/*	int n;
							n = 0;
							cout << "Podaj dzielnik: ";
							cin >> n;
							for (int i = 0;  i <= 100; i++) {
								if (i % n == 0) {
									cout << i << endl;
								}
							}
						}*/

						//Zad.10

							/*int n;
							int l;
							l = 0;
							n = 0;
							cout << "Podaj dzielnik: ";
							cin >> n;
							for (int i = 0; i <= 100; i++) {
								if (i % n == 0) {
									l++;
								}
							}
							cout << "Liczba liczb podzielnych przez " << n << " w zakresie [0,100] wynosi: " << l << endl;
						}*/

						//Zad.11

		/*int a;
		int b;
		a = 0;
		b = 0;
		cout << "Podaj liczbe calkowita a: ";
		cin >> a;
		cout << "Podaj liczbe calkowita b: ";
		cin >> b;
		if (a == b) {
			cout << "Liczby sa rowne i nie mozna wkonac zadania :3" << endl;
		}
		else if (a > b) {
			for (int i = b; i <= a; i++) {
				if (i % 3 == 0) {
					cout << i << endl;
				}
			}
		}
		else if (a < b) {
			for (int i = a; i <= b; i++) {
				if (i % 3 == 0) {
					cout << i << endl;
				}
			}
		}
	}*/

	//Zad.12

	/*int n;
	double suma = 0.0;
	double l;
	n = 0;
	cout << "Podaj liczbe calkowita n: ";
	cin >> n;
	if (n <= 0) {
		cout << "Liczba musi być dodatnia i nie mozna wkonac zadania :3" << endl;
	}
	else
		cout << "Podaj " << n << " liczb rzeczywistych:" << endl;
	for (int i = 1; i <= n; i++) {
		cin >> l;
		suma += l;
	}
	double srednia = suma / n;
	cout << "Srednia arytmetyczna podanych liczb wynosi: " << srednia << endl;
	}*/

	//Zad.13

	/*for (int i = 100; i >= 0; i -= 1) {
		cout << i << endl;
	}
	return 0;
}*/
//Zad.14

	/*int a;
	int b;
	int c;
	a = 0;
	b = 0;
	c = 0;
	cout << "Podaj liczbe calkowita a: ";
	cin >> a;
	cout << "Podaj liczbe calkowita b: ";
	cin >> b;
	cout << "Podaj liczbe calkowita c: ";
	cin >> c;
	if (a == b || a == c || b == c) {
		cout << "Liczby sa rowne i nie mozna wkonac zadania :3" << endl;
	}
	else if (a < b && a < c) {
		cout << "Namniejsza liczba to: " << a << endl;
	}
	else if (b < a && b < c) {
		cout << "Najmniejsza liczba to: " << b << endl;
	}
	else if (c < a && c < b) {
		cout << "Najmniejsza liczba to: " << c << endl;
	}
}*/

//Zad.15

/*
int n;
int m;
n = 0;
m = 0;
cout << "Podaj ilosc losowych liczb: ";
cin >> n;
cout << "Podaj gorny zakres losowanych liczb: ";
cin >> m;
if (n <= 0 || m <= 0) {
	cout << "Liczby musza byc dodatnie i nie mozna wkonac zadania :3" << endl;
}
else {
	cout << "Wylosowane liczby to: " << endl;
	for (int i = 0; i <= n; i++) {
		int losowa = rand() % m + 1;
		cout << losowa << endl;
	}
}
}*/

//Zad.16

/*int a;
int l;
a = 0;
l = 0;
	cout << "Podaj szczensliwy numerek (liczbe calkowita) z przedzialu [1,10]: ";
	cin >> a;
	if (a < 1 || a > 10) {
		cout << "Liczba musi byc z przedzialu [1,10] i nie mozna wkonac zadania :3" << endl;
	}
	else
		for (int i = 0; i < 10; i++) {
			int losowa = rand() % 10;
			if (losowa == a) {
				l++;
			}
		}
	if (l == 0) {
		cout << "Niestety twoj szczensliwy numerek nie zostal wylosowany :c" << endl;
	}
	else if (l == 1) {
		cout << "Twoj szczensliwy numerek zostal wylosowany " << l << " raz :D" << endl;
	}
	else
	cout << "Twoj szczensliwy numerek zostal wylosowany " << l << " razy :D" << endl;
}*/