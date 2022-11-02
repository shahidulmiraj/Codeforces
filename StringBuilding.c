#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char str[51];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&str);
        int m=0,check=0;
        int size=strlen(str);
        while(m!=size){
            if(str[m]=='a'){
                int count=0;
                while(str[m]=='a'){
                    count++;
                    m++;
                }
                if(count==1){
                    printf("NO\n");
                    check=1;
                    break;
                }
            }
            else{
                int count=0;
                while(str[m]=='b'){
                    count++;
                    m++;
                }
                if(count==1){
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
    return 0;
}