#include<stdio.h>
int main()
{
    int n,a,b,pass=0,ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        pass-=a;
        pass+=b;
        if(pass>=ans){
            ans=pass;
        }
    }
    printf("%d",ans);
    return 0;
}