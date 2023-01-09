#include <stdio.h>
#include <conio.h>
#include <math.h>


int main(){

    /*Diziler aynı veri türünden elemanları tek değişkende depolayabilmemizi sağlar*/
    /*Dizilerin elemanlarına erişip bunları güncelleyebiliriz*/

    int sayi[5]={5,7,9,1,2};
    sayi[2]=32;
    printf("%d\n",sayi[2]);

    int bro[4]={2,4,7};

    printf("bir sayi giriniz:");
    scanf("%d",&sayi[3]);

    printf("bir sayi giriniz:");
    scanf("%d",&sayi[4]);

    for (int i = 0; i <5; i++)
    {
        printf("%d \n",sayi[i]);
    }
    
    int max[15];
    int toplam=0;
    int n;

    printf("lutfen dizinin eleman sayisini giriniz:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("%d.sayiyi giriniz:",i);
        scanf("%d",&max[i]);
        toplam+=max[i];
    }
    int ort=(toplam/n);
    printf("ortalama:%d",ort);

    getch();
}