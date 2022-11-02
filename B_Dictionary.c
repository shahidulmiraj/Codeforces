#include<stdio.h>
int main()
{
    int t;
    char word[3],ara[26];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&word);
        for(int j=0;j<26;j++){
            ara[j]='a'+j;
        }
        for(int j=0;j<26;j++){
            for(int k=0;k<26;k++){
                if(ara[j]==word[0] && ara[k]==word[1] && ara[j]!=word[1]){
                    if(j<k){
                        printf("%d\n",25*j+k);
                    }
                    else{
                        printf("%d\n",25*j+k+1);
                    }
                    
                }
           }
        }
    }
    return 0;
}