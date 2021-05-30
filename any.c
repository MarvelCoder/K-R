/*
 * any.c
 *
 *  Created on: 26-Aug-2020
 *      Author: Marvelcoder
 */

 #include<stdio.h>

int any(char a1[],char a2[]);

int main(){

    char s1[]="abcdhfgklsdnfk";
    char s2[]="31289312038131";

    printf("First location from %s is %d\n",s1,any(s1,s2));;

    return 0;
}

int any(char a1[],char a2[]){

    for(int i=0,flag=0;a1[i]!='\0';i++){
        for(int j=0;a2[j]!='\0';j++){
            if(a1[i]==a2[j]){
                return i;
            }
        }
    }
    return -1;
}
