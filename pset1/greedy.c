#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define QUARTER 25;
#define DIME 10;
#define NICKEL 5;
int main(void)
{
    float kwota_poczatkowa = 0; //change 
    int ilosc_centow = 0; // cents 
    int q = 0; // quarter - 25 cents
    int d = 0; // dime - 10 cents
    int n = 0; // nickel - 5 cents
    int liczba_monet = 0; // coins used
    int reszta = 0; // leftover 
    do
    {
    printf("O hai! How much change is owned?");
    kwota_poczatkowa = GetFloat();
        if(kwota_poczatkowa == 0 || kwota_poczatkowa <= 0)
        {
            printf("How much change is owned?");
        }
    }
    while(kwota_poczatkowa <= 0);
    
    ilosc_centow = (int)round(kwota_poczatkowa*100); //from dolars to cents
    q = ilosc_centow / QUARTER;
    reszta = ilosc_centow % QUARTER;
    d = reszta / DIME;
    reszta = reszta % DIME;
    n = reszta / NICKEL;
    reszta = reszta % NICKEL;
    liczba_monet = q + d + n + reszta;
    printf("%d\n", liczba_monet);
    
    return 0;
}

