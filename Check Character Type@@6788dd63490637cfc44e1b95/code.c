#include <stdio.h>


int main() {
    char ch;
    scanf("%c",&ch);

    if(isdigit(ch)){
        printf("Digit\n");
    }
    
    else if(isalpha(ch)){
        char low = tolower(ch);
    
    
     if(low=='a'||low == 'e' || low == 'i' || low == 'o' || low == 'u'){
        printf("Vowel");


        
    }
    else{
        printf("Consonant");
    }
    }
    else {
        printf("Special Character");
    }
    return 0;
}