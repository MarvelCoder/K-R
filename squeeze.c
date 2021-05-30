/*
 * squeeze.c
 *
 *  Created on: 26-Aug-2020
 *      Author: Marvelcoder
 */

 #include<stdio.h>

void squeeze(char a1[],char a2[]);

int main(){

    char s1[]="hfgklsdnfk";
    char s2[]="rweiuywireshdkfjhsdvcmxvnx";

    squeeze(s1,s2);

    return 0;
}

void squeeze(char a1[],char a2[]){

    printf("Before squeeze operation -> %s\n",a1);

    for(int i=0,flag=0;a1[i]!='\0';){
        for(int j=0;a2[j]!='\0';j++){
            if(a1[i]==a2[j]){

                int k=i;
                while(a1[k]!='\0'){
                    a1[k]=a1[k+1];
                    ++k;
                }
                a1[k]='\0';
                flag=1;
                break;
            }else{
                flag=0;
            }
        }
        if(!flag)i++;
    }

    printf("After squeeze operation -> %s\n",a1);
}
