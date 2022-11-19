#include <stdio.h>
#include <conio.h>

int main(){

    int sayi, fact=1;

    printf("bir sayi giriniz:");
    scanf("%d",&sayi);

    while (sayi>0)/*bu koşul sağlandığı sürece içindeki işlemi yapar*/
    {
        fact*=sayi;
        sayi-=1; /*eğer bunu yazmazsak sonsuza kadar içindeki işlemi yapar*/
    }
    printf("sonuc:%d\n",fact);

    int a,toplam=0;

    printf("bir sayi giriniz:");
    scanf("%d",&a);

    while (a>0)
    {
        toplam+=a;
        a-=1;
    }
    printf("sayilarin toplami:%d\n",toplam);

    int h, sonuc=0;

    do /*while'ın içindeki koşul sağlandığı sürece bunun içindeki fonksiyonlar yapılacak*/
    {
        printf("bir sayi giriniz:");
        scanf("%d",&h);
        sonuc+=h;

    } while (h!=0);
    printf("sayilarin toplami:%d",sonuc);
/*do-while ve while arasında sadece kullanım şekli olarak fark vardır yoksa ikisinde de aynı işlemler yapılabilir*/
   
    



    getch();
}