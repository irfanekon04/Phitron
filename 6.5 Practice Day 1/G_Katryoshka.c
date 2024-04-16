#include<stdio.h>
int main()
{
    long long int eyes,mouths,bodies,katryoshka,total;
    total=0;
    scanf("%lld %lld %lld",&eyes,&mouths,&bodies);
    if(eyes<mouths && eyes<bodies){
        katryoshka=eyes;    
    }
    else if(mouths<eyes && mouths<bodies){
        katryoshka=mouths;
    }else{
        katryoshka=bodies;    
    }
    total+=katryoshka;
    eyes-=katryoshka;
    mouths-=katryoshka;
    bodies-=katryoshka;
    if (eyes/2<bodies){
        total+=eyes/2;
    }
    else{
        total+=bodies;
    }
    printf("%lld",total);
    return 0;
}
