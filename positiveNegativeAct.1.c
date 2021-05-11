#include<stdio.h>

int main()
{

    int num;
    
    
    printf("Enter any number weather its positive(+) or negative (-): ");
    scanf("%d",&num);
    
    
  if(num>0)
{
    printf("The integer is a Positive number ");

}

else if(num<0)
{
    printf("The integer is a Negative number");

}

else
{
    printf("The integer is Zero ");

}



    return 0;
}