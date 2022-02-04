#include<stdio.h>
int find();
int finds();
int a[20],n,i,a1,a2,p,q;
void main()
{
printf("enter the limit of the array");
scanf("%d",&n);
for(i=1;i<n;i++)
{
a[i]=0;
}
printf("enter the first element to perform union operation");
scanf("%d",&a1);
printf("enter the second element to perform union operation");
scanf("%d",&a2);
p=find(a1);
q=finds(a2);
if(p!=q)
{
    a[a2]=a1;
    printf("union operation of is performed");
}
else
{
    printf("cannot perform");
}
printf("\narray elements are");
for(i=1;i<n;i++)
{
printf("%d",a[i]);
}
}
int find(a1)
{
if(a[a1]==0)
    return a1;
else
{
    find(a[a1]);
    return;
}
}
int finds(a2)
{
if(a[a2]==0)
    return a2;
else
{
    find(a[a2]);
    return;
}
}
