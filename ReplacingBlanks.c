/*
 * ReplacingBlanks.c
 *
 *  Created on: 13-Jul-2020
 *      Author: Marvelcoder
 */

#include<stdio.h>

int main(){

	int character,count=0;

	while((character=getchar())!=EOF){
		if(character==' ' && count==0){
			putchar(character);
			++count;
		}else if(character==' ' && count >= 1){
			++count;
		}else if(character!=' '){
			putchar(character);
			count=0;
		}

	}

}
