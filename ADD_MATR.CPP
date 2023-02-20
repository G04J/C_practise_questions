# include <stdio.h>
# include <conio.h>

main ()
{
int a,d,b,c,f,n;
//clrscr();
printf("Enter number here: ");
scanf("%d",&n);
a = 0;
if (n%2==0)
{
while (a<n/2)
{
a = a+1;
d = n/2;
printf("%d + %d = %d \n",a,(a+d),(a+a+d));
}
}
else
{
f = n-1;
while (a<f/2)
{
d = f/2;
a = a+1;
printf("%d + %d = %d \n",a,(a+d),(a+a+d));
}
printf("%d + %d = %d \n",0,n,n);
}
getch();
}
