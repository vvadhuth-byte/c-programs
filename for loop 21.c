#include <stdio.h>

int main() {
    int a, i, j,c=0, p;

    scanf("%d", &a);

    for (i=2;i<a;i++) {
        p = 1;  
        for (j=2;j<i; j++) {
            if (i%j==0) {
                p = 0;  
                break;
            }
        }
        if (p==1) 
            c++;
        
    }
    printf("%d",c);
    return 0;
}
