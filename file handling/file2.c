#include<stdio.h>
#include<stdlib.h>

struct emp{
    int id;
    char name[10];
};
int main(){
    FILE *f=fopen("EmpData.txt","w+");
    int n,i;
    printf("Number of employee:");
    scanf("%d",&n);
    struct emp e[n];
    for(i=0;i<n;i++){
        printf("Id of emp[%d]:",i+1);
        scanf("%d",&e[i].id);
        printf("Name of emp[%d]:",i+1);
        scanf("%s",e[i].name);
    }
    for(i=0;i<n;i++){
        fprintf(f,"Id of emp[%d]:%d",i+1,e[i].id);
        fprintf(f,"\n");
        fprintf(f,"Name of emp: %s",e[i].name);
        fprintf(f,"\n");
    }
}