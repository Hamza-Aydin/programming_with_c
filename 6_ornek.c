#include <stdio.h>
#include <conio.h>

int main(){

    int bolunen;
    int bolen;
    int bolum;
    int kalan;

    printf("Bolunecek sayiyi giriniz:");
    scanf("%d",&bolunen);

    printf("kaca bolmek istiyorsunuz:");
    scanf("%d",&bolen);

    bolum=bolunen/bolen;
    kalan=bolunen%bolen;

    printf("%d sayisini %d sayisine bolersek sonuc %d olur kalan ise %d olur.",bolunen,bolen,bolum,kalan); 


    getch();
}