#include<stdio.h>
#include<string.h>

void main()
{
    char str[] = "banga";
    char str1[] = "lore";
    printf("length of string before con %d\n",strlen(str));
    strcat(str,str1);
     

    printf("concatenated string is : %s\n",str);

    printf("length of string after con %d\n",strlen(str)) ;
 
}

//length of string before con 5
concatenated string is : bangalore
length of string after con 9
