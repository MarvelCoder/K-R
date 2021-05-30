/*
 * OneWordPerLine.c
 *
 *  Created on: 18-Jul-2020
 *      Author: Marvelcoder
 */

#include<stdio.h>

int main(){


	int character,counter=0;

	while((character=getchar())!=EOF){
		if(character=='\t' || character==' '){
			++counter;
			if(counter==1)
				putchar('\n');
		}else{
			counter=0;
			putchar(character);
		}

	}
	return 0;
}
