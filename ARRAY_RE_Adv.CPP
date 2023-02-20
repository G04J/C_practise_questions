# include <stdio.h>
# include <conio.h>
// Removing element(s) from array. 

void main()
{
int x[20],a[20],e,b,g,c,d,n,i,f,p,y,z;
clrscr();
printf("Enter length of array here:");
scanf("%d",&b);

printf("Enter numbers for array");
for (i=1;i<b+1;i++)
scanf("%d",&a[i]);

printf("Enter number to remove");
scanf("%d",&d);

//******************************************* e

//******************************************* x[]
g =0;
for (i=1;i<b+1;i++)
{
if (a[i] == d)
{
g = g+1;
x[g] = i;
}
}

//**** for all elements ****************************************
printf("Do you wish to remove all the elements of %d (Press 1 for yes and 0 for no)?",d);
scanf("%d",&p);
f = 0;
if (p== 1)
{
while (f<g)
{
for (i=1;i<b+1;i++)
{
if (a[i] == d)
{
e = i;
}
}
f = f+1;
for (i=e;i<b+1;i++)
{
a[i] = a[i+1];
}
}
for (i=1;i<b-f+1;i++)
printf("%d,",a[i]);
}
//*************** for particular element.********************
f = 0;
y = g;
if (p==0)
{
while (f<g+1)
{
	printf("\n Chose the index number you want to delete:\n ");
	for (c=1;c<g+1;c++)
	{
	printf("%d,",x[c]);
	}

	printf("\n number: ");
	scanf("%d",&n);

	for (c=1;c<y+1;c++)
	{
	if (x[c] == n)
	{
	for (i=n;i<b+1;i++)
	{
	a[i] = a[i+1];
	}
	}

	}
	f = f+1;
	for (i=1;i<b-f+1;i++)
	printf("%d,",a[i]);


	printf("\n do you wish to continue (press 1 for yes and 0 for no)");
	scanf("%d",&z);


	for (c=1;c<g+1;c++)
	{
	if (x[c] == n)
	{

	for (i=c;i<g+1;i++)
	{
	x[i] = x[i+1];
	x[i] = x[i] -1;
	}
	g = g-1;
	}
	}
	if (z==0)
	{
	break;
	}


}
}


/*
for (i=e;i<b+1;i++)
{
a[i] = a[i+1];
}
*/

//for (i=1;i<f+1;i++)
//printf("%d,",x[i]);

//printf("\n");


getch();
}
