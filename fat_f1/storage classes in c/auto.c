#include<stdio.h>

//Auto in defiend under the block only. If subblock is present 
//and a variable has been declared inside that then the value
// will be taken from that subblock ,else if subblock is not 
//present then whatever has been declared in block will be taken.
int main(){
    auto int i=0;
    {
        auto int i=2;
        {
            auto int j=3;
            printf("%d\n",i);
        }
        printf("%d\n",i);
    }
    printf("%d\n",i);
}