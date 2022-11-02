#include<stdio.h>
int main()
{
    int n,k,count=0,part[101];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&part[i]);
    }
    for(int j=0;j<n;j++){
        if(part[j]>=part[k-1] && part[j]!=0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}