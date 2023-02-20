# include <stdio.h>
# include <conio.h>

// program to convert a 4 digit numeric integer into written form.
main ()
{

int a,b,c,d,h,t,o,th,z,p;
//clrscr();

printf("Enter a four digit number");
scanf("%d",&a);

th = a/1000;
h = (a - th*(1000))/100;
t = (a-(th*1000+h*100))/10;
o = (a - (th*1000+h*100+t*10));


if (th>=1)
{
if (th==1)
printf(" one ");

if (th==2)
printf(" two ");

if (th==3)
printf(" three ");

if (th==4)
printf(" four ");

if (th==5)
printf(" five ");

if (th==6)
printf(" six ");

if (th==7)
printf(" seven ");

if (th==8)
printf(" eight ");

if (th==9)
printf(" nine ");
printf(" thousand ");
}


if (h>=1)
{
if (h==1)
printf(" one ");

if (h==2)
printf(" two ");

if (h==3)
printf(" three ");

if (h==4)
printf(" four ");

if (h==5)
printf(" five ");

if (h==6)
printf(" six ");

if (h==7)
printf(" seven ");

if (h==8)
printf(" eight ");

if (th==9)
printf(" nine ");
printf(" hundred ");
}
//*****
for (c=1;c<2;c++)
{
if (t==1)
{
z = t*10+o;

if (z==11)
{
printf(" eleven ");
break;
}

if (z==12)
{
printf(" twelve ");
break;
}

if (z==13)
{
printf(" thirteen ");
break;
}

if (z==14)
{
printf(" fourteen ");
break;
}
if (z==15)
{
printf(" fifteen ");
break;
}

if (z==16)
{
printf(" sixteen ");
break;
}

if (z==17)
{
printf(" seventeen ");
break;
}


if (z==18)
{
printf(" eighteen ");
break;
}

if (z==19)
{
printf(" ninteen ");
break;
}

}

//*******
if (t>=2)
{

if (t==2)
printf(" twenty ");

if (t==3)
printf(" thirty ");

if (t==4)
printf(" fourty ");

if (t==5)
printf(" fifty ");

if (t==6)
printf(" sixty ");

if (t==7)
printf(" seventy ");

if (t==8)
printf(" eighty ");

if (t==9)
printf(" ninety ");
}

//*****
if (o>=1)
{
if (o==1)
printf(" one ");

if (o==2)
printf(" two ");

if (o==3)
printf(" three ");

if (o==4)
printf(" four ");

if (o==5)
printf(" five ");

if (o==6)
printf(" six ");

if (o==7)
printf(" seven ");

if (o==8)
printf(" eight ");

if (o==9)
printf(" nine ");
}
}

getch();
}
