#include <stdio.h>

int main(){
    
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);

    switch(num){
    case 0:
    printf("You have entered 0. Thank-you!");
    break;
    case 1:
    printf("You have entered 1. Thank-you!");
    break;
    default:
    printf("You have entered a wrong number.\nPlease enter a valid number. Thank-you!");
    }
    
    return 0;
}
