# include <stdio.h>
# include <conio.h>
// fibonacci sequence
main()
{
int h=2,a,b=1,c=0,x=1,d;
//clrscr();
scanf("%d",&a);
while (b<a)
{
d = c+x;
x= c;
c = d;
b++;
}
printf("%d\n%d\n",d,x);
while (h<a)
{
c = d-x;
printf("%d\n",c);
d = x;
x = c;
h++;
}
getch();
}
