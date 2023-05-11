#include<stdio.h>
int main(void)

{
char  cName[5][21]= {0};
int x=0;
int  iPick;
printf("Enter the name of 5 people\n\n");
for(x=0;x<=5;x++){
printf("Enter name %d:", x+1);
scanf("%s", cName[x]);

printf("\n\nWould you like to add another name or view current names stored?\n");
printf("1)\tAdd another name\n");
printf("2)\tView names stored\n");
scanf("%d", &iPick);
switch(iPick){
case 1:
    break;
case 2:
    for(x=0;x<=5;x++){
    printf("\nName %d is %s\n",x+1, cName[x]);
        }
}
}
return 0;
}
