#include <stdio.h>
#include <conio.h>

int main(){

    for (int i = 0; i <10; i++) /*bu üc parametreyi mecburen alıcak (artış oranını +=2 şeklinde de yazılabilir)*/
    {
        printf("merhaba\n");
    } /*artıs oranini belirtmezsek dongu sonsuza gider*/

    for (int i = 200; i >100; i-=20)
    {
        printf("deneme1\n");
    }

    int sayi, toplam=0;

    printf("lutfen bir sayi giriniz:");
    scanf("%d",&sayi);

    for (int i = 0; i <= sayi; i++)
    {
        toplam=toplam+i;
    }
    printf("toplam:%d\n",toplam);

    int sayid, carpim=1;

    printf("bir sayi giriniz:");
    scanf("%d",&sayid);

    for (int k = 1; k <=sayid; k++)
    {
        carpim*=k;
    }
    printf("carpim:%d",carpim);
    
    getch();
}