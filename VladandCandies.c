#include<stdio.h>
int main(){
    int t,n,a,i,j;
    scanf("%d",&t);
    for(int k=0;k<t;k++){
        scanf("%d",&n);
        int candy[200000]={};
        for(int j=0;j<n;j++){
            scanf("%d",&candy[j]);
        }
        if(n==1){
            if(candy[0]==1){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else{
            int check=0;
            for (i=0;i<n;i++){
                for(j=i+1;j<n;j++){
                    if(candy[i]<candy[j]){
                        a=candy[i];
                        candy[i]=candy[j];
                        candy[j]=a;
                    }
                }
            }
            if(n==2){
                if(candy[0]-candy[1]>=2){
                    printf("NO\n");
                    check=1;
                }
                else{
                    printf("YES\n");
                    check=1;
                }
                
            }
            else{
                for(i=0;i<n-1;i++){
                    if(candy[i]-candy[i+1]>=2){
                        printf("NO\n");
                        check=1;
                        break;
                    }
                }
            }
            if(check==0){
                printf("YES\n");
            }
        }
    }
    return 0;
}