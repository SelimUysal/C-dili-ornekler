

#include <stdio.h>
int fun(int *);
int x=10, y;
int main(){
    int z=12;
    y=3;
    while(x<z)
    {

        z=fun(&y);
        x*=3;
        printf("x=%d y=%d z=%d\n",x,y,z);
    }
    return 0;   }
int fun(int *t){
    int w=5;
    *t=w++;
    printf("t=%d w=%d\n", *t, w++);
    return(w);
}