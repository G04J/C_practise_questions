# include <stdio.h>
# include <conio.h>
// creating a matrix with alternate numbers starting from 1 and entering the number of column and row as input. 
main ()
{
int a,b,c,d,i,j,e;
//clrscr();

printf("Enter column here:");
scanf("%d",&b);

printf("Enter row here:");
scanf("%d",&e);

d = b+1;
for (i=1;i<=e;i++)
{
d = d-1;
printf("\n %d",i);
for (j=2;j<=b;j++)
{
if (j%2==0)
{
printf("%d",d);
}
else
{
printf("%d",i);
}
}
}

getch();
}
