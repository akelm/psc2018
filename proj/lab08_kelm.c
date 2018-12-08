#include <stdio.h>
#include <limits.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
	// zad 55

	// info o programie
	printf("program wypisujacy minimalna liczbe.\n");
	printf("autor: anna kelm.\n\n");

	// wczytywanie danych 
	printf("Prosze podac liczby calkowite dodatnie:\n");
	int liczba = 1; // liczba podwana przez uzytkownika
	int minimalna = INT_MAX; // minimalna liczba
	while (liczba != 0) {
		// pobieranie liczby
		while (scanf_s("%d", &liczba) != 1 || liczba < 0 || getchar() != '\n') {
			printf("to nie jest liczba naturalna, popraw\n");
			// czyszczenie bufora klawiatury
			while (getchar() != '\n') {}
		}

		if ((liczba > 0) && (liczba <  minimalna)) {
			minimalna = liczba;
		}
	}
	
	
	// wynik
	printf("liczba minimalna to: %d\n", minimalna);

	printf("koniec programu.\n");
	return 0;
}

#define N 10
int main() {
	// zad 54

	// info o programie
	printf("program wypisujacy srednia liczb.\n");
	printf("autor: anna kelm.\n\n");

	// wczytywanie danych
	printf("Prosze podac %d liczb zmiennopozycyjnych:\n", N);
	double liczba = 0; // liczba podwana przez uzytkownika
	double srednia = 0; // srednia
	int i = 0;
	while (++i <= N){
		while (scanf_s("%lf", &liczba) != 1 || getchar() != '\n') {
			printf("to nie jest liczba \\, popraw\n");
			// czyszczenie bufora klawiatury
			while (getchar() != '\n') {}
		}
		srednia += liczba/N;
	}

	// wynik
	printf("srednia to: %g\n", srednia);

	printf("koniec programu.\n");
	return 0;
}

int main() {
	// zad 57

	// info o programie
	printf("program wypisujacy srednia.\n");
	printf("autor: anna kelm.\n\n");

	// wczytywanie danych 
	printf("Prosze podac liczby calkowite dodatnie:\n");
	int liczba = 1; // liczba podwana przez uzytkownika
	int n = 0; // liczba wczytanych liczb
	unsigned long suma= 0; // suma liczb
	unsigned long iloczyn = 1; // iloczyn
	while (liczba != 0) {
		// pobieranie liczby
		while (scanf_s("%d", &liczba) != 1 || liczba < 0 || getchar() != '\n') {
			printf("to nie jest liczba naturalna, popraw\n");
			// czyszczenie bufora klawiatury
			while (getchar() != '\n') {}
		}

		if (0 != liczba) {
			n++;
			suma += liczba;
			iloczyn *= liczba;
		}
	}
	
	// wynik
	if (n > 0){
		printf("srednia arytmetyczna to: %g\n", (double)suma/n);
		printf("srednia geometryczna to: %g\n", pow((double)iloczyn,1.0/n));
	}

	printf("koniec programu.\n");
	return 0;
}

int main() {
	// zad 58

	// info o programie
	printf("program wczytuje ciag 0 i 1 i daje liczbe w sys 10.\n");
	printf("autor: anna kelm.\n\n");

	// wczytywanie danych 
	printf("Prosze podac liczby 1 i 0, enter - koniec:\n");
	char znak; // liczba podwana przez uzytkownika
	int n = 0; // obliczana liczba w sys dziesietnym

		// pobieranie liczby
	while ( (znak = getchar()) != '\n') {
		if (znak != '0' & znak != '1') {
			printf("Bledne dane, to nie jest ciag zer i jedynek.\n");
			printf("Koniec programu.\n");
			return 0;
		}
		if (znak == '1') {
			n = 2*n + 1;
		}
		if (znak == '0') {
			n *= 2;
		}
	}

	// wynik
	printf("liczba to: %d\n", n);
	
	printf("koniec programu.\n");
	return 0;
}


int main() {
	// zad 59

	// info o programie
	printf("program do podstawowych dzialan arytmentycznych z menu.\n");
	printf("autor: anna kelm.\n\n");

	enum {KONIEC='0', WCZYTAJ, DODAJ, ODEJMIJ, POMNOZ, PODZIEL}; // opcje z menu
	char znak; // znak bedacy opcja menu
	double liczba1; // pierwsza liczba podana przez uzytkownika
	double liczba2; // druga liczba podana przez uzytkownika
	bool czysaliczby = false; // czy wczytano liczby

	while (1) {
		// menu 
		printf("%c. zakoncz.\n", KONIEC);
		printf("%c. wczytaj liczby.\n", WCZYTAJ);
		printf("%c. dodaj.\n", DODAJ);
		printf("%c. odejmnij.\n", ODEJMIJ);
		printf("%c. pomnoz.\n", POMNOZ);
		printf("%c. podziel.\n", PODZIEL);

		while ((znak = getchar()) < KONIEC || znak > PODZIEL || getchar() != '\n') {
			printf("Bledna opcja.\n");
			// czyszczenie bufora klawiatury
			while (getchar() != '\n') {}
			continue;
		}

		if (!czysaliczby && (znak > WCZYTAJ)) {
			printf("najpierw wczytaj liczby!\n");
			znak = WCZYTAJ;
		}

		switch (znak) {
			case KONIEC: {
				printf("koniec programu.\n");
				return 0;
			}
			case WCZYTAJ: {
				printf("Prosze podac liczby w formacie x,y:\n");
				while (scanf_s("%lf,%lf", &liczba1, &liczba2) != 2 || getchar() != '\n') {
					printf("to nie sa poprawne liczby, popraw\n");
					// czyszczenie bufora klawiatury
					while (getchar() != '\n') {}
				}
				printf("Wczytano liczby %g i %g.\n", liczba1, liczba2);
				czysaliczby = true;
				break;
			}
			case DODAJ: {
				printf("%g + %g = %g\n", liczba1, liczba2, liczba1 + liczba2);
				break;
			}
			case ODEJMIJ: {
				printf("%g - %g = %g\n", liczba1, liczba2, liczba1 - liczba2);
				break;
			}
			case POMNOZ: {
				printf("%g * %g = %g\n", liczba1, liczba2, liczba1 * liczba2);
				break;
			}
			case PODZIEL: {
				printf("%g / %g = %g\n", liczba1, liczba2, liczba1 / liczba2);
				break;
			}
			default: break;
		} // switch
	} //while
}

int main() {
	// zad 60

	// info o programie
	printf("Program obliczajacy pole trojkata.\n");
	printf("Autor: Anna Kelm.\n\n");

	char wybordanych; // jakie dane uzytkownik chce podac, '1'-'3'
	enum {KONIEC = '0', JEDENBOK, DWABOKI, TRZYBOKI}; // opcje z menu

	while (1) {
		// wczytywanie danych i spr popr
		printf("Jakie dane szanowny uzytkownik chce podac - prosze wybrac liczbe 0-3:\n");
		printf("%c. koniec programu\n", KONIEC);
		printf("%c. bok i spuszczona nan wysokosc\n", JEDENBOK);
		printf("%c. dwa boki i kat miedzy nimi\n", DWABOKI);
		printf("%c. trzy boki\n", TRZYBOKI);
		
		while ((wybordanych = getchar()) < KONIEC || wybordanych > TRZYBOKI || getchar() != '\n') {
			printf("Bledne dane, popraw.\n");
			// czyszczenie bufora klawiatury
			while (getchar() != '\n') {}
			continue;
		}

		// wyniki
		double pole; // pole trojkata
		switch (wybordanych) {
			case KONIEC: {
				printf("koniec programu.\n");
				return 0;
			}
			case JEDENBOK: {
				printf("Prosze podac bok i spuszczona nan wysokosc w formacie a,h\n");
				double bok, wysokosc; // bok i wys trojkata
				while (2 != scanf_s("%lf,%lf", &bok, &wysokosc) || bok < 0 || wysokosc < 0 || '\n' != getchar()) {
					printf("Bledne dane, popraw.\n");
					// czyszczenie bufora klawiatury
					while (getchar() != '\n') {}
				}
				pole = 0.5*bok*wysokosc;
				break;
			}
			case DWABOKI: {
				printf("Prosze podac, w jakich jednostkach bedzie podany kat:\n");
				enum {RADIANY = '1', STOPNIE};
				printf("%c. w radianach\n", RADIANY);
				printf("%c. w stopniach\n", STOPNIE);
				char wyborkata; // zmienna okreslajaca jednostki kata, '1'-radiany, '2'-stopnie
				while ( (wyborkata = getchar()) < RADIANY || wyborkata > STOPNIE || getchar() != '\n') {
					printf("Bledne dane, popraw.\n");
					// czyszczenie bufora klawiatury
					while (getchar() != '\n') {}
				}
				printf("Prosze podac dlugosc dwoch bokow i kat miedzy nimi w formacie a,b,k:\n");
				double bok1, bok2, kat; // dwa boki i kat pomiedzy nimi
				while (3 != scanf_s("%lf,%lf,%lf", &bok1, &bok2, &kat) || bok1 < 0 || bok2 < 0 || kat < 0 ||'\n' != getchar()) {
					printf("Bledne dane, popraw.\n");
					// czyszczenie bufora klawiatury
					while (getchar() != '\n') {}
				}

				if (wyborkata == STOPNIE) { // kat w stopniach
					kat = kat / 180.0 * M_PI;
				}
				pole = 0.5 * bok1 * bok2 * sin(kat);
				break;
			}
			case TRZYBOKI: {
				printf("Prosze podac boki trojkata w formacie a,b,c:\n");
				double bok1, bok2, bok3; // boki trojkata
				while (3 != scanf_s("%lf,%lf,%lf", &bok1, &bok2, &bok3) || bok1 < 0 || bok2 < 0 || bok3 < 0 || '\n' != getchar()) {
					printf("Bledne dane, popraw.\n");
					// czyszczenie bufora klawiatury
					while (getchar() != '\n') {}
				}
				// sprawdzenie, czy mozna utworzyc trojkat
				double sumabokow = bok1 + bok2 + bok3; // suma bokow trojkata
				double maxbok = fmax(bok3, fmax(bok1, bok2)); // najdluzszy bok
				if ((sumabokow - maxbok < maxbok)) {
					printf("Z podanych bokow nie mozna utworzyc trojkata. \n");
					continue;
				}
				double polobwodu = sumabokow / 2; // pol obwodu
				pole = sqrt(polobwodu * (polobwodu - bok1) * (polobwodu - bok2) * (polobwodu - bok3));
				break;
			}
		}
		printf("pole trojkata wynosi %g\n", pole);
	}
}

int main() {
	// zad 46

	// info o programie
	printf("Program wypisuje godzine z zachowaniem form gramatycznych.\n");
	printf("Autor: Anna Kelm.\n\n");

	// wczytywanie danych i spr popr
	int godzina, minuty;
	char znak;
	bool poprawnedane = false;

	while (!poprawnedane) {
		
		printf("Podaj godzine w formacie \"hh:mm\":\n");

		// wczytanie 1 znaku
		znak = getchar();
		if (znak < '0' || znak > '2') {
			printf("Pierwszy znak powinien byc cyfra nie wieksza niz 2, popraw.\n");
			while (getchar() != '\n') {}
			continue;
		}
		godzina = (znak - '0');
		// wczytanie 2 znaku
		znak = getchar();
		if (!isdigit(znak)) { // isdigit zwraca 0/cos
			printf("Drugi znak powinien byc cyfra, popraw.\n");
			while (getchar() != '\n') {}
			continue;
		}
		godzina = godzina * 10 + (znak - '0');
		if (godzina >= 24) {
			printf("Godzina powinna byc co najwyzej 23, popraw.\n");
			while (getchar() != '\n') {}
			continue;
		}
		// wczytanie 3 znaku
		if (':' != getchar()) {
			printf("Trzeci znak powinien byc \":\", popraw.\n");
			while (getchar() != '\n') {}
			continue;
		}
		// wczytanie 3 znaku
		znak = getchar();
		if (znak < '0' || znak > '5') {
			printf("Trzeci znak powinien byc cyfra nie wieksza niz 5, popraw.\n");
			while (getchar() != '\n') {}
			continue;
		}
		minuty = (znak - '0');
		// wczytanie 4 znaku
		znak = getchar();
		if (!isdigit(znak)) { // isdigit zwraca 0/cos
			printf("Czwarty znak powinien byc cyfra, popraw.\n");
			while (getchar() != '\n') {}
			continue;
		}
		minuty = minuty * 10 + (znak - '0');
		// wczytanie 5 znaku
		if ('\n' != getchar()) {
			printf("Minuta powinna miec 2 cyfry, popraw.\n");
			while (getchar() != '\n') {}
			continue;
		}
		poprawnedane = true;
	}

	// wynik
	printf("Oto wczytana godzina:\n");
	printf("%d minut", minuty);
	if (1 == minuty) {
		printf("a");
	} else if (10 <= minuty && minuty <= 19) {
		;
	} else if ('2' <= znak && znak <= '4') {
		printf("y");
	}
	printf(" po %d\n", godzina);

	printf("Koniec programu.\n");
	return 0;
}