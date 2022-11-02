#include<stdio.h>
#include<string.h>
int main()
{
    int n,count1=0,count2=0;
    scanf("%d",&n);
    char chess[n];
    scanf("%s",&chess);
    for(int i=0;i<strlen(chess);i++){
        if(chess[i]=='A'){
            count1++;
        }
        else if(chess[i]=='D'){
            count2++;
        }
    }
    if(count1==count2){
        printf("Friendship\n");
    }
    else if(count1>count2){
        printf("Anton\n");
    }
    else{
        printf("Danik\n");
    }
    return 0;
}