#include<stdio.h>
//register is one of the fastest device unit.
//small storage memory 
//Stored in cpu registers.
//They allow faster access time .
//Compare to normal variable



int main(){
    register int i;
    for(int i=0;i<10;i++){
        printf("%d\n",i);
    }
}