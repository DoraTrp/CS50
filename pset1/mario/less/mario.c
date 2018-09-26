#include <stdio.h>
#include <cs50.h>
int main (void)
{
int n;
//Prompt user for a positive number
do
{
n=get_int("Positive number: ");
}
while(n<=0 || n>23);

int h=2;
for(int i=0; i<n; i++)
{


    for (int b=0; b<=n-h; b++)
        {printf(" ");}

    for (int c=h; c>0; c--)
        {printf("#");}
    h++;
    printf("\n");
}
}