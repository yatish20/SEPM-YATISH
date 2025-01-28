+
#include <stdio.h>
void select(int x[],int n);
void main()
{
    int x[50],n,i;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    select(x,n);
    printf("sorted array :\n");
    for(i=0;i<n;i++)
        printf("%d ",x[i]);

}
void select(int x[],int n)
{
    int i,j,max,index;

    for(i=n-1;i>0;i--)
    {
        max=x[0];index=0;
        for(j=1;j<=i;j++)
            if(x[j]>max)
        {
            max=x[j];
            index=j;
        }
        x[index]=x[i];
        x[i]=max;
    }

}
