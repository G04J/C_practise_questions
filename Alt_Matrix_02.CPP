# include <stdio.h>
# include <conio.h>
// Creating matrix with alternate values starting from 1 till b. (b = number entered in input)
main ()
{
int a[20],b,c,d,e,f,i,j;
//clrscr();
printf("Enter number here: ");
scanf("%d",&b);

for (i=1;i<=b;i++)
{
for (e=1;e<=b;e++)
{
if (e%2!=0)
{
for (j=1;j<=b;j++)
{
printf("%d",j);
}
printf("\n");
}
else
{
for (j=b;j>=1;j--)
{
printf("%d",j);
}
printf("\n");
}
}
break;
}
getch();
}
