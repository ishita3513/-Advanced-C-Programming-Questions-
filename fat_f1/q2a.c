#include<stdio.h>
void test(int* p, int* q){
    *p=*p * *q;
    *q=*p / *q;
    *p=*p / *q;
}
int main(){
    int a=5,b=6;
    test(&a,&b);
    printf("%d %d",a,b);

}