
#include<stdio.h>
#include<math.h>

void main(){
const float pi=3.14;
int choice;
int R,a,Z,H,repeat;
printf("You can selct on off the choice : \n");
printf("-------------------------\n");
printf("\t| 1 or 2|\n");
printf("\t| 3 or 4|\n");
printf("\t| 5 \t|\n");
printf("-------------------------\n");
printf("Enter your Choice : ");
scanf("%d",&choice);

if((choice==1)||(choice==2)){
    printf("Enter how often do you want repeat the process : \n");
    scanf("%d",&repeat);
do {
    printf("Enter the value of R : \n");
    scanf("%d",&R);
    printf("Enter the value of a : \n");
    scanf("%d",&a);
if((R>=45)&&(a<0)){
//s=((tan(R)/);
}else{
    printf("Can not do the \n");
}
repeat--;
}while(repeat > 0);
}else if((choice==3)||(choice==4)){
    printf("Enter the value of Z : \n");
    scanf("%d",&Z);
    printf("Enter the value of H : \n");
    scanf("%d",&H);
if((Z%2!=0)&&(H%3==0)){
//R
}else{
    printf("Can not do the \n");
}
}else if(choice==5){
        printf("Thank You forn using this program!\n");
        printf("My Name: \nMy ID : \n");

    }else{
        printf("Worring input \n");
    }

}
