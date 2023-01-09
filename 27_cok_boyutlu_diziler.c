#include <stdio.h>
#include <conio.h>

int main(){

    int sayi[2][3]={{1,4,8},{2,4,8}};
    printf("%d\n",sayi[1][2]);/*hata vermemesi için bu şekilde yazdırmamız lazım*/

    int a[2][4];

    for (int i = 0; i < 2; i++)/*kullanıcıdan alıp girmek bu şekilde her zaman for döngülerini kullanırız*/
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d.satirin %d.sutunundaki sayiyi giriniz:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",a[i][j]);
        }
        
    }
    

    getch();
}