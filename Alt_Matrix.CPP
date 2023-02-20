# include <stdio.h>
# include <conio.h>
// Creating a matrix with alternate value (starting from 1) till b. (b is an interger taken as the input)
void main ()
{
int b,c,d,e,i,j;
clrscr();

printf("Enter number for b:");
scanf("%d",&b);
c = 0;
d = b+1;

for (j=1;j<=b;j++)
{
c = c+1;
d = d-1;
for (i=1;i<=b;i++)
{

if (i%2!=0)
{
printf("%d ",c);
}

else
{
printf("%d ",d);
}

}
printf("\n");
}
getch();
}
