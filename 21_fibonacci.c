#include <stdio.h>
#include <conio.h>



int main(){

    int a=0;
    int b=1;
    int sonrakiterim;
    int n;

    printf("bir sayi giriniz:");
    scanf("%d",&n);

    for (int i = 1; i<=n; i++)
    {
        printf("%d \n",a);
        sonrakiterim=a+b;
        a=b;
        b=sonrakiterim;
    }
    

    getch();
}