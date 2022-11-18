#include <stdio.h>
#include <conio.h>
int main(){

    int sayi= 10;
    sayi= 20;
    sayi=-54.5;
    printf("%d\n",sayi);

    float a=15.6;
    printf("%f\n",a);

    double b=8.65165189479415;
    printf("%.16lf\n",b);

    char isim= 'h';
    printf("%c\n",isim);

    char name[10]="hamza";
    printf("%s\n",name);

    char c[]="mehmet";
    c[5]='d';
    printf("%s\n",c);

    printf("deneme metin yazisi\nbasarili\n");

    const int g=12;
    printf("%d",g);

    getch();

}