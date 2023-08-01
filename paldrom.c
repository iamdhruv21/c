#include<stdio.h>

int main()
{
    int num, re_num = 0, new;
    printf("Enter a number: ");
    scanf("%d",&num);

    new = num;

    while(new > 0){
        re_num = (re_num * 10) + new % 10;
        new /= 10;
    }
    
    if( num == re_num){
        printf(" Paldrom ");
    }
    else{
        printf(" Not Paldrom ");
    }
 
 return 0;
}