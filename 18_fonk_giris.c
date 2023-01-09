#include <stdio.h>
#include <conio.h>

void yazi();/*bu şekilde protatip vermemiz lazım eğer altta tanımladıysak fonksiyonu*/

int main(){

    yazi(15,20);

    getch();
}

void yazi(int a,int b){
    printf("hello/n");
    printf("toplam:%d",a+b);
}
/*void ile tanımlanmış fonksiyonlar return vermez yani dört işlemle değer tutmaz*/