#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    scanf("%s",&name);
    int ans=0,size=strlen(name);
    for(int i='a';i<='z';i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(i==name[j]){
                count++;
            }
        }
        if(count>=1){
            ans+=count-1;
        }
    }
    int a=(size-ans)%2;
    if(a==0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
}