#include <stdio.h>
#include <stdbool.h>

/*int main(){
    int myNums[] = {3, -4, 1, 6, 2, -9, 0, 0};
    //printf("%ld\n", sizeof(myNums[0]));
    int length = sizeof(myNums)/sizeof(myNums[0]);
    printf("length %d\n", length);
    int i;
    for(i = 0; i < length; i++){

        if (myNums[i] < 0){
            continue;
        }
        if (myNums[i] == 0){
            break;
        }
        printf("%d\n", myNums[i]);
    }
}*/

/*int main(){
    //2D arrays
    int matrix[2][3] = {{1,4,3},{3,5,1}};
    printf("%d\n", matrix[0][2]);
}*/

int main(){
    char firstName[30];

    printf("What is the first name...\n");
    scanf("%s", firstName);

    printf("Welcome, %s\n", firstName);
}
