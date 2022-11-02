#include<stdio.h>
int main()
{
    int k,n,w,ans=0;
    scanf("%d %d %d",&k,&n,&w);
    for(int i=1;i<=w;i++){
        ans+=k*i;
    }
    if(ans<=n){
        printf("0\n");
    }
    else{
        printf("%d\n",ans-n);
    }
    return 0;
}