#include <stdio.h>
#include <conio.h>

int main(){

    printf("-----iki Sayili Hesap Makinesi-----\n");

    int a;
    int b;
    char c;
    
    printf("yapilacak islemi giriniz:"); /*bunu ilk girmezsek alttaki printf'leri değermiş gibi alır kendine*/
    scanf("%c",&c);

    if (c=='+'|| c=='-'|| c=='*'|| c=='/')
    {
        printf("birinci sayiyi giriniz:");
        scanf("%d",&a);

        printf("ikinci sayiyi giriniz:");
        scanf("%d",&b);
    
        int t=a+b;
        int f=a-b;
        int k=a*b;
        int z=a/b;

        if(c=='+'){

            printf("%d ile %d sayisinin toplami %d 'ye esittir",a,b,t);
        }

        else if(c=='-'){

            printf("%d ile %d sayisinin farki %d 'ye esittir",a,b,f);
        }

        else if(c=='*'){

            printf("%d sayisi ile %d sayisinin carpimi %d 'ye esittir",a,b,k);
        }

        else if(c=='/'){

            printf("%d sayisi ile %d sayisinin bolumu %d 'ye esittir",a,b,z);

        }
    }        
    else{
        printf("gecersiz islem girdiniz!");
    }
        

    getch();
}