#include <stdio.h>
int main() {
    int mark;
    scanf("%d",&mark);
    if(mark<=100&&mark>=85){
    printf("grade A");
    }
    else if(mark<=85&&mark>=50){
    printf("grade B");
    }
    else
    printf("grade C");
    return 0;
}