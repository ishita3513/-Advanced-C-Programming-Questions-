#include<stdio.h>
#include<wchar.h>
//ASCII : 8 bit data type
//ASCII allows just few characters about


//Example of ASCII : %$#@$%&*ERTYGHfgaghjhkjs+?><~`

//Example of wide character:  
//%$#@$%&*ERTYGHfgaghjhkjs+?><~`
// Braill ⣦	⣧	⣨	⣩	⣪	⣫
//Arrows ⇦	⇧	⇨	⇩	⇪	
//Greek ↀ	ↁ	ↂ	Ↄ	ↄ	ↅ	ↆ	ↇ
//Greek ϒ	ϓ	ϔ	ϕ	ϖ	
//Math symbols ∫	∬	∭	∮	∯ ∰	∱	∲	∳

//Wide charater : 16bit or 32 bits
//Width of wchar_t is compiler specific and can be as small as 8 bit.
//So, the programs need to be transfer and used in different devices,
//should not be declared with wchar_t.
//While wchar allows amy characters like not only english alphabet 
//and digits and special characcters but different language sysmbols too.
//Like japanese,chineze etc.
//wide character in c allows 

int main(){
    wchar_t s[100]=L"&";
    wprintf(L"%ls",s);
    int n;
    printf("\nEnter the size of wide character :");
    scanf("%d",&n);

    wchar_t s1[n];
    //reading values from user
    wscanf(L"%ls",s1);
    //printing wide characters from user.
    wprintf(L"\nThis is your wide character :  %ls",s1);
    
}