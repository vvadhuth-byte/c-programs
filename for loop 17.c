#include <stdio.h>

int main() {
    int n,sum=1,sum1=0;
    

    scanf("%d", &n);
    int temp=n;

    for (int i=0; n > 0; n = n / 10) {
        for(int j=1;j<=n%10;j++){
        sum*=j;
            
        }
        sum1+=sum;
        sum=1;
    }
    if (temp==sum1)
    printf("strong number");
    else
    printf("not strong number");
    
    
    return 0;
}
