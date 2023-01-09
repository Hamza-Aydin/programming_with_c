#include <stdio.h>
#include <conio.h>

int main(){

    int ogrenci;
    printf("ogrenci sayisini giriniz:");
    scanf("%d",&ogrenci);

    int notlar;
    printf("sinav sayisini giriniz:");
    scanf("%d",&notlar);

    int degerler[ogrenci][notlar];

    for (int i = 0; i < ogrenci; i++)
    {
        for (int j = 0; j < notlar; j++)
        {
            printf("%d.ogrencini %d.sinav notu:",i+1,j+1);
            scanf("%d",&degerler[i][j]);
        }
    }
    getch();
}