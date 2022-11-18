#include <stdio.h>
#include <conio.h>

int main(){
    int a=1000;
    printf("%d\n",a);

    float b=12.2;
    printf("%f\n",b);

    double c=-198.2314;
    printf("%.64lf\n",c);

    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(char));

    char name[10]="hamza";
    printf("%d\n",sizeof(name));

    printf("%d\n",sizeof(long long));
    printf("%d\n",sizeof(short int));

    unsigned int m=400000000;
    printf("%d",m);
    getch();
}