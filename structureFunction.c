#include<stdio.h>
//Declaring structure//
struct add{
   int var1;
   int var2;
}a;
//Declaring and returning Function//
void show(struct add a){
   //Declaring sum variable//
   int sum;
   //Arithmetic Operation//
   sum=a.var1+a.var2;
   //Printing O/p//
   printf("Added value is %d",sum);
}
void main(){
   //Declaring structure//
   struct add a;
   //Reading User I/p//
   printf("Enter variable 1 = ");
   scanf("%d",&a.var1);
   printf("Enter variable 2 = ");
   scanf("%d",&a.var2);
   //Calling function//
   show(a);
}