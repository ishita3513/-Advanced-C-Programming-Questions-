#include<stdio.h>
#include<stdlib.h>


typedef struct employee{
    int id;
    char name[5];
}emp;
int main(){
    int n,i;
    FILE *f;
    f=fopen("text.txt","r+");
    printf("Enter the number:");
    scanf("%d",&n);
    emp *e=(emp*)malloc(n*sizeof(e));
    if(e==NULL){
        printf("memory not allocated");
    }
    else{
        printf("Enter the details:\n");
        for(i=0;i<n;i++){
            printf("Enter the id:");
            scanf("%d",&(e+i)->id);
            printf("enter the name:");
            scanf("%s",&(e+i)->name);
        }
        for(i=0;i<n;i++){
            printf("%d ",(e+i)->id);
            printf("%s ",(e+i)->name);
            printf("\n");
        }
        for(i=0;i<n;i++){
            fprintf(f,"id: %d \n",(e+i)->id);
            fprintf(f,"Name: %s\n",(e+i)->name);
        }

    }
}