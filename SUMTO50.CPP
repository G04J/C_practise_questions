# include <stdio.h>
// sum of first 50 natural numbers.

# include <conio.h>
main ()
{
int a,b;
clrscr();
a = 0;
b = 0;
while (a<50)
{
a = a+1;
b = b+a;
}
printf("%d\n",b);
getch();
}