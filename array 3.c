#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++) {
        scanf("%d",&arr[i]);
    }
    int s=1; 
    for (int i=0;i<a-1;i++) {
        if (arr[i]>arr[i+1]) {
            s=0;                
            break;
        }
    }
    if (s==1) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}
