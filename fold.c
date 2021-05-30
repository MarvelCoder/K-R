/*
 * fold.c
 *
 *  Created on: 11-Aug-2020
 *  Author: Marvelcoder
 *
 *
 */

#include<stdio.h>

#define MAXLINE 1000
#define NTHCOL 10

int main(){

    char line[MAXLINE],ch;
    int taborblankindex,i,nthcolumnindex;

    taborblankindex=i=nthcolumnindex=0;


    while((ch=getchar())!=EOF){
        line[i]=ch;
        i++;
    }


    for(int j=0;j<=i;j++){
        if(j%NTHCOL==0){
           nthcolumnindex = nthcolumnindex + NTHCOL;
            if(line[nthcolumnindex]!=' ' || line[nthcolumnindex]!='\t'){
                int k = nthcolumnindex;
                while(line[k]!=' ' && line[k]!='\t'){
                    --k;
                }
                line[k]='\n';
            }else{
                line[nthcolumnindex]='\n';
            }
        }
        printf("%c",line[j]);
    }



return 0;
}
