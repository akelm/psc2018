//#include <stdio.h>
//
//#define ILE 70 // wykladnik
//#define PODST 2 // podstawa
//int main() {
//	// zad 48
//
//	// info o programie
//	printf("Program wypisujacy pierwsze 50 poteg liczby 2.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wypisywanie wyniku
//	long long unsigned potega = 1; // wynik
//	int i = -1;
//	printf("Pierwsze %d poteg liczby %d:\n", ILE, PODST);
//	while (++i < ILE) {
//		printf("%d\^%d = %llu\n", PODST, i, potega);
//		potega *= PODST;;
//	}
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//#define N 200 // ostatni wyraz silni
//int main() {
//	// zad 49
//
//	// info o programie
//	printf("program wypisujacy silnie do 200.\n");
//	printf("autor: anna kelm.\n\n");
//
//	// wypisywanie wyniku
//	long long unsigned silnia = 1; // wynik
//	int i = 0;
//	printf("silnia kolejnych liczb naturalnych od 1 do %d:\n", N);
//	while (++i <= N) {
//		silnia *= i;
//		printf("%d\! = %llu\n", i, silnia);
//	}
//
//	printf("koniec programu.\n");
//	return 0;
//}
//
//#define N 200 // ostatni argument dla funkcji
//#define LICZNIK 3.0 // licznik funkcji
//int main() {
//	// zad 50
//
//	// info o programie
//	printf("program wypisujacy wartosc funkcji 3^n/(n+1) do argumentu 200.\n");
//	printf("autor: anna kelm.\n\n");
//
//	// wypisywanie wyniku
//	double wynik = 1; // wynik
//	int i = 0;
//	printf("kolejne wartosci funkcji od 1 do %d:\n", N);
//	while (++i <= N) {
//		wynik *= LICZNIK / (i + 1);
//		printf("f(%d) = %17g\n", i, wynik);
//	}
//
//	printf("koniec programu.\n");
//	return 0;
//}
//
//#define LICZNIK 90.0 // licznik
//int main() {
//	// zad 51
//
//	// info o programie
//	printf("program znajdujacy najmniejsza liczbe naturalna spelniajaca warunek.\n");
//	printf("autor: anna kelm.\n");
//
//	// wypisywanie wyniku
//	double wynik = 1; // wynik
//	int i = 1; // jednoczesnie szukana liczba naturalna
//	while ((wynik *= LICZNIK / (++i)) >= 1) {}
//
//	// wypisywanie wyniku
//	printf("\nNajmniejszy n spelniajacy warunek to %d, dajacy f(%d) = %g.\n\n", i - 1, i - 1, wynik);
//
//	printf("koniec programu.\n");
//	return 0;
//}
//
//#define ZN ' ' // usuwany znak
//int main() {
//	// zad 52
//
//	// info o programie
//	printf("Program usuwajcy zbedne spacje.\n");
//	printf("Autor: anna kelm.\n\n");
//
//	// wczytywanie danych i wynik
//	printf("Prosze podac linie tekstu:\n");
//	char znak; // znaki wpisywane przez uzytkownika
//	int czybylznak = 0; // stan 0 - poprzedni znak to ZN, 1 - wpp
//	while ((znak = getchar()) != '\n') {
//		if (znak != ZN || !czybylznak) {
//			putchar(znak);
//		}
//		if ((znak == ZN) != czybylznak) { // zmiana stanu
//			czybylznak = !czybylznak;
//		}
//	}
//	putchar(znak);
//	printf("Powyzej znajduje sie poprawiony napis.\n\n");
//
//	printf("koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 53
//
//	// info o programie
//	printf("program pobierajacy liczbe naturalna od uzytkownika.\n");
//	printf("autor: anna kelm.\n\n");
//
//	// wczytywanie danych 
//	printf("Prosze podac liczbe naturalna:\n");
//	int liczba; // liczba podwana przez uzytkownika
//	while (scanf_s("%d", &liczba) != 1 || liczba < 0 || getchar() != '\n') {
//		printf("to nie jest liczba naturalna, popraw\n");
//		// czyszczenie bufora klawiatury
//		while (getchar() != '\n') {}
//	}
//	// wynik
//	printf("podana liczba to: %d\n", liczba);
//
//	printf("koniec programu.\n");
//	return 0;
//}
//
//#define ZN 't'
//int main() {
//	// zad 54
//
//	// info o programie
//	printf("program sprawdzajacy, czy zostalo wcisniete \"%c\".\n", ZN);
//	printf("autor: anna kelm.\n\n");
//
//	// wczytywanie danych 
//	printf("Prosze wpisac \"%c\" i nacisnac \"enter\".\n", ZN);
//	char znak; // znak pobrany od uzytkownika
//	while ((znak = getchar()) != ZN || (znak = getchar()) != '\n') {
//		printf("to nie jest \"%c\", popraw\n", ZN);
//		// czyszczenie bufora klawiatury
//		while ((znak = getchar()) != '\n') {}
//	}
//	// wynik
//	printf("Nareszcie wpisano \"\%c\".\n", ZN);
//
//	printf("koniec programu.\n");
//	return 0;
//}