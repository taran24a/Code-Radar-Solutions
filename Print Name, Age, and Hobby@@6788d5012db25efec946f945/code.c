#include <stdio.h>


int main() {
    char st[15];
    scanf("%s",&st);
    int age;
    scanf("%d",&age);
    char s[20];
    scanf("%s",&s);

    printf("Name: %s\n",st);
    printf("Age: %d\n",age);
    printf("Hobby: %s",s);
    return 0;
}