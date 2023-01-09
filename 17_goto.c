#include <stdio.h>
#include <conio.h>

int main(){

    int a, toplam=0;
    do
    {
        printf("bir sayi giriniz:");
        scanf("%d/n",&a);
        toplam+=a;
        if (a==0)
        {
            goto git; /*döngünün direkt yönünü değiştirip git diye tanımladığımız fonksiyona yönlendirir*/
        }
        
    } while (1);
        git:
            printf("%d",toplam);
            
    getch();
}