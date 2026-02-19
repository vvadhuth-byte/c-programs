#include <stdio.h>
#include <math.h>

int main() {
    int a, i, sum = 0;
    scanf("%d", &a);

    for (i = 0; a > 0;a=a/10) {
        if (a % 10 == 1) {
            sum = sum + pow(2,i);   
        }
        i++;
    }
    printf("%d", sum);
    return 0;
}
