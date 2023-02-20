# include <stdio.h>
# include <conio.h>
// creating code for a bank account wherein you can: 
// 1. deposit money. 2. withdraw money. 3. check balance. 4. exit. 
int bal;
int deposit(int b)
{
int dep;
printf("Enter amount to deposit");
scanf("%d",&dep);
bal = b+dep;
printf("Final balance: ");
return bal;
}
//****************************************************
withdraw(int b)
{
int wd,z,y,a,b,c,d;
float x;

z = 0;


while (z<2)
{
printf("Enter amount to withdraw:");
scanf("%d",&wd);

if (b-wd>=500)
{
bal = b-wd;
printf("Final balance %d",bal);
z = z+1;
}

if (wd>b)
{
printf("Error. %d amount cannot be withdrawed.\n Do you wish to continue? press 1 for yes 2 for no.\n",wd);
scanf("%d",&y);
}

if(b-wd<500 & wd<b)
{
b = bal-500;
c = -(b-wd);
printf("Bank must maintain a minimum amount of 500. bank must charge a penalty of 2 percentage on %d \n",c);
x = float(0.02*c);
printf("fine %f \n",x);
printf("do you wish to continue. press 1 for yes 2 for no\n");
scanf("%d",&a);
if (a==1)
{
bal = b-wd;
printf("Amount withdrawn: %d \n",wd);
printf("bal: %d \n",bal);
printf("fine: %f \n",x);
z =z+1;
}



if (y==2)
{
z = z+2;
}
}


printf("\nDo you wish to withdraw more money?\npress 1 for yes 2 for no.:\n");
scanf("%d",&d);
if (d==2)
{
z = z+1;
}
}

}
//***********************************************************
int check_bal(int bal)
{
return bal;
}

main ()
{
clrscr();
int x,ac,pin,d,e,a[20],b[20],c[20],n,i,p,q,l,k,a1,a2;

l = 0;
while (l<1)
{

//*************
a[1] = 1234;
a[2] = 5678;
a[3] = 1357;
a[4] = 9876;

b[1] = 1212;
b[2] = 3434;
b[3] = 5656;
b[4] = 9898;

c[1] = 1300;
c[2] = 2010;
c[3] = 3040;
c[4] = 4500;
//*************

printf("Welcome\n");

p = 0;
while (p<1)
{
printf("Enter account number here:");
scanf("%d",&ac);

for (i=1;i<=4;i++)
{
if (a[i] == ac)
{
e = i;
p = p+1;
}
}

if (p==0)
{
printf("Do you wish to continue. press 1 for yes 2 for no: ");
scanf("%d",&q);
if (q==2)
{
break;
}
}


}


if (p==1)
{
while (p<2)
{
printf("Enter pin:");
scanf("%d",&pin);

if (b[e] == pin)
{
p = p+1;
}

if (p==1)
{
printf("Do you wish to continue. press 1 for yes 2 for no");
scanf("%d",&q);
if (q==2)
{
break;
}

}

}
}

if (p==2)
{

//*************
e = 0;
for (i=1;i<=4;i++)
{
if (a[i] == ac)
{
e = i;
if (b[e] == pin)
{
bal = c[e];
printf("\nBalance: %d \n",bal);
}
}
}

//**************

printf("What service do you want to use?:\n1. Deposit money. \n2. Withdraw amount.\n3. Check balance.\n4. Logout\n5. Exit.\n");
scanf("%d",&n);

if (n==1)
{
x = deposit(bal);
printf("%d",x);
}

if (n==2)
{
withdraw(bal);
}

if (n==3)
{
x = check_bal(bal);
printf("%d",x);
}

if (n==4)
{
continue;
}

if (n==5)
{
l = l+1;
break;
}


}
printf("\n1.Main Menu\n2.Exit\n");
scanf("%d",&a1);

a2 = 0;
while (a2<1)
{

if (a1==1)
{
printf("What service do you want to use?:\n1. Deposit money. \n2. Withdraw amount.\n3. Check balance.\n4. Logout\n5. Exit.\n");
scanf("%d",&n);

if (n==1)
{
x = deposit(bal);
printf("%d",x);
}

if (n==2)
{
withdraw(bal);
}

if (n==3)
{
x = check_bal(bal);
printf("%d",x);
}

if (n==4)
{
continue;
}

if (n==5)
{
l = l+1;
break;
}

}

if (a1==2)
{
l = l+1;
a2 = a2+1;
}
}

}
getch();
}
