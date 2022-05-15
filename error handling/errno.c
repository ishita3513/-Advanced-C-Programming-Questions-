#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>


int main(){
    FILE *f;
    f=fopen("tt.txt","w");
    // fprintf(stderr,"Value of errno :%d\n",errno);
    // perror("Error message that is printed by perror:");
    if(f==NULL){
        fprintf(stderr,"Value of errno :%d\n",errno);
        printf("Value of errno :%d\n",errno);
        perror("Error message that is printed by perror:");
        fprintf(stderr,"Error message for opening file that does not exist:%s\n",strerror(errno));
        exit(EXIT_FAILURE);
    }
    else{
        char ch;
        
        while(!feof(f)){
            ch=fgetc(f);
            printf("%c",ch);
        }
        fprintf(f,"This is the world");
        printf("File pointer is at %d\n",ftell(f));
        printf("File pointer is at %d\n and the %d character is %c \n",ftell(f),ftell(f),fgetc(f));
        printf("File pointer is at %d\n",ftell(f));
        printf("File pointer is at %d\n",ftell(f));
        
        fclose(f);
        
        exit(EXIT_SUCCESS);
        printf("This line will be printed");
        
        
    }
   
    return 0;
}