#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

static int niz[10] = {1, 663, 12, 431, 66156, 7876543, 762, 3, 21};

void helloName(){
    char unos[] = "";
    printf("Unesite ime: ");
    //gets(unos);
    scanf("%s", unos);
    printf("\nZdravo, %s.", unos);
}

int sum(int a, int b)
{
    return a + b;
}

int razlika(int a, int b)
{
    return a - b;
}

int proizvod(int a, int b)
{
    return a * b;
}

float kolicnik(int a, int b)
{
    return (float) a / b;
}

void dvaBroja()
{
    int a, b;
    printf("Unesite dva broja: ");
    scanf("%d, %d", &a, &b); // format string odredjuje kako unosimo podatke u konzoli
    printf("zbir = %i, razlika = %i, proizvod = %i, kolicnik = %f\n",
           sum(a,b), razlika(a,b), proizvod(a,b), kolicnik(a,b));
}

void celzijusUFarenhajte()
{
    float celzijus;
    printf("Unesite stepene: ");
    scanf("%f", &celzijus);
    printf("%f", celzijus * 9/5 + 32);
}

void obimPovrsinaKruga()
{
    float r;
    printf("Unesite poluprecnik kruga: ");
    scanf("%f", &r);
    printf("obim = %f, povrsina = %f", 2 * r * M_PI, r * r * M_PI);
}

void jeParanNeparan()
{
    int a;
    printf("Unesite broj: ");
    scanf("%d", &a);
    if(a % 2 == 0)
    {
        printf("Paran broj");
    }
    else
    {
        printf("Neparan broj");
    }
}

void maxOdTri()
{
    int a, b, c;
    printf("Unesite tri broja: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = a;
    if(max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }

    printf("max = %d", max);
}

void jePrestupna()
{
    int godina;
    printf("Unesite godinu: ");
    scanf("%d", &godina);
    if(godina < 0)
    {
        printf("Nepravilan zapis.");
    }

    if(godina % 4 == 0)
    {
        printf("Prestupna godina.");
    }
    else
    {
        printf("Nije prestupna godina.");
    }
}

void kalkulator()
{
    int a, b, operacija;
    printf("Unesite dva broja: ");
    scanf("%d %d", &a, &b);

    printf("1. sabiranje +\n");
    printf("2. oduzimanje -\n");
    printf("3. proizvod *\n");
    printf("4. kolicnik /\n");
    printf("Izaberite operaciju: ");
    scanf("%d", &operacija);

    if(operacija < 1 || operacija > 4)
    {
        printf("Nije pravilna operacija");
    }

    switch (operacija) {
        case 1:
            printf("zbir = %d", a + b);
            break;
        case 2:
            printf("razlika = %d", a - b);
            break;
        case 3:
            printf("proizvod = %d", a * b);
            break;
        case 4:
            if(b != 0){
                printf("kolicnik = %f", (float)a / b);
            }
            else
            {
                printf("Nepravilno deljenje sa 0");
            }
            break;
    }
}

void ispisiDo100()
{
    for(int i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    }
}

void zbirPrvih100()
{
    int sum = 0;
    for(int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    printf("Zbir = %d", sum);
}

void tablicaMnozenja()
{
    for(int i = 1; i <= 10; i++)
    {
        printf("Mnozenje sa %d\n", i);
        for(int j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }
}

int f(int n)
{
    if(n < 1)
    {
        return 1;
    }
    else
    {
        return n * f(n - 1);
    }
}

void faktorijal()
{
    int broj;
    printf("Unesite broj: ");
    scanf("%d", &broj);
    printf("%d! = %d", broj, f(broj));
}

void brojCifara()
{
    int broj;
    printf("Unesite broj: ");
    scanf("%d", &broj);
    int tmp = broj;
    int count = 0;
    while(tmp != 0)
    {
        tmp /= 10;
        count++;
    }

    printf("%d ima %d cifara", broj ,count);
}

void prosekBrojeva()
{
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        printf("Unesite %d. broj: ", i);
        scanf("%d", &i);
        sum += i;
    }

    printf("Prosek 10 brojeva = %f", (float)sum / 10);
}

void minMaxArray()
{
    int min = niz[0], max = niz[0];

    printf("Elementi niza: ");
    for(int i = 0; i < (sizeof(niz)/sizeof(niz[0])) - 1; i++)
    {
        printf("%d ", niz[i]);
        if(niz[i] < min)
        {
            min = niz[i];
        }

        if(niz[i] > max)
        {
            max = niz[i];
        }
    }

    printf("\n min = %d, max = %d", min, max);
}

bool jeParan(int n)
{
    return n % 2 == 0;
}

void brojNeparnihIParnih()
{
    int countEven = 0, countOdd = 0;
    for(int i = 0; i < (sizeof(niz)/sizeof(niz[0])) - 1; i++)
    {
        if(jeParan(niz[i]))
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }

    printf("\nbroj parnih = %d, broj neparnih = %d", countEven, countOdd);
}

void printNiz()
{
    printf("Elementi niza: ");
    for(int i = 0; i < (sizeof(niz) / sizeof(niz[0])) - 1; i++)
    {
        printf("%d ", niz[i]);
    }
}

void sumArray()
{
    int sum = 0;
    for(int i = 0; i < (sizeof(niz) / sizeof(niz[0])) - 1; i++)
    {
        sum += niz[i];
    }

    printf("\nsuma elemenata niza = %d", sum);
}

void printArrayReverse()
{
    printf("\nElementi niza(obrnuto): ");
    for(int i = (sizeof(niz) / sizeof(niz[0])) - 2; i >= 0; i--)
    {
        printf("%d ", niz[i]);
    }
}

int kvadrat(int x)
{
    return x * x;
}

void kvadrati()
{
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    printf("kvadrirano = %d", kvadrat(n));
}

bool jeProst(int n)
{
    if(n <= 1)
        return false;

    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

void jeProstBroj()
{
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    printf("prost broj? -> %s", jeProst(n) ? "true" : "false");
}

void sumaCifara()
{
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);

    int sum = 0;
    while(n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    printf("suma cifara = %d", sum);
}

void duzinaStringa()
{
    char str[] = "jagoda";
    int i = 0;
    while(str[i] != 0)
    {
        i++;
    }

    printf("duzina stringa = %d", i);
}

void jePalindrom()
{
    char str[100];
    printf("Unesite string: ");
    scanf("%99s", str);
    bool jePalindrom = true;
    int length = strlen(str);
    for(int i = 0, j = length - 1; i < j && jePalindrom; i++, j--)
    {
        if(str[i] != str[j])
        {
            jePalindrom = false;
        }
    }

    printf("ova rec je palindrom? -> %s", jePalindrom ? "true" : "false");
}

void konkatenacija()
{
    char str1[100];
    printf("Unesite string1: \n");
    scanf("%99s", str1);

    char str2[100];
    printf("Unesite string2: \n");
    scanf("%99s", str2);

    printf("%s%s", str1, str2);
}

void brojPojavaUStringu()
{
    char str[100];
    printf("Unesite string: \n");
    scanf("%99s", str); // 99s sprecava buffer overflow

    char karakter;
    printf("Unesite slovo koje se trazi: \n");
    scanf(" %c", &karakter);

    int length = strlen(str);
    int count = 0;
    for(int i = 0; i < length; i++)
    {
        if(str[i] == karakter)
            count++;
    }

    printf("%c se pojavljuje %d puta", karakter, count);
}

void generisi10Brojeva() {
    int arr[10];
    printf("Elementi radnom niza: ");
    for(int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }
}

void pogodiBroj()
{
    int broj = rand() % 100;
    printf("Broj je generisan. Pogadjajte.\nUnesi broj: ");
    int i = 0;
    bool jePogodjen = false;
    while(!jePogodjen)
    {
        scanf("%d", &i);
        if(i < broj)
            printf("Generisani broj je veci.\nUnesite broj: ");
        else if(i > broj)
            printf("Generisani broj je manji.\nUnesite broj: ");
        else
            jePogodjen = true;
    }

    printf("\nBroj je pogodjen.");
}



int main(void) {
    srand(time(NULL)); // kako bi svaki put uzimao drugaciju sekvencu brojeva kod random od pocetne vrednosti (trenutno verem u unix fomratu)
    //printNiz();
    //printArrayReverse();

    /*helloName();
     *dvaBroja();
     *celzijusUFarenhajte();
     *obimPovrsinaKruga();
     *jeParanNeparan();
     *maxOdTri();
     *jePrestupna();
     *kalkulator();
     *ispisiDo100();
     *zbirPrvih100();
     *tablicaMnozenja();
     *faktorijal();
     *brojCifara();
     *prosekBrojeva();
     *minMaxArray();
     *brojNeparnihIParnih();
     *sumArray();
     *kvadrati();
     *jeProstBroj();
     *sumaCifara();
     *duzinaStringa();
     *jePalindrom();
     *konkatenacija();
     *brojPojavaUStringu();
     *generisi10Brojeva();
     *pogodiBroj();*/
    return 0;
}
