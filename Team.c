#include<stdio.h>
int main()
{
    int n,sure=0,team[3];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<3;j++){
            scanf("%d",&team[j]);
            if(team[j]==1){
                count++;
            }
        }
        if(count>=2){
            sure++;
        }
    }
    printf("%d\n",sure);
    return 0;
}