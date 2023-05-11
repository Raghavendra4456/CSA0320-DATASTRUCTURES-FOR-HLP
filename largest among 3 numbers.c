#include <stdio.h>
int main() {
    char m,n,l;
    printf("Enter a character: ");
    scanf("%d%d%d",&m,&n,&l);
    if(m>n&&m>l)
    printf("%d largest",m);
    else if(n>m&&n>l)
     printf("%d largest",n);
else
 printf("%d largest",l);
     
}
