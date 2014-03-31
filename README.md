lesson1
=======

lekcja 1
Zadania do zrobienia:
- Projekt składający się z min dwóch plików .c i jednego .h
- wypisywanie liczby (losowej albo z wejscia z klawy) w formatach dec, bin i hex
- liczenie bitów w liczbie
- wyznaczanie pozycji najabrdziej znaczącego bitu w liczbie
- zaloz repozytorium i wyniki tego co ci wyszlo wrzuc na gthub

comment 1:
- Wywal return.
- jezeli chodzi o headery, w momencie kiedy w moja.h includujesz stdio.h to automatycznie we wszytkich plikach gdzie
includujesz moja.h includujesz stdio.h. np. w main.c, gdzie nie wykorzystujesz ani jednej funkcji z stdio.h wiec on tam
nie jest potrzebny, bardziej elegancko bedzie zalaczyc stdio.h w moja.c.
- nie chodzi o zmienne globalne, zmiennych globalnych unikaj jak ognia chyba ze sa naprawde potrzebne innaczej szkoda na 
nie pamieci, chodzi o to ze bardziej elegancko jest deklarowac zmienne na poczatku funkcji, co prawda nowy standard C
pozwala deklarowac zmienne w locie, ale nie wszystkie kompilatory na mikrokontrolery na to pozwalaja
- jezeli chodzi o niezainicjalizowana zmienna i to tez byl karygodny blad przez to mi sie program wywalal, wg standardu 
zmienne automatyczne sa inicjalizowane losowa wartoscia, potem tylko ja zwiekszales i wykorzystywales jako licznik petli,
wiec efekt jest nie do przewidzenia.
