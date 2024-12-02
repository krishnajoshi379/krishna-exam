#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) {
        num = -num;  
    }

   
    while (num != 0) {
        num = num / 10;  
        count++;        
    }

   
    if (count == 0) {
        count = 1;
    }

 
    printf("The number of digits is: %d\n", count);

    return 0;
}
