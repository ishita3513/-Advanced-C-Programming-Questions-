#include <stdio.h>
extern int i=9;
//extern cannot be declared inside the block,
//while static can be declared anywhere and can be access from anywhere
int func(){
    printf("%d\n",i++);
}
int main()
{
    
    printf("%d\n", i);
    i = 9;
    printf("%d\n", i);
    func();
    func();
    func();
    func();
}