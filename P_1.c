#include <stdio.h>

int main() 
{
int a;
int b;

printf("Enter value of a: ");
scanf("%d", &a);

printf("Enter value of b: ");
scanf("%d",&b);
if(a<=b)
{

printf("a is smallest number");
 }
else
{ 
printf("b is smallest number");

}
 
if(a>=b)
{
 printf("a is largest number");
  }
  else

   {
    printf("b is largest number");
   }
return 0;
}
