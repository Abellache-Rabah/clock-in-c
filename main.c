#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main(){
    int h,m,s;

    printf("set a timmer \n");
    printf("hours : ");
    scanf("%d",&h);
    sleep(1);
    printf("minutes : ");
    scanf("%d",&m);
    sleep(1);
    printf("seconds : ");
    scanf("%d",&s);
    if(h>12 || m >60 || s>100 || s < 0 || m < 0 || h < 0){
        printf("ERROR!");
        exit(0);
    }
    sleep(1);
    while(1 == 1){
        //printf("hello");
        printf("\r%d : %d : %d",h,m,s);
        s--;
        if(s == 0){
            m--;
            s=100;
        }
        if(m ==0){
            h--;
            m=59;
        }
        if(h == 0){
            exit(0);
        }

    
        sleep(1.0000000001);
       fflush(stdout); 
    }

}
