#include <stdio.h>
#include <conio.h>

int main(){

    int islem,cek,yatir,bakiye=5000;

    printf("-------------------atm programi---------------------\n");
    printf("1=bakiye sorma\n");
    printf("2=para yatirma\n");
    printf("3=para cekme\n");
    printf("4=cikis\n");

    do/*dögünün içine değişken tanımlamak riskli çünkü her seferinde yenilenmiş olur değer*/
    {
        printf("yapmak istediginiz islem numarasini giriniz:");
        scanf("%d",&islem);

        switch (islem)
        {
        case 1:
            printf("%d\n",bakiye);
            break;
        case 2:
            printf("yatirmak istediginiz para tutarini giriniz:");
            scanf("%d",&yatir);
            bakiye+=yatir;
            break;   
        case 3:
            printf("cekmek istediginiz para tutarini giriniz:");
            scanf("%d",&cek);

            if (cek>bakiye)
            {
                printf("yetersiz bakiye!!!\n");
                break;
            }
            
            bakiye-=cek;
            break;
        default:
            printf("ciktiniz veya gecersiz islem numarasi girdiniz!!!\n");
            break;
        }
    } while (islem!=4);

    
    
    

    getch();
}