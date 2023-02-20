// write a program to calculate the sum of
// the first and last number from 1 to 20 .
// ex (1+20,2+19)

# include <stdio.h>
# include <conio.h>
void main()
{
int a,b,c;
clrscr();
a = 0;
b = 21;
while (a<20)
{
while (b>1)
{
a = a+1;
b = b-1;
c = a+b;
printf("%d + %d = %d \n",a,b,c);
}
}

getch();
}