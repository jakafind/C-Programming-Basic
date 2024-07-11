#include <stdio.h>

int main() {
   int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    if(a%2==0){
        printf("This is an Even Number");
    }
else
printf("This is a Odd Number");
    return 0;
}
