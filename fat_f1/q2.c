#include<stdio.h>

int main(){
    int i=4,j=-1,k=0,w,x,z;
    w=i&&j&&k;
    x=i &&j || k;
    z=i ||j;
    printf("%d  %d  %d",w,x,z);
    return 0;
}