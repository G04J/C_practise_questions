# include <stdio.h>
# include <conio.h>
//input: three intergers. 
//output: three integers in their descending order.
main ()
{
int a,b,c,d,f,e;
//clrscr();
printf("Enter first value:");
scanf("%d",&a);
printf("Enter second value:");
scanf("%d",&b);
printf("Enter third value");
scanf("%d",&c);
if (a>b)
{
if (c>a)
{
printf("%d > %d > %d",c,a,b);
}
else
{
if (c<b)
{
printf("%d > %d > %d",a,b,c);
}
else
{
printf("%d > %d > %d",a,c,b);
}
}
}
else
{
if (c>b)
{
printf("%d > %d > %d",c,b,a);
}
else
{
if (c<a)
{
printf("%d > %d > %d",b,a,c);
}
else
{
printf("%d > %d > %d",b,c,a);
}
}
}
getch();
}
