//#include <stdio.h>
//
//int main() {
//	// zad 17
//
//	// info o programie
//	printf("Program wypisuje liczbe na ekranie.\n");
//	printf("Autorem programu jest Anna Kelm.\n\n");
//	
//	printf("Podaj liczbe calkowita:\n");
//	int liczba; // liczba podana przez uzytkowanika
//	scanf_s("%d", &liczba);
//	printf("Podano liczbe %d.\n\n", liczba);
//
//	printf("Koniec programu.\n");
//	return 0;
//	// podanie asf wyswietla duza liczbe ujemna
//	// podanie liczby zmiennoprzeciwkowej wyswietla czesc calkowita
//	// podanie a45b wyswietla duza liczbe ujemna
//	// podanie duzej liczby calkowitej daje -1
//}
//
//int main() {
//	// zad 18
//
//	// info o programie
//	printf("Program wypisuje liczbe na ekranie.\n");
//	printf("Autorem programu jest Anna Kelm.\n\n");
//
//	printf("Podaj liczbe wymierna w postaci rozw. dziesietnego:\n");	
//	float liczba; // liczba podana przez uzytkowanika
//	scanf_s("%f", &liczba);
//	printf("Podano liczbe %f.\n\n", liczba);
//
//	printf("Koniec programu.\n");
//	return 0;
//	// -5 daje -5.000000
//	// 9.45 daje 9.450000\
//	// 234.234 daje 234.234000
//	// 4.56e4 daje 45600.000000
//	// 0.3 daje 0.300000
//	// 34e daje duza liczbe ujemna
//	// e45 daje duza liczbe ujemna
//	// -.2e daje duza liczbe ujemna
//	// 3.3e1894 daje inf
//	// 3 daje 3.000000
//	// 2 daje 2.000000
//	// asf daje duza liczbe ujemna
//	// a45b daje duza liczbe ujemna
//	// 123456789123456789123456789 daje 123456790068172987402551296.000000
//}
//
//int main() {
//	// zad 19
//
//	// info o programie
//	printf("Program wypisuje liczby na ekranie.\n");
//	printf("Autorem programu jest Anna Kelm.\n\n");
//	
//	// liczby podane przez uzytkowanika
//	int liczba1;
//	int liczba2;
//
//	printf("Podaj pierwsza liczbe calkowita:\n");
//	scanf_s("%d", &liczba1);
//	printf("Podaj druga liczbe calkowita:\n");
//	scanf_s("%d", &liczba2);
//	printf("Podano pierwsza liczbe %d.\n", liczba1);
//	printf("Podano druga liczbe %d.\n\n", liczba2);
//
//	printf("Koniec programu.\n");
//	return 0;
//	// asf, a45b - nie pobiera drugiej zmiennej, wpisuje obie takie same duze liczby calk. ujemne
//	// 4a - nie pobiera drugiej zmiennej, wypisuje pierwsza jako 4, a druga jako duza liczbe calk ujemna
//	// 9.45 - nie pobiera drugiej zmiennej, wypisuje pierwsza jako 9, a druga jako duza liczbe calk ujemna
//
//}
//
//
//int main() {
//	// zad 20
//
//	// info
//	printf("Program wypisuje liczby na ekranie.\n");
//	printf("Autorem programu jest Anna Kelm.\n\n");
//
//	// liczby podane przez uzytkownika
//	int liczba1;
//	int liczba2;
//
//	// wczytanie i sprawdzenie pierwszej liczby
//	printf("Podaj pierwsza liczbe calkowita:\n");
//	if (scanf_s("%d",&liczba1) != 1 || getchar() != '\n') {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//
//	// wczytanie i sprawdzenie drugiej liczby
//	printf("Podaj druga liczbe calkowita:\n");
//	if (scanf_s("%d", &liczba2) != 1 || getchar() != '\n') {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//
//	// wypisanie liczb
//	printf("Podano pierwsza liczbe %d.\n", liczba1);
//	printf("Podano druga liczbe %d.\n", liczba2);
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//
//
//int main() {
//	// zad 21
//
//	// info
//	printf("Program wypisuje liczbe szesnastkowa jako dziesietna.\n");
//	printf("Autorem programu jest Anna Kelm.\n\n");
//
//	// liczba podana przez uzytkownika
//	int liczba;
//
//	// wczytanie i sprawdzenie liczby
//	printf("Podaj pierwsza liczbe calkowita w systemie szesnastkowym:\n");
//	if (scanf_s("%x", &liczba) != 1 || getchar() != '\n') {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//
//	printf("Podana liczba to w systemie dziesietnym %d.\n", liczba);
//
//	printf("Koniec programu.\n");
//	return 0;
//
//	// liczby ujemne sa poprawnie wypisywane
//}
//
//int main() {
//	// zad 22
//
//	// info
//	printf("Program wypisuje liczbe dziesietna jako szesnastkowa.\n");
//	printf("Autorem programu jest Anna Kelm.\n\n");
//
//	// liczba podana przez uzytkownika
//	int liczba;
//
//	// wczytanie i sprawdzenie liczby
//	printf("Podaj pierwsza liczbe calkowita w systemie dziesietnym:\n");
//	if (scanf_s("%d", &liczba) != 1 || getchar() != '\n') {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//
//	printf("Podana liczba to w systemie szesnastkowym %x.\n", liczba);
//
//	printf("Koniec programu.\n");
//	return 0;
//
//	// liczby ujemne nie sa poprawnie wypisywane
//}
//
//
//int main() {
//	// zad 23
//
//	// info
//	printf("Program wypisuje liczbe dziesietna jako szesnastkowa.\n");
//	printf("Autorem programu jest Anna Kelm.\n\n");
//
//	// liczba podana przez uzytkownika
//	int liczba;
//
//	// wczytanie i sprawdzenie liczby
//	printf("Podaj pierwsza liczbe calkowita nieujemna w systemie dziesietnym:\n");
//	if (scanf_s("%d", &liczba) != 1 || liczba < 0 || getchar() != '\n') {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//
//	printf("Podana liczba to w systemie szesnastkowym %x.\n", liczba);
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//
//int main() {
//	// zad 24
//
//	// info o programie
//	printf("Program sprawdzajacy, czy liczba jest dodatnia.\nAutor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj liczbe calkowita dziesietna.\n");
//	int liczba; // liczba, ktora poda uzytkownik
//	if (scanf_s("%d", &liczba) != 1 || getchar() != '\n') {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Podales liczbe: %d.\n", liczba);
//
//	// wynik
//	if (liczba >= 0) {
//		printf("%d jest dodatnia.\n", liczba);
//	}
//	else {
//		printf("%d nie jest dodatnia.\n", liczba);
//	}
//
//	// zakonczenie programu
//	printf("Koniec programu.\n");
//	return 0;
//}