#include <stdio.h>
#include <conio.h>

int toplamf(int a){

    if (a==0)
    {
        return 0;
    }
    else{
        return a + toplamf(a-1);
    }   
}
int toplama=0;
int basamak(int b){

    if (b!=0)
    {
        toplama+=b%10;
        basamak(b/10);
    }
    return toplama;
    
}

int main(){
    int a,b,toplam;

    printf("bir sayi giriniz:");
    scanf("%d",&a);
    toplam=toplamf(a);
    printf("%d\n",toplam);

    printf("ikinci sayiyi giriniz:");
    scanf("%d",&b);
    printf("basamaklarin toplami:%d",basamak(b));

    getch();
}

