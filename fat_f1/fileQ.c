#include<stdio.h>
#include<ctype.h>
//ctype heder is required for toupper(),tolower()
//isupper(),islower,isdigit(),isalphanumeric(),isdate()
int main(){
    FILE *f;
    f=fopen("text.txt","r");
    fprintf(f,"Hello Madam how are you and\n how is your study going on");
    while(!feof(f)){
        char c=fgetc(f);
        if(c==' '){
            printf("%c",c);
            c=fgetc(f);
            printf("%c",toupper(c));
        }
        else{
            printf("%c",c);
        }
        
    }
}