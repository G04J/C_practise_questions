# include <stdio.h>
# include <conio.h>
// input 1: number of whose table we want
// input 2: set number after which we change the table to it's next int. 
main()
{
int a,b,d,temp,c,temp1,temp2;
//clrscr();
printf("Enter table number here: ");
scanf("%d",&a);
printf("Enter set no here: ");
scanf("%d",&b);
d = 0;
c = 0;
temp = 0;
while (temp <10)
{
temp1 = b;
temp2 = b;
temp = temp+b;
d = d+1;

if (d%2==0)
{
while (temp2 !=0)
{
if (c != 10)
{
c = c+1;
temp2 = temp2 -1;
printf("%d X %d = %d \n",(a+1),c,c*(a+1));
}
else
{
break;
}
}
}
else
{
while (temp1 !=0)
{
if(c!=10)
{
c = c+1;
temp1 = temp1 -1;
printf("%d X %d = %d \n",(a),c,c*(a));
}
else
{
break;
}
}
}




}

getch();
}
