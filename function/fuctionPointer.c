#include<stdio.h>


int add(int x,int y,int z){
    return x+y+z;
}
int main(){
    int res;
    int (*p)(int,int,int)=add;
    res=p(9,10,12);
    printf("Result of function: %d\n",res);
}