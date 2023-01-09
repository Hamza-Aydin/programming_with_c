#include <stdio.h>
#include <conio.h>

int toplamf(int a,int b);

int main(){
    int a,b,toplam;

    printf("birinci saiyiyi giriniz:");
    scanf("%d",&a);

    printf("ikinci sayiyi giriniz:");
    scanf("%d",&b);

    toplam= toplamf(a,b); /*kullanıcıdan aldığımız değerlere göre dönüyor fonksiyon*/
    printf("toplamlari:%d",toplam);

    getch();
}

int toplamf(int a,int b){/*return ifadesini tutması için int ile yaptık fonksiyonu*/

    int toplam=a+b;
    return toplam;/*bu fonksiyon bu return değerini tutuyor*/
}