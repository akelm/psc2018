//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	// zad 25
//	// dopuszczalne t lub T, tylko 1 znak
//
//	// info o programie
//	printf("Program sprawdzajacy, czy wcisnieto t/T.\nAutor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Wcisnij klawisz.\n");
//	char wcisniety; // wcisniety klawisz
//	wcisniety = getchar();
//	if (getchar() != '\n') {
//		printf("Wciecej niz jeden klawisz. Koniec programu.\n");
//		return 0;
//	}
//
//	if (wcisniety == 't' || wcisniety == 'T') {
//		printf("Wcisnieto t/T.\n");
//	} else {
//		printf("Wcisnieto klawisz inny niz t/T.\n");
//	}
//
//	printf("Koniec programu.\n");
//}
//
//int main() {
//	// zad 25
//	// dopuszczalny dowolny ciag znakow za t/T
//
//	// info o programie
//	printf("Program sprawdzajacy, czy wcisnieto t/T.\nAutor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Wcisnij klawisz.\n");
//	char wcisniety; // wcisniety klawisz
//	wcisniety = getchar();
//	//if (getchar() != '\n') {
//	//	printf("Wciecej niz jeden klawisz. Koniec programu.\n");
//	//	return 0;
//	//}
//
//	if (wcisniety == 't' || wcisniety == 'T') {
//		printf("Wcisnieto t/T.\n");
//	} else {
//		printf("Wcisnieto klawisz inny niz t/T.\n");
//	}
//
//	printf("Koniec programu.\n");
//}
//
//int main() {
//	// zad 26
//
//	// info o programie
//	printf("Program sprawdzajacy, czy punkt nalezy do kola o srodku (0,0) i promieniu 1.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj wspolrzedne punktu w formacie x,y.\n");
//	float x, y;
//	if (scanf_s("%f,%f", &x, &y) != 2 || getchar() != '\n') {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Podales wspolrzedne %g,%g.\n\n", x, y);
//
//	// wynik
//	printf("Punkt (%g,%g)%s nalezy do kola o srodku (0,0) i promieniu 1.\n\n", x, y, (x * x + y * y <= 1) ? "" : " nie");
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 27
//
//	// info o programie
//	printf("Program sprawdzajacy, czy punkt lezy na okregu, wewnatrz lub na zewnatrz kola o srodku (0,0) i promieniu 1.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj wspolrzedne punktu w formacie x,y.\n");
//	float x, y;
//	if (scanf_s("%f,%f", &x, &y) != 2 || getchar() != '\n') {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Podales wspolrzedne %g,%g.\n\n", x, y);
//
//	// wynik
//	printf("Punkt (%g,%g) lezy %s kola o srodku (0,0) i promieniu 1.\n\n", x, y, (x * x + y * y < 1) ? "wewnatrz" :
//		(x * x + y * y == 1) ? "na okregu" :
//		"na zewnatrz");
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 28
//
//	// info o programie
//	printf("Program sprawdzajacy, czy punkt lezy w 1. cwiartce ukl. wsp.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj wspolrzedne punktu w formacie x,y.\n");
//	float x, y;
//	if (scanf_s("%f,%f", &x, &y) != 2 || getchar() != '\n') {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Podales wspolrzedne %g,%g.\n\n", x, y);
//
//	// wynik
//	printf("Punkt (%g,%g)%s lezy w 1. cwiartce ukl. wsp.\n\n", x, y, (x >= 0 && y >= 0) ? "" : " nie");
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 29
//
//	// info o programie
//	printf("Program sprawdzajacy, w ktorej cwiartce / na ktorej osi lezy punkt.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj wspolrzedne punktu w formacie x,y.\n");
//	float x, y;
//	if (scanf_s("%f,%f", &x, &y) != 2 || getchar() != '\n') {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Podales wspolrzedne %g,%g.\n\n", x, y);
//
//	// wynik
//	printf("Punkt (%g,%g) lezy ", x, y);
//	if (x > 0 && y > 0) {
//		printf("w 1. cwiartce");
//	} else if (x > 0 && y < 0) {
//		printf("w 2. cwiartce");
//	} else if (x < 0 && y < 0) {
//		printf("w 3. cwiartce");
//	} else if (x < 0 && y > 0) {
//		printf("w 4. cwiartce");
//	} else if (x == 0 && y != 0) {
//		printf("na osi x");
//	} else if (y == 0 && x != 0) {
//		printf("na osi y");
//	} else {
//		printf("na obu osiach");
//	}
//	printf(" ukladu wspolrzednych.\n\n");
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 30
//
//	// info o programie
//	printf("Program sprawdzajacy, czy liczba wymierna jest calkowita i zaokraglajacy ja.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj liczbe wymierna.\n");
//	float liczba;
//	if (scanf_s("%f", &liczba) != 1 || getchar() != '\n') {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Podales liczbe %g.\n\n", liczba);
//
//	// wynik
//	if (floor(liczba) == liczba) {
//		printf("Liczba %g jest calkowita.\n\n", liczba);
//	} else {
//		printf("Liczba %g nie jest calkowita, zaokragla sie w dol do %g.\n\n", liczba, floor(liczba));
//	}
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 31
//
//	// info o programie
//	printf("Program sprawdzajacy, gdzie lezy punkt wzgledem wykresu podanej funkcji.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj wspolrzedne punktu w formacie x,y.\n");
//	float x, y;
//	if (scanf_s("%f,%f", &x, &y) != 2 || getchar() != '\n') {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Podales wspolrzedne %g,%g.\n\n", x, y);
//
//	// wynik
//	if (x <= 0 || x >= 1) {
//		printf("Punkt spoza dziedziny.\n\n");
//	} else {
//		double wartosc = sqrt(abs(acos(x) + exp(x) / log(x)));
//		printf("Punkt (%g,%g) jest %s funkcji.\n\n", x, y, (y > wartosc) ? "nad wykresem" :
//			(y < wartosc) ? "pod wykresem" :
//			"punktem wykresu");
//	}
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 32
//	int x;
//	printf("Testowanie instr. przypisania.\n\n");
//	x = 3;
//	printf("Po x=3; wart. x jest: %d\n", x);
//	x = 5;
//	printf("Po x=5; wart. x jest: %d\n", x);
//	x += 2;
//	printf("Po x=x+2; wart. x jest: %d\n", x);
//	x *= (x + 1);
//	printf("Po x=x*(x+1); wart. x jest: %d\n", x);
//	x += 1;
//	printf("Po x=x+1; wart. x jest: %d\n", x);
//	x -= (3 / 4);
//	printf("Po x=x-(3/4); wart. x jest: %d\n", x);
//	x /= (x + 1);
//	printf("Po x=x/(x+1); wart. x jest: %d\n", x);
//	x -= 1;
//	printf("Po x--; wart. x jest: %d\n", x);
//	printf("\n\nKoniec programu. \n");
//	return 0;
//}
//
//int main() {
//	// zad 33
//
//	// info o programie
//	printf("Program testujacy operator zwiekszania.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj liczbe calkowita.\n");
//	int x;
//	if (scanf_s("%d", &x) != 1 || getchar() != '\n') {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Podales x = %d.\n\n", x);
//
//	// wynik
//	int y;
//	printf("x = %d\n", x);
//	y = x + 7; /*1*/
//	x += 1;
//	printf("y=(x++)+7 = %d\n\n", y);
//	printf("x = %d\n", x);
//	x += 1;
//	y = x + 7; /*2*/
//	printf("y=(++x)+7 = %d\n\n", y);
//	printf("x = %d\n", x);
//	y = 7 + x; /*3*/
//	x += 1;
//	printf("y=7+(x++) = %d\n\n", y);
//	printf("x = %d\n", x);
//	x += 1;
//	y = 7 + x; /*4*/
//	printf("y=7+(++x) = %d\n\n", y);
//	printf("x = %d\n", x);
//	y = 7 + (x + 1); /*5*/
//	printf("y=7+(x+1) = %d\n\n", y);
//	printf("x = %d\n", x);
//
//	printf("Koniec programu.\n");
//	return 0;
//}