#include <stdio.h>
#include <conio.h>

int main(){

    int sayi1,sayi2,ebob,ekok;

    printf("-----------EBOB ve EKOK HESAPLAMA PROGRAMI------------\n");

    printf("birinci sayiyi giriniz:");
    scanf("%d",&sayi1);

    printf("ikinci sayiyi giriniz:");
    scanf("%d",&sayi2);

    for (int i = 1; i <=sayi1 & i<=sayi2; i++) /*for'u burada sınır belirtmek ve dönmek için kullandık o sınır içindeki sayıları*/
    {
        if (sayi1 %i==0 & sayi2 %i==0)
        {
            ebob=i;  /*ebob ve ekok ztn tek bir tane değerdir*/          
        }
    }
    printf("ebob:%d\n",ebob);/*dışarı yazmasak hata veriyordu döngüde riskli*/
    ekok=(sayi1*sayi2)/ebob; /*ebob*ekok=sayi1*sayi2*/
    printf("ekok:%d\n",ekok);
        
    getch();
    }
