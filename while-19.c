#include<stdio.h>
int main()
{
    int a,b,c,d=0,i=0;
    scanf("%d\n%d",&a,&b);
    while(b>0){
        scanf("%d",&c);
        d=d+c;
      b--; 
    }
    
    if(d>a){
        printf("Treated Patients:%d\n",a);
        printf("Rejected Patience:%d",d-a);
    }
    else{
    printf("Treated Patients:%d\n",d);
    printf("Rejected Patience:%d",i);
    }
    return 0;
    
}
