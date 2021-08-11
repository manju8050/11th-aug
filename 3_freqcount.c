#include<stdio.h>
void freq(int arr[],int f[],int n)
{
    int i,j,ctr;
    for(i=0;i<n;i++)
    {
        ctr = 1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                ctr++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=ctr;

        }
    }
    for(i=0;i<n;i++)
    {
        if(f[i]!=0)
        {
            printf("%d occurs %d times\n",arr[i],f[i]);
        }
    }

}
void main()
{
    int arr[10],f[10];
    int n,i;

    printf("enter the number\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        f[i]=-1;
    }
    freq(arr,f,n);
    
}

//
enter the number
5
Enter the elements
10
20
10
20
30
10 occurs 2 times
20 occurs 2 times
30 occurs 1 times