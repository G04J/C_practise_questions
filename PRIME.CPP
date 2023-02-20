# include <stdio.h>
# include <conio.h>

// To print first n prime numbers where n is given as input. 
main ()
{
int a,b,c,e,n;
clrscr();
scanf("%d",&n);
a = 2;
c = 1;
e = 0;
if (n>=1)
printf("%d\n",2);
while (c<n)
{
a = a+1;
for (b=2;b<a;b++)
{
if (a%b==0)
{
e = 0;
}
else
{
e = e+1;
}
if (e==a-2)
{
printf("%d\n",a);
c = c+1;
}
}
}


//printf("%d",a);
/*
while (a >0)
{
a = a-1;
for (b=0;b<a;b++)
{
if (b!=a && a%b==0)
{
e = 0;
}
else
{
e = e+1;
}
if (e==a-2)
{
printf("%d\n",a);
c = c+1;
}
}
}
*/
getch();
}
