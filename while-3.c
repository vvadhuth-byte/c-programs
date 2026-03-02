#include<stdio.h>
int main()
{    int a,b,c,d=0,e=0;
    int count=0;
    scanf("%d",&a);
    scanf("%d",&b);
    while(b>0){
        scanf("%d",&c);
        d=d+c;
        
        if(d<=a)
            count++;
       
        if(d>a)
            break;
        b--;
    }
   
    printf("Days Used: %d\n",count);
    if(a<d){
        printf("Remaining Data=0GB");
    }
    else
    printf("Remianing Data: %d",a-d);
    return 0;
}
