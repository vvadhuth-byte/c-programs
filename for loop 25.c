#include <stdio.h>
#include <math.h>

int main() {
    int rem=0,a, i,sum=0;
    scanf("%d", &a);
    int temp = a;

    for (i = 0; a > 0; a = a / 10) {
         rem=(a % 10);
         sum+=pow(rem,3);
    }

    if (sum==temp)
        printf("armstrong");
    else 
        printf("not a armstrong");

    return 0;
}
