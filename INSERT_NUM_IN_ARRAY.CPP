# include <stdio.h>
# include <conio.h>
// insert a array at a specific position in an array. 
main ()
{
int a[20],b,c,d,e,f,i;
clrscr();
printf("Enter the length of array: ");
scanf("%d",&b);
printf("Enter the numbers of array: \n");
for (i=1;i<b;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the number to be inserted");
scanf("%d",&c);
printf("Enter the position at which the number is to be inserted");
scanf("%d",&d);

e = 0;
while (e<(b-d)+1)
{
e = e+1;
for (i=d;i<b+1;i++)
{
f = a[d];
a[d] = c;
c = f;
d = d+1;
}
}

printf("array with inserted number at specified position:\n ");
for (i=1;i<b+1;i++)
{
printf("%d, ",a[i]);
}

for (;e<b+1;)
{
e = e+1;
for (i=1;i<b+1;i++)
{
if (a[i]>a[i+1])
{
f = a[i];
a[i] = a[i+1];
a[i+1] = f;
}
}
}


printf("\n Sorted array with inserted number. \n ");
for (i=1;i<b+1;i++)
{
printf("%d, ",a[i]);
}
getch();
}
