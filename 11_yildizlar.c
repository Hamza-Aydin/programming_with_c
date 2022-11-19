#include <stdio.h>
#include <conio.h>

int main(){

    int a, b;

    printf("uzun kenari giriniz:");
    scanf("%d",&a);

    printf("kisa kenari giriniz:");
    scanf("%d",&b);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j<=b; j++)
        {
            printf("*");
        }
    printf("\n"); /*şekilli olarak gözükmesi için bunu girdik*/
    }
    
    int uzunluk;

    printf("uzunlugu giriniz:");
    scanf("%d",&uzunluk);

    for (int i = 1; i <=uzunluk; i++)
    {
        for (int j = i; j <=uzunluk; j++)
        {
            printf("");
        }
        for (int k = 1; k <=i*2-1; k++)
        {
            printf("*");
        }
    printf("\n");    
    }
    for (int i = uzunluk-1; i >= 1; i--)
    {
        for (int j =uzunluk; j >= i; j--)
        {
            printf("");
        }
        
        for (int k = 1; k <= i*2-1; k++)
        {
            printf("*");
        }
    printf("\n");        
    }

    getch();
}