#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    int count=0;
    scanf("%d\n%d",&a,&b);
    while(b>0){
        scanf("%d",&c);
       if(c<a){
           count++;
       }
       if(c>a){
           d++;
       }
       b--;
    }
    printf("Safe Hours:%d\n",count);
    printf("Failure Count:%d",d);
    return 0;
}
