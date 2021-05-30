/*
 * LineCount.c
 *
 *  Created on: 13-Jul-2020
 *      Author: Marvelcoder
 */


#include<stdio.h>

int main(){

	int linecount,character;

	linecount=0;

	while((character=getchar())!=EOF){
		if(character=='\n'){
			++linecount;
		}
	}

	printf("Number of line is %d",linecount);

}
