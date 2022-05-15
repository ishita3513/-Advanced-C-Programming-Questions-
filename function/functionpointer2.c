#include<stdio.h>
#include<math.h>
int func1(int x,int y){
    return 2*x+y;
}
int func2(int x,int y){
    return 2*(x+y);
}
int func3(int x,int y){
    return pow(x,y);
}
int main(){
    int a=3,b=2;
    //function pointer can take fuction as argument
    int (*p)(int,int)=func3;
    int res=p(func1(a,b),func2(a,b));
    printf("Result:%d",res);
}