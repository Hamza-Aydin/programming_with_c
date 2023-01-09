#include <stdio.h>
#include <conio.h>
#include <string.h> /*bunu dahil etmemiz lazım*/


int main(){

    char a[10]="hamza";

    printf("%s\n",a);

    printf("%d\n",strlen(a));/*direkt dizinin içindekinin uzunluğunu gösterir*/

    char b[15]="aliileveli";
    char c[15]="mahmut";

    strcpy(b,c);/*b'nin üzerine c'yi yazdı*/
    printf("%s\n",b);

    char d[15]="ahuuuuuuu";
    char e[15]=" yayyyyyyy";

    strcat(d,e);/* iki diziyi birleştirmemizi sağlar*/
    printf("%s\n",d);

    char f[10]="merhaba";

    if(!strcmp(f,"merhaba")){/*bu şekilde striglerde karşılaştırma yaparken kullanılır*/
        printf("dogrudur\n");
    }

    char g[]="TELEFON";
    char l[]="bilgisayar";

    printf("%s\n",strlwr(g));/*harflerin boyutu için kullanıyor*/
    printf("%s\n",strupr(l));

    char n[10];/*sadece stringler için printf ve scanf yerine bunlar kullanılabilir*/
    puts("lutfen bir seyler yaziniz:\n");
    gets(n);
    puts(n);

    getch();
}