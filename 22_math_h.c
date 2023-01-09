#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


int main(){

    /*Bunları hepsi math.h kütüphanesinin fonksiyonlarıdır*/
    
    printf("%.2lf \n",floor(7.6));/*kendisine en yakın ve en küçük tam sayıyı alır*/
    printf("%.2lf \n",ceil(7.1));/*kendisine en yakın ve en büyük tam sayıyı alır*/
    printf("%.2lf \n",round(12.6));/*kendisine en yakın sayıyı verir*/
    printf("%.2lf \n",sqrt(81));/*sayının kökten çıkmış halini verir*/
    printf("%.2lf \n",pow(2,6));/*sayının üstünü hesaplamamızı sağlar*/
    printf("%.2lf \n",fmod(59,10));/*sayının yanındakinden bölümünden kalanı verir*/
    printf("%d \n",abs(-65));/*sayının mutlak değerini verir(sadece tam sayılarda kullanabiliriz)*/
    printf("%.2lf \n",sin(30));/*sayının trigonmetrik değerlerini verir ama içerisindeki değeri radyan olarak algılar*/
    printf("%.2lf \n",log(2.71));/*sayının logaritmasını verir ama e tabanında kabul eder*/
    printf("%.2lf \n",exp(1));/*sayıyı e'nin üstüne yazar*/

    getch();
}