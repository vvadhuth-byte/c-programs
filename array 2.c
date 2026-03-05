#include <stdio.h>

int main() {
    int a,m=0,c=0;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        m+=arr[i];
        
    }
    for(int i=0;i<a;i++){
        if(arr[i]==m/a){
            c++;
        }
        
    }
    printf("%d",c);

    return 0;
}
