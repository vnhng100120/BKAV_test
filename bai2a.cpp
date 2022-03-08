#include<stdio.h>
#include<conio.h>
 
void xoaTatCaSoLe(int a[],int *n,int vt)
{
    int i;
    for(i=vt;i<*n-1;i++)
    {
        a[i]=a[i+1];
    }
    (*n)--;
 
}
 
int main()
{
    int a[]={1,6,4,9,2,11,8,7,15};
    int n,i;
    n=sizeof(a)/sizeof(int);
    for(i=0;i<n;i++)
    if((a[i]%2)!=0)
    {
        xoaTatCaSoLe(a,&n,i);
        i--;
    }
    for(i=0;i<n;i++)
    printf("%3d",a[i]);
    getch();
    return 0;
}
