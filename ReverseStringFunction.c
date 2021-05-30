/*
 * ReverseStringFunction.c
 *
 *  Created on: 13-Jul-2020
 *      Author: Marvelcoder
 */

#include<stdio.h>

#define MAXLINE 1000

void reverse(char line[],int lastCharIndex);

int main(){

    char line[MAXLINE];
    int i=0;
    char ch;

    for(;(ch=getchar())!=EOF && i<MAXLINE-1;i++){
        line[i]=ch;
    }

    reverse(line,i);

return 0;
}

void reverse(char line[],int i){

    int temp=0;

    for(int j=0;j<i;j++){
        if(line[j]=='\n'){
            for(int k=j-1;temp<=k;k--){
                printf("%c",line[k]);
            }
            printf("\n");
            temp=++j;
        }
    }

}
