#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,check;
    char good[200000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&good);
        check=0;
        int size=strlen(good);
        if(good[0]=='B'){
            printf("NO1\n");
            check=1;
        }
        else if(good[size-1]=='A'){
            printf("NO2\n");
            check=1;
        }
        else{
            int m=size-1;
            while(good[m]=='B'){
                m--;
            }
            int j=0;
            while(j!=m+1){
                int count1=0,count2=0;
                while(good[j]=='A'){
                    count1++;
                    j++;
                }
                while(good[j]=='B'){
                    count2++;
                    j++;
                }
                if(count1<count2){
                    printf("NO3\n");
                    check=1;
                    break;
                }
            }
        }
        if(check==0){
            printf("YES\n");
        }
    }
    return 0;
}