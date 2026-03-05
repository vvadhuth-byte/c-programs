
#include <stdio.h>

int main() {
    int a,e=0,o=0;
    scanf("%d",&a);
    int arr[a];

    for (int i=0;i<a;i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a;i++) {
        if (arr[i]%2==0) {
           e++;
        }
        else{
            o++;
        }
        
    }
    printf("even:%d\n",e);
    printf("odd:%d",o);
    return 0;
}
