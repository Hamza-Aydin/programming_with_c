#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void write_polynomial3(double a3, double a2, double a1, double a0);
void write_polynomial4(double a4,double a3, double a2, double a1, double a0);
void calculate_fibonacci_sequence();
void decide_perfect_harmonic_number();
void bmi_calculation ();


int main(){
    printf("-------------------  Programlama Odevi :  -----------------------\n");
    printf("Soru 1: Polinom Yazma(oncelikle fonksiyondaki katsayilari giriniz!)\n");
    printf("Soru 2: Fibonacci Dizisi(cikmak icin '99'u tuslayin\n");
    printf("Soru 3: Mukemmel-Harmonik Sayi Sorgulama (cikmak icin '00'tuslayin)\n");
    printf("Soru 4: Beden-Kitle Indeksi\n");

    int a;
    printf("--------------------------------------------------------------\n");
    printf("Lutfen Secmek Istediginiz Soru Numarasini Giriniz:");
    scanf("%d",&a);

    switch (a)
    {

    case 1:

        write_polynomial3(1,3,4,5);
        write_polynomial4(1,5,3,5,5);

        break; 

    case 2:
        calculate_fibonacci_sequence();
        break;

    case 3:
        decide_perfect_harmonic_number();
        break; 

    case 4:
        bmi_calculation();
        break;
    default:
        break;
    }

    getch();
}

void decide_perfect_harmonic_number()
{
    while (1)
    {
        
        int n;
        printf("Lutfen Bir Sayi Giriniz: ");
        scanf("%d", &n);

        if (n == 00)
        {
            break;
        }

        int sum = 0;
        printf("Sayinin Tam Bolenleri:");
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
                printf("%d \t",i);
            }
            
        }
        printf("\n");
        if (sum == n)
        {
            printf("Mukemmel Sayi Mi? : Evet\n");
        }
        else
        {
            printf("Harmonik Sayi Mi? : Hayir\n");
        }

        
        double harmonic_mean = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                harmonic_mean += 1.0 / i;
            }
        }
        if (harmonic_mean == (int) harmonic_mean)
        {
            printf("Harmonik Sayi Mi? : Evet\n");
        }
        else
        {
            printf("Harmonik Sayi Mi? : Hayir\n");
        }
    }
}


void bmi_calculation (){
    printf("---------Vucud Kitle Indeksi Hesaplama-----------------\n");
    float boy;
    float kilo;
    float indeks;

    printf("Lutfen Kac Kilo Oldugunuzu Giriniz:");
    scanf("%f",&kilo);

    printf("Lutfen Boyunuzu Arada Nokta Kullanarak Giriniz(1.75 gibi):");
    scanf("%f",&boy);
    
    indeks=kilo/(boy*boy);

    if (indeks<=16.0)
    {
        printf("Vucud kitle indeksiniz: %f \n",indeks);
        printf("Katagoriniz: Severely ");
    }

    else if (indeks<18.4)
    {
        printf("Vucud kitle indeksiniz: %f \n ",indeks);
        printf("Katagoriniz: Underweight ");
    }

    else if (indeks<24.9)
    {
        printf("Vucud kitle indeksiniz: %f \n",indeks);
        printf("Katagoriniz: normal");
    }
    else if (indeks<29.9)
    {
        printf("Vucud kitle indeksiniz: %f \n ",indeks);
        printf("Katagoriniz: Owerweight ");
    }
     else if (indeks>30)
    {
        printf("Vucud kitle indeksiniz: %f \n",indeks);
        printf("Katagoriniz: obese");
    }
    else{
        printf("Hatali bir işlem yaptiniz!!");
    }
} 
void write_polynomial3(double a3, double a2, double a1, double a0){

    printf("------Ucuncu Dereceden Bir Polinomun Katsayilarini Girerek Denklemini Yazma:----------\n");

    if (a0==0 & a3!=0 & a2!=0 & a1!=0 )
    {
        printf("%.1lf*x^3+%.1lf*x^2+%.1lf*x\n",a3,a2,a1);
    }
    else if (a3==1 & a2!=1 & a1!=1 & a0!=1)
    {
        printf("x^3+%.1lf*x^2+%.1lf*x+%.1lf\n",a2,a1,a0);
    }
    else if (a2==1 & a0!=1 & a1!=1 & a3!=1)
    {
        printf("%.1lf*x^3+x^2+%.1lf*x+%.1lf\n",a3,a1,a0);
    }
    else if (a1==1 & a2!=1 & a0!=1 & a3!=1 )
    {
        printf("%.1lf*x^3+%.1lf*x^2+x+%.1lf\n",a3,a2,a0);
    }
    else if (a1==1 & a2 ==1 & a3==1 & a0==1)
    {
        printf("x^3+x^2+x+1\n");
    }
    else{
        printf("%.1lf*x^3+%.1lf*x^2+%.1lf*x+%.1lf\n",a3,a2,a1,a0);
    }
    
}

void write_polynomial4(double a4,double a3, double a2, double a1, double a0){

    printf("------Dorduncu Dereceden Bir Polinomun Katsayilarini Girerek Denklemini Yazma:----------\n");

    if (a0==0 & a3!=0 & a2!=0 & a1!=0 & a4!=0)
    {
        printf("%.1lf*x^3+%.1lf*x^2+%.1lf*x\n",a3,a2,a1);
    }
    else if (a4==1 & a2!=1 & a1!=1 & a0!=1 & a3!=1)
    {
        printf("x^4+%.1lf*x^3+%.1lf*x^2+%.1lf*x+%.1lf\n",a3,a2,a1,a0);
    }
    else if (a3==1 & a2!=1 & a1!=1 & a0!=1 & a4!=1)
    {
        printf("%.1lf*x^4+x^3+%.1lf*x^2+%.1lf*x+%.1lf\n",a4,a2,a1,a0);
    }
    else if (a2==1 & a0!=1 & a1!=1 & a3!=1 & a4!=1)
    {
        printf("%.1lf*x^4+%.1lf*x^3+x^2+%.1lf*x+%.1lf\n",a4,a3,a1,a0);
    }
    else if (a1==1 & a2!=1 & a3!=1 & a0!=1 & a4!=1)
    {
        printf("%.1lf*x^4+%.1lf*x^3+%.1lf*x^2+x+%.1lf\n",a4,a3,a2,a0);
    }
    else if (a1==1 & a2==1 & a3==1 & a0==1 & a4==1)
    {
        printf("x^4+x^3+x^2+x+1\n");
    }
    else{
        printf("%.1lf*x^4+%.1lf*x^3+%.1lf*x^2+%.1lf*x+%.1lf",a4,a3,a2,a1,a0);
    }
}

void calculate_fibonacci_sequence()
    {
        char num_terms[20];

        while (1)
        {
        
            printf("Lutfen Fibonaccinin Kac Terimini Gormek Istediginizi Yaziniz: ");
            scanf("%s", & num_terms);
            int b=atoi(num_terms);

            if (b< 0)
                {
                printf("Lutfen Pozitif Bir Sayi Yaziniz:");
                scanf("%d",&b);
                }
            else if (b==0)
            {
                printf("Lutfen Sayisal Bir Deger Giriniz:");
                scanf("%d",&b);
            }
            else if (b==99)
            {
                break;
            }
            
            
            int ilk = 0;
            int siradaki=1;
            printf("Fibonacci Dizisi:\n");
            for (int i = 0; i < b; i++)
                {
                int sonraki = ilk + siradaki;
                printf("%d \n", ilk);
                ilk = siradaki;
                siradaki = sonraki;
                }
        }
    }
    
/*HAMZA AYDIN*/
/*22052611*/
/*MATEMATIK MUHENDISLIGI*/