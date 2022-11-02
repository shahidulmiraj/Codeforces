#include<stdio.h>
#include<string.h>
int main()
{
    char num[20];
    scanf("%s",num);
    int count=0,size=strlen(num);
    for(int i=0;i<size;i++){
        if(num[i]=='4' || num[i]=='7'){
            count++;
        }
    }
    if(count==4 || count==7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}