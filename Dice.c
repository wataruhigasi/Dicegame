#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int s,i,sum;

    srand((unsigned)time(NULL)); 

    for(i=1; i<=2; i=i+1)
    {
        s = (rand()%6) + 1;
        printf("Die %d:%d\n",i,s);
        sum+=s;
    } 
    printf("Total value%d\n",sum);
    if(sum>7){
        printf("You won\n");
    }else{
        printf("You lost\n");
    }   
    return(0);
}
