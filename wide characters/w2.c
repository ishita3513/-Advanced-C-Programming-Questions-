//functions in wchar.h header file

#include<stdio.h>
#include<wchar.h>


int main(){
    wchar_t s1[100]=L"Hello World How are you";
    wchar_t s2[100]=L" Oppo";
    //string concatanation : s2 will be appended to s1, s1 will change.
    wprintf(L"s1+ s2(concatanation): %ls\n",wcscat(s1,s2));
    wprintf(L"s1: %ls\n",s1);// result: Hello World How are you Oppo
    wprintf(L"s2: %ls\n",s2);// result:  Oppo

    //search the wide string  the wide character and 
    //takes value from found character to the length of the string
    wprintf(L"Searching for character in wide character s1: %ls\n",wcschr(s1,'p'));// result: ppo


    //copy the s2 in s1
    wchar_t s3[100]=L"";
    wprintf(L"S3 copied s2: %ls\n",wcscpy(s3,s2));
    //replace n character from beginning by copy of s2 till n numbers, 
    //if the lenth of s2 is less than n, then only s2 will be remaining in s1.
    wprintf(L"S1 copied s2: %ls\n",wcsncpy(s1,s2,5));

    //compares s1 and s2
    //if s1<s2 : -1
    //if s1=s2 : 0
    //if s1>s2 :1
    printf("Comparison s1 and s2: %d\n",wcscmp(s1,s2));

    //search for first n elements in s1 matching with s2
    printf("No. of first continuos matches from s2 and s2 : %d\n",wcscspn(s1,s2)); 

    //length of wide character
    printf("Length of s1 :%d\n",wcslen(s1));

}