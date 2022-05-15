#include<stdio.h>
#include<stdlib.h>

//for using fgetc, fgets. Only take "r" as second argument of fopen
//Neither of "r+","w","w+","a","a+" will work.
int main(){
    FILE *f=fopen("text.txt","r");
    fprintf(f,"Hello world");
    // int i=fget(f);
    // char c =fgetc(f);
    // printf("The charater i read is %c\n",c);
    // c =fgetc(f);
    // printf("The charater i read is %c\n",c);
    char str[2];
    fgets(str,6,f);
    printf("String extracted from text file is %s",str);
    fclose(f);
    return 0;
}