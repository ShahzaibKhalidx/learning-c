#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*int main(){
    char myString[] = "Hello World";
    printf("%s\n", myString);
}*/

int main(){
    char userName[30];
    printf("What do I call you!\n");
    scanf("%s", userName);
    printf("Welcome %s! Have a good day\n", userName);
}
