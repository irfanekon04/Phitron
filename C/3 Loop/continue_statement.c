#include<stdio.h>

int main(){
    int i;
    for(i=1;i<=20;i++){
        if(i==13){
            continue;
        }
        printf("%d - Even\n",i);
        // else{
        //     printf("%d - Odd\n",i);
        // }
    }
    return 0;
}