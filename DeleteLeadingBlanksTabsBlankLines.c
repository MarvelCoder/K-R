/*
 * DeleteLeadingBlanksTabsBlankLines.c
 *
 *  Created on: 03-Aug-2020
 *      Author: Marvelcoder
 */


#include <stdio.h>

#define MAXLINE 1000

int main(){

	char line[MAXLINE]={0};
	char ch;
	int i=0,flag=0;

	while((ch=getchar())!=EOF){
		line[i] = ch;
		++i;
	}

	for(int i=0;line[i]!=EOF && i<MAXLINE-1;i++){
		if((line[i]=='\t' || line[i]==' ' || line[i]=='\n') && flag==0){
			line[i]='\b';
		}else if(line[i]=='\n'){
			flag=0;
		}else{
			flag=1;
		}
		printf("%c",line[i]);
	}

	return 0;
}
