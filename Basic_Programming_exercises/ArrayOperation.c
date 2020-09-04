#include stdio.h
#include conio.h

int a[100];
int n;

void insert(int,int);
void del(int);
void display();

void main()
{
int i,ch,x,pos;
clrscr();
printf(“Enter Size of Array: “);
scanf(“%d”,&n);
printf(“Enter %d Elements: “,n);
for(i=0;in)
{
printf(“\nPosition Not Valid!!\n”);
}
else
{
insert(x,pos-1);
}
break;
}
case 2:
{
printf(“\nEnter The Element: “);
scanf(“%d”,&x);
del(x);
break;
}
case 3:
{
display();
break;
}
case 4:
{
exit();
}
default:
{
printf(“\nInvalid Choice!!”);
}
}
}
}

void insert(int x,int p)
{
int i;
for(i=n;i>=p;i–)
{
a[i+1]=a[i];
}
a[p]=x;
n=n+1;
printf(“\nArray Elements Updated.\n”);
}

void del(int x)
{
int i,f;
for(i=0;i
{
if(a[i]==x)
{
for(;i
{
a[i]=a[i+1];
}
a[n-1]=0;
n=n-1;
f=1;
break;
}
}
if(f==1)
{
printf(“\nElement Deleted.\n”);
}
else
{
printf(“\nElement Not Found.\n”);
}
}
void display()
{
int i;
if(n==0)
{
printf(“\nArray List is Empty.\n”);
return;
}
printf(“\nThe Elements Are:\n”);
for(i=0;i
{
printf(“%d\t”,a[i]);
}
printf(“\n”);
}
