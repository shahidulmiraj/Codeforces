#include<stdio.h>
int main()
{
    int n,x=0;
    char bit[4];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&bit);
        if(bit[0]=='X'){
            if(bit[1]=='+'){
                x=x+1;
            }
            else{
                x=x-1;
            }
        }
        else if(bit[0]=='+'){
            x=x+1;
        }
        else{
            x=x-1;
        }
    }
    printf("%d",x);
    return 0;
}