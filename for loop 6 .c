#include <stdio.h>

int main() {
    int a,fact=1;
    scanf("%d",&a);
    for(int i=a; i>=1; i--) {
        fact*=i;
        
    }
            printf("%d ",fact);  

    return 0;
}
