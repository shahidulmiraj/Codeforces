#include<stdio.h>
int main()
{
    int t,n,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int check=0,num[1000]={};
        for(j=0;j<n;j++){
            scanf("%d",&num[j]);
        }
        if(n==2){
            printf("YES\n");
            check=1;
        }
        else if(num[0]%2==0){
            for(int k=2;k<n;k=k+2){
                if(num[k]%2!=0){
                    printf("NO\n");
                    check=1;
                    break;
                }
            }
            if(check==0){
                if(num[1]%2==0){
                    for(int l=3;l<n;l=l+2){
                        if(num[l]%2!=0){
                            printf("NO\n");
                            check=1;
                            break;
                        }
                    }
                }
                else{
                    for(int l=3;l<n;l=l+2){
                        if(num[l]%2==0){
                            printf("NO\n");
                            check=1;
                            break;
                        }
                    }
                }
            }
        }
        else{
            for(int k=2;k<n;k=k+2){
                if(num[k]%2==0){
                    printf("NO\n");
                    check=1;
                    break;
                }
            }
            if(check==0){
                if(num[1]%2==0){
                    for(int l=3;l<n;l=l+2){
                        if(num[l]%2!=0){
                            printf("NO\n");
                            check=1;
                            break;
                        }
                    }
                }
                else{
                    for(int l=3;l<n;l=l+2){
                        if(num[l]%2==0){
                            printf("NO\n");
                            check=1;
                            break;
                        }
                    }
                }
            }
        }
        if(check==0){
            printf("YES\n");
        }
    }
    return 0;
}