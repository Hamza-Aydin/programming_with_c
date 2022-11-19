#include <stdio.h>
#include <conio.h>

int main(){

    int a,b;
    char c;

    printf("---------Hesap Makinesi---------\n");

    printf("yapilacak islemi giriniz:");
    scanf("%c",&c);

    printf("birinci sayiyi giriniz:");
    scanf("%d",&a);

    printf("ikinci sayiyi giriniz:");
    scanf("%d",&b);

    switch (c)/*buna bağlı olarak koşul durumları yazıyoruz*/
    {
    case '+':
        printf("cevap:%d\n",a+b);
        break;/*bu break'leri yazmazsak defult değeri de yazar*/
    case '-':
        printf("cevap:%d\n",a-b);
        break;
    case '*':
        printf("cevap:%d\n",a*b);
        break;
    case '/':
        printf("cevap:%d\n",a/b);
        break;    
    default:
        printf("gecersiz islem girdiniz!!!");
        break;
        }

    printf("------------gun bulma programı-----------------\n");

    int d;

    printf("gun numarasi giriniz:");
    scanf("%d",&d);

    switch (d)
    {
    case 1:
        printf("pzrt");
        break;
    case 2:
        printf("sali");
        break;
    case 3:
        printf("crs");
        break;
    case 4:
        printf("prs");
        break;
    case 5:
        printf("cuma");
        break;
    case 6:
        printf("cmrt");
        break;
    case 7:
        printf("pzr");
        break;
    
    default:
        printf("gecersiz gun girdiniz");
        break;
    }    
    getch();
}