# include <stdio.h>
# include <conio.h>
main()
// creating a matrix of n rows and columns with asterik border around it. 
{
int a,b,n;
//clrscr();
scanf("%d",&n);
for (a=1;a<=n+2;a++)
printf(" *");
printf("\n");
for (a=1;a<=n;a++)
{
printf(" *");
for (b =1;b<=n;b++)
{
printf(" %d",b);
}
printf(" *\n");
}
for (a=1;a<=n+2;a++)
printf(" *");

getch();
}
