/*
 * BlanksCount.c
 *
 *  Created on: 13-Jul-2020
 *      Author: Marvelcoder
 */


#include<stdio.h>

int main(){

	int character,blankcount = 0;

	while((character=getchar())!=EOF){
		if(character==' '){
			++blankcount;
		}
	}

	printf("Number of blanks are %d",blankcount);

}
