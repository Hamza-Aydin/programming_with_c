#include <stdio.h>
#include <conio.h>

int main(){

    if(1){

        printf("merhaba\n");
    } /*if'in içi doğruysa aşağıdaki işlemleri yapılır*/

    if(5>6){
        printf("evet\n");
    }

    int vize;
    int final;
    int proje;

    printf("Genel Ortalama Hesaplama Programi:\n");

    printf("vize notunuzu giriniz:");
    scanf("%d",&vize);

    printf("final notunuzu giriniz:");
    scanf("%d",&final);

    printf("proje notunuzu giriniz:");
    scanf("%d",&proje);

    int ortalama=(vize+final+proje)/3;

    if(ortalama>=50 & ortalama<=100){
        printf("not ortalamaniz: %d dersi gectiniz.\n",ortalama);
    }
    else if (ortalama<=50){
        printf("not ortalamaniz: %d  dersten kaldiniz!\n",ortalama);
    }
    else{
        printf("not ortalamaniz:%d hatali deger girdiniz!\n",ortalama);
    }
    


    getch();
}