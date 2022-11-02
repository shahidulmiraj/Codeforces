#include<stdio.h>
#include<string.h>
int main(){
    char word[101];
    scanf("%s",&word);
    int count1=0,count2=0;
    int size=strlen(word);
    for(int i=0;i<size;i++){
        if(word[i]>='A' && word[i]<='Z'){
            count1++;
        }
        else{
            count2++;
        }
    }
    if(count2>=count1){
        for(int j=0;j<size;j++){
            if(word[j]>='A' && word[j]<='Z'){
                printf("%c",word[j]+32);
            }
            else{
                printf("%c",word[j]);
            }
        }
    }
    else{
        for(int j=0;j<size;j++){
            if(word[j]>='a' && word[j]<='z'){
                printf("%c",word[j]-32);
            }
            else{
                printf("%c",word[j]);
            }
        }
    }
    return 0;
}