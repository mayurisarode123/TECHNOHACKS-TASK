#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int n;
    int g;
    int ng=1;
    srand(time(0)); 
    n=rand()%100+1;
    printf("Number guessing game in c \n");
    while(g!=n)
       {
        printf("Enter guess the no between 1 to 100\n");
        scanf("%d",&g);
        if(g>n)
        {
            printf("lower no\n");
    
        }
        else if(g<n)
        {
            printf("higher no\n");
        }
        else
        {
            printf("you guess correct no it in %d attempsts\n",ng);
        }   
        ng++;   
        }  
}
