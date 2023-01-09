#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

extern int global=15;/*bu global değişkenlerin belirtecidir artık bu değişken her yerde kullanılabilir*/
/*diğerleri local değişkendi*/

int fonk1(){
    auto int a=0; /*aslında fonk içinde tanımladığımız her değişken auto yazmasak da olur*/
    printf("%d \n",a);
    a++;
}
int fonk2(){
    static int b=0; /*bu da artık değişkenin değerinin değişip son değerden kaldığı yerden devam edebilmesini sağlar*/
    printf("%d \n",b);
    b++;
}
int main(){
    fonk1();
    fonk1();/* hep sıfır basmasının sebebi her fonk kendi içinde değerini tutuyor tekrar yazarsak başa dönüyor*/
    fonk1();

    global=22;
    printf("%d \n",global);
    fonk2();
    fonk2();
    fonk2();

    register int i;/*bu değişkene sürekli kullanılan yerlerde kullanırsak daha hızlı bir erişim sağlarız*/
    for (i = 0; i <100; i++)
    {
        printf("daha hizli erisim\n");
    }

    getch();
}