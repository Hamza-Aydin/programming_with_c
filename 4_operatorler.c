#include <stdio.h>
#include <conio.h>

int main(){

    const int a=24;
    const int b=12;

    int c=a*b;
    printf("%d\n",c);

    c=a+b;
    printf("%d\n",c);

    c=a-b;
    printf("%d\n",c);

    c=a/b;
    printf("%d\n",c);

    c=a%b;
    printf("%d\n",c);

    int d;
    printf("bir sayi giriniz:");
    scanf("%d",&d);
    int f=d%2;
    printf("%d\n",f);

    int h=14;
    printf("%d\n",h++);
    printf("%d\n",h);

    int g=22;
    printf("%d\n",++g);

    int k=10;
    int y=21;
    y=y+k;
    printf("%d\n",y);

    y*=k;
    printf("%d\n",y);

    int o=52;
    int r=5;

    o%=r;
    printf("%d\n",o);

    int q=70;
    int e=63;

    printf("%d\n",q==e);
    printf("%d\n",q!=e);
    printf("%d\n",a<=b);

    printf("%d\n",(q==e) & (q>=e));
    printf("%d",(q>=e) || (q<=e));









    getch();
}