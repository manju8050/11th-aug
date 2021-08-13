#include<stdio.h>
#define m 
int get()
{   int n;
    printf("enter the nth position number value\n");
    scanf("%d",&n);
    return n;
}
void insert(int arr[],int n,int ele)
{
    for(int i=6;i>=n;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[n-1]=ele;

    printf("after insertion\n");
    for (int i = 0; i < 7; i++)
        printf("%d ", arr[i]);

}
void delete(int arr[],int n)
{
    for(int i=n-1; i<7 ;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("\nafter insertion\n");
    for (int i = 0; i < 6; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int n,ele;
    n=get();
    
    int arr1[7]={1,2,3,4,5,6};

    printf("enter the element\n");
    scanf("%d",&ele);

    insert(arr1,n,ele);

    delete(arr1,n);
    return 0;
}

//
enter the nth position number value
3
enter the element
9999
after insertion
1 2 9999 3 4 5 6
after insertion
1 2 3 4 5 6
