#include<stdio.h>
int main()
{
    int i,j,k,n,t,check=0;
    scanf("%d",&t);
    for(j=0;j<t;j++){
        check=0;
        int num[200000],count[200001]={};
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&num[i]);
            count[num[i]]++;
        }
        if(n<1000){
            for(k=0;k<1000;k++){
                if(count[k]>=3){
                    printf("%d\n",k);
                    check=1;
                    break;
                }
            }
        }
        else if(n<10000){
            for(k=0;k<10000;k++){
                if(count[k]>=3){
                    printf("%d\n",k);
                    check=1;
                    break;
                }
            }
        }
        else if(n<100000){
            for(k=0;k<200001;k++){
                if(count[k]>=3){
                    printf("%d\n",k);
                    check=1;
                    break;
                }
            }
        }
        else{
            for(k=0;k<200001;k++){
                if(count[k]>=3){
                    printf("%d\n",k);
                    check=1;
                    break;
                }
            }
        }
        if(check==0){
            printf("-1\n");
        }
    }
    return 0;
}