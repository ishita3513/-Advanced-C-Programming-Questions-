#include<stdio.h>

//static
//declared outside the block and these variable retains the values 
//throughout the program and inside the block also


static int i;
int func(){
    printf("%d\n",i++);
}

int main(){
    
   func();
   func();
   func();
   func();

}