#include <stdio.h>
#include <conio.h>

int main(){

    for (int i = 0; i <=10; i++)
    {
        if (i==7)
        {
            break;/*dögüyü direkt burada durdurur*/
        }
        
        printf("%d\n",i);
    }

    for (int i = 0; i <=10; i++)
    {
        if (i==7)
        {
            continue;/*döngünün burdan sonrasını atlatır(yani 7 yazılmaz)*/
        }
        
        printf("%d\n",i);
    }

    int a,toplam=0;
    do
    {
        printf("bir sayi giriniz:");
        scanf("%d",&a);
        toplam+=a;
        if (a<0)
        {
            break;
        }
    } while (1);/*böyle yapınca sonsuz döngü başlatmış oluruz ta ki break ile karşılaşana kadar*/
    
    printf("toplam:%d",toplam);

    getch();
}