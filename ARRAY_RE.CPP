# include <stdio.h>
# include <conio.h>
// Removing an element in an array.
void main()
{
int a[20],b,c,f,g,d,n,i;
clrscr();

printf("Enter length of array \n");
scanf("%d",&b);

printf("Enter number for array here:\n ");

for (i=1;i<b+1;i++)
{
scanf("%d",&a[i]);
}

printf("Enter number to remove");
scanf("%d",&d);


for (i=1;i<b+1;i++)
{
if (a[i]==d)
{
a[i] = 0;
}
printf("%d,",a[i]);
}


getch();
}
