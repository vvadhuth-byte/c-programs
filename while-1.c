#include<stdio.h>
int main()
{
    int a,noise;
    int count=0;
    int violation=0;
    int long_streak=0;
    scanf("%d",&a);
    while(a>0){
        scanf("%d",&noise);
        if(noise>70){
            count++;
            long_streak++;
            
            if(long_streak>violation)
            violation=long_streak;
        }
        else{
            long_streak=0;
        }
        a--;
    }
    
  
    
    printf("Noise Violation:%d\n",count);
    printf("Longest violation streak:%d",violation);
}
