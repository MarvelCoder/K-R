/*
 * detab.c
 *
 *  Created on: 8-Aug-2020
 *  Author: Marvelcoder
 *
 * Refer expected O/P- https://stackoverflow.com/questions/13094690/how-many-spaces-for-tab-character-t
 */

#include<stdio.h>

#define MAXLINE 1000
#define TABSTOPS 8

int main(){

    char line[MAXLINE];
    char ch;
    int i,linecounter,counter,curenttabstop,nexttabstop,blanks;
    i=linecounter=counter=curenttabstop=nexttabstop=blanks=0;

   while((ch=getchar())!=EOF && i<MAXLINE){
        line[i] = ch;
        ++i;
    }

    for(int j=0;j<i && line[j]!=EOF;j++){
        if(linecounter%TABSTOPS==0){
            curenttabstop=nexttabstop;
            nexttabstop=curenttabstop+TABSTOPS;
        }
        if(line[j]=='\t'){
            if(counter<curenttabstop){
                blanks = curenttabstop - counter;
            }else if(counter>=curenttabstop && counter<nexttabstop){
                blanks = nexttabstop - counter;
            }

            while(blanks>0){
                printf(" ");
                --blanks;
                ++linecounter;
                ++counter;
            }
            blanks=0;
        }else if(line[j]=='\n'){
            printf("%c",line[j]);
            linecounter=curenttabstop=nexttabstop=counter=0;
        }
        else{
            printf("%c",line[j]);
            ++linecounter;
            ++counter;
        }
    }

    return 0;

}
