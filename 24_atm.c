#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

extern int bakiye=8000;

void menu();
void goruntuleme();
void cikis();
int para_cekme();
int para_yatirma();

int main(){
    int islem;
    menu();
    do
    {
    printf("Lutfen Yapmak Istediginiz Islem Numarasini Giriniz:");
    scanf("%d",&islem);

    switch (islem)
    {
    
    case 1:
        goruntuleme();
        break;

    case 2:
        para_cekme();
        break;

    case 3:
        para_yatirma();
        break;

    default:
        printf("Gecersiz Islem Numarasi Girdiniz veya Cikis Yaptiniz!!!>>>>>>>>>>>>>>\n");
        break;
    }  
    } while (islem!=4);
    printf("------------------------------ATM'den Cikis Yaptiniz!!!-----------------------------");


    getch();
}

void menu(){
    printf("---------------------------ATM Programi---------------------------\n");
    printf("1:TOPLAM BAKIYE\n");
    printf("2:PARA CEKME\n");
    printf("3:PARA YATIRMA\n");
    printf("4:CIKIS\n");
}

void goruntuleme(){
    printf("Toplam Bakiye:%d \n",bakiye);
}

int para_cekme(){
    int miktar;
    printf("Lutfen Cekmek Istediginiz Para Tutarini Giriniz:");
    scanf("%d",&miktar);
    if(miktar>bakiye){
        printf("Bakiye Yetersiz!!!\n"); }
    else{
        printf("Eski Bakiye:%d\n",bakiye);
        bakiye-=miktar;
        printf("Guncel Bakiye:%d\n",bakiye);
    }    
}

int para_yatirma(){
    int miktar;
    printf("Lutfen Yatirmak Istediginiz Para Tutarini Giriniz:");
    scanf("%d",&miktar);
    printf("Eski Bakiye:%d \n",bakiye);
    bakiye+=miktar;
    printf("Guncel Bakiye:%d \n",bakiye);
}