#include<stdio.h>
void to_copy(int arr1[])
{
    int arr2[5];
    
    for(int i=0;i<5;i++)
    {
        arr2[i]=arr1[i];
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr2[i]);
    }

}
int main()
{
    int arr1[5]={1,2,3,4,5};
    
    to_copy(arr1);

    return 0;
}

//1       2       3       4       5