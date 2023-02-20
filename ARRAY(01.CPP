# include <stdio.h>
# include <conio.h>

// input: integers for an array of length 7 and an additional number that is to be inserted in the array. 
// output: array with inserted number.  
main ()
{
int a[7],i,f,e,j,g,b[8];
clrscr();
printf("for an array of length 7");
printf("enter number to be inserted");
scanf("%d",g);
for (i =0;i<=7;i++)
{
scanf("%d",&a[i]);
}
f = 0;
e = 0;
for (;e < 7;)
{
e = e+1;
for (i=0;i<=7;i++)
{
if (a[i] > a[i+1])
{
f =a[i];
a[i] = a[i+1];
a[i+1] = f;
}
}}
for (i=0;i<=7;i++)
printf("%d ,",a[i]);

for (j=0;j<=8;j++)
{
for (i=0;i<=7;i++)
if (a[i] < g)
{
b[j] = a[i];
}
else
{
b[j] = g;
b[j+1] = a[i];
}
printf("%d",b[j]);
}
getch();
}
