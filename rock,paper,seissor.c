#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void score(int n, int p1, int p2,int* point_p1,int* point_p2, char* name)
{
    if(p1 == 1 && p2 == 2 || p1 == 2 && p2 == 3 || p1 == 3 && p2 == 1)
        {*point_p2=*point_p2+1;}
    
    else if(p1 == 1 && p2 == 3 || p1 == 2 && p2 == 1 || p1 == 3 && p2 == 2)
        {*point_p1=*point_p1+1;}

    printf("Score:  %s   Computer\n",name);
    printf("           %d    -    %d  \n",*point_p1,*point_p2);

    if(*point_p1 == n){
        printf("~~Congratulation~~\n");
        printf(" ~WINNER : %s~",name);
    }
    
    else if(*point_p2 == n){
        printf("~~ Congratulation ~~\n");
        printf(" ~WINNER : Computer~");
    }
}

int main()
{
    int n, p1, p2, point_p1 = 0 , point_p2 = 0;
    char name[30];

    printf("Enter Your Name: ");
    gets(name);

    printf("Enter The Number Of Rounds: ");
    scanf("%d",&n);

    while(point_p1 < n && point_p2 < n){
    printf( "Enter 1 for Rock, 2 for Paper, 3 for Seisor \n" );
    
    do{
    printf("%s : ",name);
    scanf("%d",&p1);
    }while(p1 < 1 || p1 > 3);

    srand(time(NULL));
    p2 = rand()%3+1;
    printf("Computer : %d\n",p2);

    printf("\n");

    if(p1 == 1){printf("%s : Rock  ",name);}
    else if(p1 == 2){printf("%s : Paper  ",name);}
    else if(p1 == 3){printf("%s : Scissors  ",name);}
    
    if(p2 == 1){printf("Computer : Rock\n");}
    else if(p2 == 2){printf("Computer : Paper\n");}
    else if(p2 == 3){printf("Computer : Scissors\n");}

    printf("\n");
    score(n, p1, p2, &point_p1, &point_p2, name);
    }
 
 return 0;
}