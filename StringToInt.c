/*
 * StringToInt.c
 *
 *  Created on: 20-Aug-2020
 *  Author: Marvelcoder
 *
 *
 */

 #include<stdio.h>

 int main(){

    char s[]="he345llo";
    int i,n=0;

    for(i=0;s[i]>='0' && s[i]<='z';++i){
        n=10*n+(s[i]-'0');
    }

    printf("%d",n);
 return 0;
 }
