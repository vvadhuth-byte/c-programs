#include <stdio.h>

int main() {
    int a, i, j = 0;

    scanf("%d", &a);
    int temp = a;

    for (i = 0; a > 0; a = a / 10) {
        j = j * 10 + (a % 10);
    }

    if (j == temp)
        printf("palindrome");
    else 
        printf("not a palindrome");

    return 0;
}
