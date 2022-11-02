#include<stdio.h>
#include<string.h>
int main()
{
    char num[101];
    scanf("%s",&num);
    int size=strlen(num);
    for(int i=0;i<size;i=i+2){
        for(int j=i+2;j<size;j=j+2){
            if(num[i]>num[j]){
                char temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("%s\n",num);
    return 0;
}