#include <stdio.h>
#include <stdbool.h>

//check age and citizen
int main(){
    int age = 50;
    bool isCitizen = false;

    if (age > 18){
        if(isCitizen){
            printf("Go on and vote!\n");
        }
        else{
            printf("Your are not a citizen\n");
        }
    }
    else{
        printf("Not old enough!\n");
    }
}

int main(){
    int countdown = 3;
    while( countdown > 0){
        printf("countdown, %d\n", countdown);
        countdown--;
    }
    printf("Happy new year!\n");
}

int main(){
    int i = 10;
    do {
        printf("%d\n", i);
        i++;
    }
    while(i < 5);
}

int main(){
    int dice = 1;

    while(dice <= 6){
        if (dice < 6){
            printf("Not a SIX!\n");
        }
        else{
            printf("ITs a SIX\n");
        }
    }
    dice++;
}

int main(){
    //sum of first 4 numbers
    int sum = 0;
    int i;
    for (i=1; i <= 4; i++){
        sum += i;
    }
    printf("Sum of 1-10 is : ... %d\n", sum);
}

//nested loops
int main(){
    int i;
    int j;

    for (i=1; i<= 3; i++){
        printf("outer %d\n", i);
        for (j=1; j<=3; j++){
            printf("inner %d\n", j);
        }
    }
}


//multiplication table

int main(){
    int i;
    int j;

    for (i=1; i<= 3; i++){
        for (j=1; j<=10; j++){
            printf("%d X %d = %d\n", i,j,i*j);
        }
        printf("\n");
    }
}

