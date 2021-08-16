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
    
    
    
    
    
 
    
    
    
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[10]="banga";
    char str2[10]="lore";
    char str3[20];

    int i=0,j=0,k;
    while(str1[i]!='\0')//traversing the string untill null character encounter
    {
        str3[j]=str1[i];
        i++;
        j++;

    }
    i=0;
    while(str2[i]!='\0')//coping source string into destination string till null character encounter
    {
        str3[j]=str2[i];
        i++;
        j++;

    }
    str3[j]='\0';

    printf("concatenated string is :%s \n",str3);

    printf("%ld\n",sizeof(str3));

    printf("length :%d\n",strlen(str3));


    for(k=0;str3[k]!='\0';k++);
    printf("lenth of a string is %d\n",k); 

}

//
concatenated string is :bangalore 
20
length :9
lenth of a string is 9
