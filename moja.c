// moje funkcje
#include <stdio.h>
#include "moja.h"

// funkcja sluzaca do pobierania liczby z klawiatury
void pobieranie ()
{
	// deklaracje zmiennych
	int r, liczba = 0;
	int k, c;

	
	printf ("Podaj liczbe: ");
	// tu pobiera
	scanf ("%d", &liczba);
	printf ("\n");
	// i tu wyswietla...
	printf ("Twoja liczba zapisana dziesietnie to: %d\n", liczba);
	printf ("Twoja liczba zapisana szesnastkowo to: %x\n", liczba);
	printf("Twoja liczba zapisana dziesietnie to: ");

	for (c = 31; c >= 0; c--)
	{
		k = liczba >> c;
		if (k & 1)
		printf("1");
		else
		printf("0");
	}
	
	printf("\n");
	
}

