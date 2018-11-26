#include<stdio.h>
#include<math.h>

void main(){
const float pi=3.14;
int choice;
int b,R,P,V,repeat;
double ;

printf("You can selct on off the choice : \n");
printf("-------------------------\n");
printf("\t| 2 or 4|\n");
printf("\t| 6 or 8|\n");
printf("\t| 10 or 12|\n");
printf("-------------------------\n");
printf("Enter your Choice : ");
scanf("%d",&choice);
switch(choice){
case 2:
case 4:
printf("Enter how often do you want repeat the process : \n");
scanf("%d",&repeat);
do {
printf("Enter the value of b : \n");
scanf("%d",&b);
printf("Enter the value of R : \n");
scanf("%d",&R);
if((b%7==0)&&(R<30)){
//X=
}else{
printf("Can not do the Equation\n");
}
repeat--;
}while(repeat > 0);
break;
case 6:
case 8:
printf("Enter the value of P : \n");
scanf("%d",&P);
printf("Enter the value of V : \n");
scanf("%d",&V);
if((P<100)&&(V%2!=0)){
//Y
}else{
printf("Can not do the Equation\n");
}
break;
case 10:
case 12:
printf("welcom to India!\n");
printf("My Name : \nMy ID : \n");
break;
default:
printf("Worring choice \n");
}
}
