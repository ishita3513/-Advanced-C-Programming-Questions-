#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i;
    printf("Enter the length of array:");
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory not allocated properly");
    }
    
    else{
        for(i=0;i<n;i++){
            scanf("%d ",(ptr+i));
        }
        printf("%d\n",*ptr);
        for(i=0;i<n;i++){
            printf("%d ",*ptr+i);
        }
    }
}