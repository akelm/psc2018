//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//#include <ctype.h> // sluzy do klasifikacji znakow, szybkie funkcje, nie spowalniaja programu
//
//int main() {
//	// zad 41
//
//	// info o programie
//	printf("Program sprawdzajacy, czy dwa wektory sa rownolegle/prostopadle.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj 2 liczby zmiennopozycyjne w formacie x,y -- wsp. pierwszego wektora:\n");
//	double x1, y1; // wspolrzedne pierwszego wektora
//	if (2 != scanf_s("%lf,%lf", &x1, &y1) || '\n' != getchar()) {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//	printf("Podaj 2 liczby zmiennopozycyjne w formacie x,y -- wsp. drugiego wektora:\n");
//	double x2, y2; // wspolrzedne drugiego wektora
//	if (2 != scanf_s("%lf,%lf", &x2, &y2) || '\n' != getchar()) {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//
//	// wyniki
//	if ((!x1 && !y1) || (!x2 && !y2)) {
//		printf("Jeden z wektorow jest zerowy. Wektory sa jednoczesnie rownolegle i prostopadle do siebie.\n");
//	} else if (x1 * x2 == -y1 * y2) {
//		printf("Wektory sa prostopadle.\n");
//	} else if (x1 * y2 == x2 * y1) {
//		printf("Wektory sa rownolegle.\n");
//	} else {
//		printf("Wektory nie sa ani rownolegle, ani prostopadle.\n");
//	}
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 42
//
//	// info o programie
//	printf("Program obliczajacy pole trojkata.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Jakie dane szanowny uzytkownik chce podac - prosze wybrac liczbe 1-3:\n");
//	printf("1. bok i spuszczona nan wysokosc\n");
//	printf("2. dwa boki i kat miedzy nimi\n");
//	printf("3. trzy boki\n");
//	char wybordanych = getchar(); // jakie dane uzytkownik chce podac, '1'-'3'
//	if (wybordanych < '1' || wybordanych > '3' || getchar() != '\n') {
//		printf("Bledne dane, koniec programu.\n");
//		return 0;
//	}
//
//	// wyniki
//	double pole; // pole trojkata
//	switch (wybordanych) {
//		case '1': {
//			printf("Prosze podac bok i spuszczona nan wysokosc w formacie a,h\n");
//			double bok, wysokosc; // bok i wys trojkata
//			if (2 != scanf_s("%lf,%lf", &bok, &wysokosc) || '\n' != getchar()) {
//				printf("Bledne dane, koniec programu.\n");
//				return 0;
//			}
//			pole = 0.5*bok*wysokosc;
//			break;
//		}
//		case '2': {
//			printf("Prosze podac, w jakich jednostkach bedzie podany kat:\n");
//			printf("1. w radianach\n");
//			printf("2. w stopniach\n");
//			char wyborkata = getchar(); // zmienna okreslajaca jednostki kata, '1'-radiany, '2'-stopnie
//			if (wyborkata < '1' || wyborkata > '2' || getchar() != '\n') {
//				printf("Bledne dane, koniec programu.\n");
//				return 0;
//			}
//			printf("Prosze podac dlugosc dwoch bokow i kat miedzy nimi w formacie a,b,k:\n");
//			double bok1, bok2, kat; // dwa boki i kat pomiedzy nimi
//			if (3 != scanf_s("%lf,%lf,%lf", &bok1, &bok2, &kat) || '\n' != getchar()) {
//				printf("Bledne dane, koniec programu.\n");
//				return 0;
//			}
//
//			if (wyborkata == '2') { // kat w stopniach
//				kat = kat / 180.0 * M_PI;
//			}
//			pole = 0.5 * bok1 * bok2 * sin(kat);
//			break;
//		}
//		case '3': {
//			printf("Prosze podac boki trojkata w formacie a,b,c:\n");
//			double bok1, bok2, bok3; // boki trojkata
//			if (3 != scanf_s("%lf,%lf,%lf", &bok1, &bok2, &bok3) || '\n' != getchar()) {
//				printf("Bledne dane, koniec programu.\n");
//				return 0;
//			}
//			// sprawdzenie, czy mozna utworzyc trojkat
//			double sumabokow = bok1 + bok2 + bok3; // suma bokow trojkata
//			double maxbok = fmax(bok3, fmax(bok1, bok2)); // najdluzszy bok
//			if ((sumabokow - maxbok < maxbok)) {
//				printf("Z podanych bokow nie mozna utworzyc trojkata. Koniec programu.");
//				return 0;
//			}
//			double polobwodu = sumabokow / 2; // pol obwodu
//			pole = sqrt(polobwodu * (polobwodu - bok1) * (polobwodu - bok2) * (polobwodu - bok3));
//			break;
//		}
//	}
//	printf("pole trojkata wynosi %g\n", pole);
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 43
//
//	// info o programie
//	printf("Program wybierajacy minimalna liczbe.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("prosze podac pierwsza liczbe:\n");
//	double liczba; // liczba podawana przez uzytkownika
//	double liczbamin; // liczba minimalna
//	if (scanf_s("%lf", &liczbamin) != 1 || getchar() != '\n') {
//		printf("Bledne dane. Koniec programu.\n");
//		return 0;
//	}
//	printf("prosze podac druga liczbe:\n");
//	if (scanf_s("%lf", &liczba) != 1 || getchar() != '\n') {
//		printf("Bledne dane. Koniec programu.\n");
//		return 0;
//	}
//	liczbamin = (liczbamin > liczba) ? liczba : liczbamin;
//	printf("prosze podac trzecia liczbe:\n");
//	if (scanf_s("%lf", &liczba) != 1 || getchar() != '\n') {
//		printf("Bledne dane. Koniec programu.\n");
//		return 0;
//	}
//	liczbamin = (liczbamin > liczba) ? liczba : liczbamin;
//
//	// wynik
//	printf("najmniejsza liczba to %g\n\n", liczbamin);
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 44
//
//	// info o programie
//	printf("program wypisuje kod ascii podanego znaku.\n");
//	printf("autor: anna kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("podaj jeden znak\n");
//	char znak = getchar();
//	if (getchar() != '\n') {
//		printf("Podano wiecej niz 1 znak. Koniec programu.\n");
//		return 0;
//	}
//
//	// wynik
//	printf("Znakowi %c odpowiada kod ASCII %03d.\n", znak, znak);
//
//	printf("koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 45
//
//	// info o programie
//	printf("program wypisuje znak na podstawie kodu ascii.\n");
//	printf("autor: anna kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("podaj kod ASCII z przedzialu 000-255 (w formacie 000)\n");
//	int kod;
//	if (scanf_s("%03d", &kod) != 1 || getchar() != '\n' || kod < 0 || kod > 255) {
//		printf("Bledne dane. Koniec programu.\n");
//		return 0;
//	}
//
//	if (iscntrl(kod)) {
//		printf("Znak %03d to znak kontrolny.\n", kod);
//	} else { // znak drukowalny
//		printf("Kodowi ASCII %03d odpowiada znak %c.\n", kod, kod);
//	}
//
//	printf("koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 46
//
//	// info o programie
//	printf("Program wypisuje godzine z zachowaniem form gramatycznych.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj godzine w formacie \"hh:mm\":\n");
//	int godzina, minuty;
//	char znak;
//	// wczytanie 1 znaku
//	znak = getchar();
//	if (znak < '0' || znak > '2') {
//		printf("Pierwszy znak powinien byc cyfra nie wieksza niz 2.\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	godzina = (znak - '0');
//	// wczytanie 2 znaku
//	znak = getchar();
//	if (!isdigit(znak)) { // isdigit zwraca 0/cos
//		printf("Drugi znak powinien byc cyfra.\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	godzina = godzina * 10 + (znak - '0');
//	if (godzina >= 24) {
//		printf("Godzina powinna byc co najwyzej 23.\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	// wczytanie 3 znaku
//	if (':' != getchar()) {
//		printf("Trzeci znak powinien byc \":\".\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	// wczytanie 3 znaku
//	znak = getchar();
//	if (znak < '0' || znak > '5') {
//		printf("Trzeci znak powinien byc cyfra nie wieksza niz 5.\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	minuty = (znak - '0');
//	// wczytanie 4 znaku
//	znak = getchar();
//	if (!isdigit(znak)) { // isdigit zwraca 0/cos
//		printf("Czwarty znak powinien byc cyfra.\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	minuty = minuty * 10 + (znak - '0');
//	// wczytanie 5 znaku
//	if ('\n' != getchar()) {
//		printf("Minuta powinna miec 2 cyfry.\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//
//	// wynik
//	printf("Oto wczytana godzina:\n");
//	printf("%d minut", minuty);
//	if (1 == minuty) {
//		printf("a");
//	} else if (10 <= minuty && minuty <= 19) {
//		;
//	} else if ('2' <= znak && znak <= '4') {
//		printf("y");
//	}
//	printf(" po %d\n", godzina);
//
//	printf("Koniec programu.\n");
//	return 0;
//}
//
//int main() {
//	// zad 47
//
//	// info o programie
//	printf("Program wypisuje date z zachowaniem form gramatycznych.\n");
//	printf("Autor: Anna Kelm.\n\n");
//
//	// wczytywanie danych i spr popr
//	printf("Podaj date w formacie \"dd.mm.rr\" z przedzialu lat 2001 - 2050:\n");
//	int rok, miesiac, dzien;
//	char znak;
//	// DZIEN
//	// wczytanie 1 znaku
//	znak = getchar();
//	if (znak > '3') {
//		printf("Pierwszy znak powinien byc cyfra z przedzialu 0-3.\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	dzien = (znak - '0') * 10;
//	// wczytanie 2 znaku
//	znak = getchar();
//	if (!isdigit(znak)) {
//		printf("Drugi znak powinien byc cyfra.\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	dzien += znak - '0';
//	if (dzien == 0 || dzien > 31) {
//		printf("Miesiac musi miec 1-31 dni.\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	// wczytanie 3 znaku
//	if ('.' != getchar()) {
//		printf("Trzeci znak powinien byc \".\".\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	// MIESIAC
//	// wczytanie 4 znaku
//	znak = getchar();
//	if (znak > '1') {
//		printf("Czwarty znak powinien byc cyfra z przedzialu 0-1.\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	miesiac = (znak - '0') * 10;
//	// wczytanie 5 znaku
//	znak = getchar();
//	if (!isdigit(znak)) {
//		printf("Piaty znak powinien byc cyfra.\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	miesiac += znak - '0';
//	if (miesiac > 12 || miesiac < 1) {
//		printf("Miesiac musi byc spomiedzy 1 i 12.\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	// wczytanie 6 znaku
//	if ('.' != getchar()) {
//		printf("Szosty znak powinien byc \".\".\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	// ROK
//	// wczytanie 7 znaku
//	znak = getchar();
//	if (znak > '5' || znak < '0') {
//		printf("Siodmy znak powinien byc cyfra z przedzialu 0-5.\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	rok = (znak - '0') * 10;
//	// wczytanie 8 znaku
//	znak = getchar();
//	if (!isdigit(znak)) {
//		printf("Osmy znak powinien byc cyfra 0.\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	rok += (znak - '0');
//	// wczytanie 11 znaku
//	if ('\n' != getchar()) {
//		printf("Rok powinnien miec 2 cyfry.\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	if (rok > 50 || rok < 1) {
//		printf("Rok powinien byc z przedzialu 1-50.\n");
//		printf("Koniec programu.\n");
//		return 0;
//	}
//	// sprawdzanie dni w miesiacu
//	// przypisanie miesiacom ich numerow
//	enum { STYCZEN = 1, LUTY, MARZEC, KWIECIEN, MAJ, CZERWIEC, LIPIEC, SIERPIEN, WRZESIEN, PAZDZIENIK, LISTOPAD, GRUDZIEN };
//	switch (miesiac) {
//		case LUTY: {
//			if (dzien > 29) {
//				printf("Luty nie moze miec wiecej niz 29 dni.\n");
//				printf("Koniec programu.\n");
//				return 0;
//			}
//			if ((dzien == 29) && (rok % 4)) { // rok nieprzestepny
//				printf("20%02d to rok nieprzestepny, luty nie moze miec wiecej niz 28 dni.\n", rok);
//				printf("Koniec programu.\n");
//				return 0;
//			}
//			break;
//		}
//		case KWIECIEN:
//		case CZERWIEC:
//		case WRZESIEN:
//		case LISTOPAD: {
//			if (dzien > 30) {
//				printf("Miesiac %d nie moze miec wiecej niz 30 dni.\n");
//				printf("Koniec programu.\n");
//				return 0;
//			}
//			break;
//		}
//	}
//
//	// wynik
//	printf("\nOto wczytana data\n");
//	printf("%02d ", dzien);
//	switch (miesiac) {
//		case STYCZEN: {
//			printf("stycznia");
//			break;
//		}
//		case LUTY: {
//			printf("lutego");
//			break;
//		}
//		case MARZEC: {
//			printf("marca");
//			break;
//		}
//		case KWIECIEN: {
//			printf("kwietnia");
//			break;
//		}
//		case MAJ: {
//			printf("maja");
//			break;
//		}
//		case CZERWIEC: {
//			printf("czerwca");
//			break;
//		}
//		case LIPIEC: {
//			printf("lipca");
//			break;
//		}
//		case SIERPIEN: {
//			printf("sierpnia");
//			break;
//		}
//		case WRZESIEN: {
//			printf("wrzesnia");
//			break;
//		}
//		case PAZDZIENIK: {
//			printf("pazdziernika");
//			break;
//		}
//		case LISTOPAD: {
//			printf("listopada");
//			break;
//		}
//		case GRUDZIEN: {
//			printf("grudnia");
//			break;
//		}
//	}
//	printf(" 20%02d\n\n", rok);
//
//	printf("Koniec programu.\n");
//	return 0;
//}