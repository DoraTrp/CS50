#include<stdio.h>
#include<cs50.h>

int main(void)
{
float firstcash;
//Prompt user for cash

int quarters=0;
int dimes=0;
int nickels=0;
int pennies=0;

do
    {
    firstcash=get_float("Please insert your cash");
    }
while(firstcash<0.01);



int sum=0;

  int cash=firstcash*100;

  if(cash>25)
  {
    quarters=cash/25;
    cash=cash%25;

  }
 sum+=quarters;

 if(cash>10)
 {
     nickels=cash/10;
     cash=cash%10;

 }
 sum+=nickels;

 if(cash>5)
 {
    dimes=cash/5;
     cash=cash%5;

 }
sum+=dimes;

 if(cash>=1)
 {
     pennies=cash/1;

 }
 sum+=pennies;

 printf("That is %i coins \n",sum);
}