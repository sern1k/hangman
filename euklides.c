#include <stdio.h>

int main()
{
    unsigned int m, n;  // deklaruję dwie zmienne m i n, typ unsigned ponieważ mają być naturalne
    printf("Podaj pierwszą liczbę: ");
    scanf("%u", &m);    // zczytanie liczby podanej przez użytkownika
    printf("Podaj drugą liczbę: ");
    scanf("%u", &n);    // zczytanie liczby podanej przez użytkownika
    
    if (m < n)  // sprawdzam czy założenia polecenia są spełnione (m>=n), jeśli nie to zamieniam wartość m i n
    {
        unsigned int k = m;
        m = n;
        n = k;
    }
    
    if (n == 0) // jeśli mniejsza liczba jest zerem, NWD jest większa liczba
    {
        printf("Największy wspólny dzielnik tych dwóch liczb to: ");
        printf("%u", m);
    }
    else
    {
        unsigned int i; // deklaruję pomocniczą zmienną
        while (n != 0)  // pętla odpowiadająca za obliczanie NWD, dopóki m % n != 0 program będzie działać
        {
            i = n;  // przypisuję do pomocniczej zmiennej wartość liczby mniejszej
            n = m % n;  // do n przypisuję resztę z działania 
            m = i;  // przechowuje NWD
        }
        printf("Największy wspólny dzielnik tych dwóch liczb to: ");
        printf("%u", m);    // wypisuje NWD
    }

    return 0;
}