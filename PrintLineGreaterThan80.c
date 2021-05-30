/*
 * PrintLineGreaterThan80.c
 *
 *  Created on: 03-Aug-2020
 *      Author: Marvelcoder
 */


#include<stdio.h>

#define MAXLINE 1000

int i=0;
int len=0;

int getLineLength(char line[],int limit);

int main(){

	char line[MAXLINE];

	while((len=getLineLength(line,MAXLINE))>0){
		if(len>80){

			for(int j=i-len;j<=i;j++){
				printf("%c",line[j]);
			}
			printf("\n");
		}
	}

	return 0;
}

int getLineLength(char line[], int limit){

	char ch;
	int count;

	count=0;

	while((ch=getchar())!=EOF && ch!='\n' && i<limit){
		line[i]=ch;
		count++;
		++i;
	}

	return count;
}
