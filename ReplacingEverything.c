/*
 * ReplacingEverything.c
 *
 *  Created on: 18-Jul-2020
 *      Author: Marvelcoder
 */

#include<stdio.h>

int main(){

	int character;

	while((character=getchar())!=EOF){
		if(character=='\t'){
			putchar('\\');
			putchar('t');
		}else if(character=='\b'){
			putchar('\\');
			putchar('b');
		}else if(character=='\\'){
			putchar('\\');
			putchar('\\');
		}else{
			putchar(character);
		}
	}

}
