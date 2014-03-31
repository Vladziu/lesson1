// moje funkcje
#include "moja.h"

// funkcja sluzaca do pobierania liczby z klawiatury
void pobieranie ()
{
	int r, liczba = 0;
	printf ("Podaj liczbe: ");
	// tu pobiera
	scanf ("%d", &liczba);
	printf ("\n");
	// i tu wyswietla...
	printf ("Twoja liczba zapisana dziesietnie to: %d\n", liczba);
	printf ("Twoja liczba zapisana szesnastkowo to: %x\n", liczba);
	
	//algorytm zamiany na binarne
	int i, j, k, a[20]; 
	while(liczba>0) 
	{
		a[i]=liczba%2; 
		i++; 
		liczba=liczba/2;
	}
	
	printf("Twoja liczba zapisana binarnie to: %d",liczba); 
	for(j=i-1;j>=0;j--) 
	{
		printf("%d",a[j]);
	}
	
	// i liczenie bitów
	for(j=i-1;j>=0;j--) 
	{
		printf("%d",a[j]);
	}
	printf ("\nNajbardziej znaczacy bit ma pozycje: %d", k)
	
	return 0;
}

