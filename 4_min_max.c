#include<stdio.h>
int main()
{
    int arr[5]={10,12,15,19,20};
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            

        }
        
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n minimum is %d",arr[0]);
    printf("\n maximum is %d",arr[5-1]);
}

//10      12      15      19      20
 minimum is 10
 maximum is 20

 best case time complexity 	Ω(n)
 wrost case time complexity o(n2)