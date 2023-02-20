# include <stdio.h>
# include <conio.h>
// multiple inputs entered in a loop.
// output: highest value number entered
// catch: cannot use array
main ()
{
int a,b,c,d,e,f,g,h,j,z;
clrscr();
e = 0;
z = 0;

while (e<1)
{
z = z+1;
if (z==1)
{
printf("Enter number here:");
scanf("%d",&a);
printf("Do you wish to continue. Press 1 for Yes and 2 for NO");
scanf("%d",&h);
}

if (h==1)
{
printf("Enter number here:");
scanf("%d",&f);
printf("Do you wish to continue. Press 1 for Yes and 2 for NO");
scanf("%d",&c);

if (f>a)
a = f;

if (c==2)
{
printf("%d",a);
e =e+1;
break;
}
}

if (h==2)
{
if (a>f)
printf("%d",a);
else
printf("%d",f);
e = e+1;
break;
}
}

 getch();
}