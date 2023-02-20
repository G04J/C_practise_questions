# include <stdio.h>
# include <conio.h>

//taking odd or even number as the input and taking the opposite (even number if the first output was odd and vice versa.) as the second input.
//output: returning the addition of the two values. 
void main()
{
int a,b,c,d,e,f;
clrscr();
printf("Enter first number here");
scanf("%d",&a);

c = 0;
while (c<1)
{
if (a%2==0)
{
printf("Enter an Odd number");
scanf("%d",&b);
if (b%2==0)
{
printf("Error \n");
}
else
{
printf("%d + %d = %d",a,b,a+b);
c = c+1;
}
}


else
{
printf("Enter an even number");
scanf("%d",&b);
if (b%2!=0)
{
printf("Error \n");
}
else
{
printf("%d + %d = %d",a,b,a+b);
c = c+1;
}
}
}

getch();
}
