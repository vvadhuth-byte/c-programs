#include <stdio.h>

int main() {
    int a, i, j,c=0, p;

    scanf("%d", &a);
    if(a==1 || a==2){
            printf("not a prime numder");
    }
    else{

    for (i=2;i<a;i++) {
        p = 1;  
        
            if (a%i==0) {
                p = 0;  
                break;
            }
        }
        if (p==1) 
            printf("prime numder");
        else
            printf("not a prime numder");


    } 
    
    
    return 0;
}
