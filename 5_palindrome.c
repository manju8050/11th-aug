#include<stdio.h>
#include<string.h>
void to_check(char str[])
{
    char str1[10];
    strcpy(str1,str);
    strrev(str1);
    printf("after reversing %s\n",str1);

    int res = strcmp(str1,str);
    if(res==0)
    {
        printf("string is palindrome");
    }
    else{
        printf("string is not a palindrome");
    }
}
int main()
{
    char str[10];
    
    printf("enter a string\n");
    scanf("%s",str);
    to_check(str);
    
    


}

//
wow
after reversing wow
string is palindrome
