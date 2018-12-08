//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	// zad 34
//
//	// info o programie
//	printf("Program liczacy wartosc funkcji f.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj liczbe:\n");
//	float x;
//	if (1 != scanf_s("%f", &x) || getchar() != '\n') {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Podales wartosc x = %g.\n\n", x);
//
//	// wynik
//	double tmp1 = x * x + 1;
//	double tmp2 = sin(tmp1);
//	double f = sqrt(tmp1) + log(tmp1) / (5 + tmp2) - exp(tmp2);
//	printf("Dla x = %g wartosc funkcji f wynosi %g.\n", x, f);
//
//	//double f2 = sqrt(x*x + 1) + log(x*x + 1) / (5 + sin(x*x + 1)) - exp(sin(x*x + 1));
//	//printf("f2 = %g.\n",f2);
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 35
//
//	// info o programie
//	printf("Program liczacy wartosc funkcji f.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj liczbe:\n");
//	float x;
//	if (1 != scanf_s("%f", &x) || '\n' != getchar()) {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Podales wartosc x = %g.\n\n", x);
//
//	// wynik
//	x = x*x;
//	x = x*x;
//	printf("x^8 = %g.\n\n", x*x);
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 36
//
//	// info o programie
//	printf("Program liczacy wartosc funkcji f.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj liczbe:\n");
//	float x;
//	if (1 != scanf_s("%f", &x) || '\n' != getchar()) {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Podales wartosc x = %g.\n\n", x);
//
//	// wynik
//	double wynik = x - 2;
//	wynik = wynik*(13 + wynik*(17 + 23*wynik));
//	printf("f(x) = %g.\n\n",  wynik);
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 37
//
//	// info o programie
//	printf("Program liczacy wartosc funkcji f.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj liczby w formacie x,y co do modulu mniejsze od 1:\n");
//	float x,y;
//	if (2 != scanf_s("%f,%f", &x, &y) || '\n' != getchar() || fabs(x) >= 1 || fabs(y) >= 1) {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Podales liczby x = %g, y = %g.\n\n", x, y);
//
//	// wynik
//	/*double tmp1 = x*x;
//	double tmp2 = tmp1 + y*y;
//	double wynik = y + sqrt(tmp2) + tmp2 / tmp1;*/
//	x = x*x;
//	double wynik = x + y*y;
//	wynik = y + sqrt(wynik) + wynik/cos(x);
//
//	printf("f(x) = %g.\n\n", wynik);
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 38
//
//	// info o programie
//	printf("Program liczacy wartosc funkcji f.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj 2 liczby calkowite w formacie x,y:\n");
//	int x, y;
//	if (2 != scanf_s("%d,%d", &x, &y) || '\n' != getchar()) {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Podales liczby x = %d, y = %d.\n\n", x, y);
//
//	printf("Podaj numer operacji:\n");
//	printf("1 - dodawanie\n");
//	printf("2 - odejmowanie\n");
//	printf("3 - mnozenie\n");
//	printf("4 - dzielenie\n");
//	int operacja;
//	if (1 != scanf_s("%d", &operacja) || '\n' != getchar() || operacja > 4 || operacja < 1) {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Wybrales %d.\n\n", operacja);
//
//	// wynik
//	//if (1 == operacja) {
//	//	printf("x + y = %d", x + y);
//	//} else if (2 == operacja) {
//	//	printf("x - y = %d", x - y);
//	//} else if (3 == operacja) {
//	//	printf("x * y = %d", x * y);
//	//} else if (0 != y) {
//	//	printf("x / y = %d", x / y);
//	//} else {
//	//	printf("Dzielenie przez 0!");
//	//}
//	
//	switch (operacja) {
//		case 1: {
//			printf("x + y = %d", x + y);
//			break;
//		}
//		case 2: {
//			printf("x - y = %d", x - y);
//			break;
//		}
//		case 3: {
//			printf("x * y = %d", x * y);
//			break;
//		}
//		case 4: {
//			if (0 != y) {
//				printf("x / y = %d", x / y);
//			} else {
//				printf("Dzielenie przez 0!");
//			}
//			break;
//		}
//	}
//
//
//	printf("\n\n");
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 39
//
//	// info o programie
//	printf("Program liczacy wartosc funkcji f.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj liczbe zmiennopozycyjna:\n");
//	float x;
//	if (1 != scanf_s("%f", &x) || '\n' != getchar()) {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Podales liczbe x = %g.\n\n", x);
//
//	// wynik
//	double wynik = (x > 0) ? pow(2,x): -1;
//	printf("f(x) = %g.\n\n", wynik);
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 40
//
//	// info o programie
//	printf("Program liczacy odleglosc R punktu od pocz. ukl. wsp..\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj 2 liczby zmiennopozycyjne w formacie x,y:\n");
//	double x, y;
//	if (2 != scanf_s("%lf,%lf", &x, &y) || '\n' != getchar()) {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Podales liczby x = %g, y = %g.\n\n", x, y);
//
//	// wyniki
//	double wynik1 = sqrt(x*x + y * y);
//	double wynik2;
//	double xabs = fabs(x);
//	double yabs = fabs(y);
//	if (0 == xabs) {
//		wynik2 = yabs;
//	}
//	else if (xabs >= yabs) {
//		double tmp = yabs / xabs;
//		wynik2 = x * sqrt(1 + tmp * tmp);
//	}
//	else {
//		double tmp = xabs / yabs;
//		wynik2 = yabs * sqrt(1 + tmp * tmp);
//	}
//
//	if (wynik1 == wynik2) {
//		printf("OBA ALGORYTMY DAJA TEN SAM WYNIK.\n");
//		printf("Odleglosc punktu (%g,%g) od (0,0) wynosi %.17g.\n",x,y,wynik1);
//	} else {
//		printf("ALGORYTMY DAJA ROZNE WYNIKI.\n");
//		printf("Odleglosc punktu (%g,%g) od (0,0) wynosi:\n",x,y);
//		printf(" -wg \"klasycznego\" algorytmu %.17g,\n",wynik1);
//		printf(" -wg \"specjalnego\" algorytmu %.17g.\n\n", wynik2);
//		printf("Wartosc bezwzgledna roznicy miedzy wynikami:\n %30.17g\n\n",fabs(wynik1-wynik2));
//	}
//
//	printf("Koniec programu.\n");
//	return 0;
//	/*Roznica w wynikach bierze sie z ograniczonej dokladnosci przechowywania liczb zmiennoprzecinkowych, dla double
//	od 2.3E-308 do 1.7E+308. Przy algorytmie klasycznym najpierw otrzymuje sie duza x^2 + y^2, ktora dla bardzo duzych
//	lub bardzo malych argumentow musi zostac zaokraglona do formatu double, aby potem i tak otrzymac z niej pierwiastek.
//	To tlumaczy roznice dla argumentow 1e+/-154 i 1e+/-155. 1e-400 jest juz poza zakresem double, wiec wyniki sa takie same.
//	Specjalny algorytm poprawia dokladnosc unikajac "tworzenia liczby bardzo odleglej od 0 na granicy dokladnosci przechowywania, 
//	zeby potem otrzymac mniej odlegla", sprowadzajac problem do iloczynu wiekszego z argumentow i pierwiastka z liczby bliskiej 1.
//	*/
//}
//
