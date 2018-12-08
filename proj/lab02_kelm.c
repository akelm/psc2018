//#include <stdio.h>
//
//int main() {
// // zad 8
//	printf("%+6d\n", -11);
//	printf("%+6d\n", 0);
//	printf("%+6d\n", 11111);
//	return 0;
//}
//
//int main() {
// // zad 9
//	printf("%010d\n", -11);
//	printf("%010d\n", 0);
//	printf("%010d\n", 11111);
//	return 0;
//}
//
//int main() {
// // zad 10
//	putchar('x');
//	putchar(':');
//	putchar(' ');
//	putchar('f');
//	putchar('(');
//	putchar('x');
//	putchar(')');
//	putchar(':');
//	putchar('\n');
//	putchar('3');
//	putchar(' ');
//	putchar(' ');
//	putchar('5');
//	putchar('\n');
//	return 0;
//}
//
//int main() {
// // zad 11
//	printf("d: %d\n", -5); // poprawnie
//	printf("d: %o\n", -5); // niepoprawnie
//	printf("d: %u\n", -5); // niepoprawnie
//	printf("d: %f\n", -5); // niepoprawnie
//	printf("d: %e\n", -5); // niepoprawnie
//	printf("d: %g\n", -5); // niepoprawnie
//	//printf("%s\n", -5); // program sie kompiluje, ale zawiesza
//	return 0;
//}
//
//int main() {
//	// zad 12
//	printf("d: %d\n", -5.0); // niepoprawnie
//	printf("d: %o\n", -5.0); // niepoprawnie
//	printf("d: %u\n", -5.0); // niepoprawnie
//	printf("d: %f\n", -5.0); // poprawnie
//	printf("d: %e\n", -5.0); // poprawnie
//	printf("d: %g\n", -5.0); // poprawnie
//	//printf("%s\n", -5);  // program sie kompiluje, ale zawiesza
//	return 0;
//}
//
//int main() {
//	// zad 13
//	printf("oba argumenty zmiennopozycyjne:\n");
//	printf("%0.1f + %0.1f = %f\n", 2.0, 3.0 , 2.0 + 3.0);
//	printf("%0.1f - %0.1f = %f\n", 2.0, 3.0, 2.0 - 3.0);
//	printf("%0.1f * %0.1f = %f\n", 2.0, 3.0, 2.0 * 3.0);
//	printf("%0.1f / %0.1f = %f\n", 3.0, 2.0, 3.0 / 2.0);
//	printf("%0.1f / %0.1f = %f\n", 2.0, 3.0, 2.0 / 3.0);
//	printf("oba argumenty calkowite:\n");
//	printf("%d + %d = %d\n", 2, 3, 2 + 3);
//	printf("%d - %d = %d\n", 2, 3, 2 - 3);
//	printf("%d * %d = %d\n", 2, 3, 2 * 3);
//	printf("%d / %d = %d\n", 3, 2, 3 / 2);
//	printf("%d / %d = %d\n", 2, 3, 2 / 3);
//	printf("jeden arg. zmiennopozycyjny, drugi calkowity, wysw. zmiennopozycyjne:\n");
//	printf("%0.1f + %d = %f\n", 2.0, 3, 2.0 + 3);
//	printf("%0.1f - %d = %f\n", 2.0, 3, 2.0 - 3);
//	printf("%0.1f * %d = %f\n", 2.0, 3, 2.0 * 3);
//	printf("%0.1f / %d = %f\n", 3.0, 2, 3.0 / 2);
//	printf("%0.1f / %d = %f\n", 2.0, 3, 2.0 / 3);
//	printf("jeden arg. zmiennopozycyjny, drugi calkowity, wysw. calkowite:\n");
//	printf("%0.1f + %d = %d\n", 2.0, 3, 2.0 + 3);
//	printf("%0.1f - %d = %d\n", 2.0, 3, 2.0 - 3);
//	printf("%0.1f * %d = %d\n", 2.0, 3, 2.0 * 3);
//	printf("%0.1f / %d = %d\n", 3.0, 2, 3.0 / 2);
//	printf("%0.1f / %d = %d\n", 2.0, 3, 2.0 / 3);
//	return 0;
//}
//
//int main() {
//	// zad 14
//	//printf("%s\n", "ala"); // wyswietla ala
//	//printf("%s\n", 'ala'); // kompiluje sie, ale program sie zawiesza
//	//printf("%s\n", ala); // nie kompiluje sie
//	//printf("%s\n" "ala"); // wyswietlaja sie jakies znaki spoza ASCII
//	// printf("%s\n", "5"); // wyswietla 5
//	//printf("%s\n", '5'); // kompiluje sie, ale program sie zawiesza
//	// printf("%s\n", 5); // kompiluje sie, ale program sie zawiesza
//	return 0;
//}
//
//int main() {
//	// zad 15
//	printf("Sekwencja specjalna\"tekst za nia.");
//	return 0;
//}
//
//int main() {
//	// zad 16
//	printf("Uzywanie sekwencji specjalnych.\n\n");
//	printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
//	printf("Czy \"a\" oznacza w C to samo co \'a\'\?\n");
//	printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n");
//	printf("Koniec.\n\a");
//	return 0;
//}