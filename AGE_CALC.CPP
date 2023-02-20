# include <stdio.h>
# include <conio.h>
// Age Calculator. 
void main ()
{
int a,sum_p,sum_b,b,c,d,e,f,sum,mnn,yr,mn,dy;
clrscr();
printf("Enter Present year");
scanf("%d",&a);
printf("Enter Present month");
scanf("%d",&b);
printf("Enter Present day");
scanf("%d",&c);

printf("Enter Birth year");
scanf("%d",&d);
printf("Enter Birth month");
scanf("%d",&e);
printf("Enter Birth day");
scanf("%d",&f);

a = a*360;
b = b*30;
c = c;
sum_p = a + b + c;
d = d*360;
e = b*30;
f = f;
sum_b = d + e+ f;

sum = sum_p - sum_b;

yr = sum/365;
mnn = sum - (yr*365);
mn = mnn/30;
dy = mnn - mn*30;


printf("%d \n%d",a,d);
//printf("%d",a);
//printf("%d", dy)cccccb;
getch();
}
