# include<stdio.h>
# include<conio.h>
// no of leap year from your birth.
main ()
{
int var,age,present_year,bdy,leap_yr;
//clrscr();
present_year = 2022;
printf("Enter your age here:");
scanf("%d",&age);
var = 0;
leap_yr=0;
while (var < age)
{
var = var + 1;
present_year = present_year-1;
if(present_year%4 == 0)
{
leap_yr = leap_yr+1;
}
}
bdy = present_year;
printf("birth year: %d \nno of leap year: %d",bdy,leap_yr);
getch();
}
