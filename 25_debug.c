#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int a;
    printf("bir sayi giriniz:");
    scanf("%d",&a);
    int toplam=0;
    for (int i = 1; i <= a; i++) 
/*bu kesme noktalarını hataları önceden öngörmede veya mevcut bug'ları bulmada adımları tek tek ilerleterek kullanabiliriz*/    
    {
        toplam+=i;
    }
    printf("toplam=%d",toplam);
    

    getch();
}