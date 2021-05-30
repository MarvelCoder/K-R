/*
 * TabCount.c
 *
 *  Created on: 13-Jul-2020
 *      Author: Marvelcoder
 */


#include<stdio.h>

int main(){

	int tabcount = 0,character;

	while((character=getchar())!=EOF){
		if(character=='\t'){
			++tabcount;
		}
	}

	printf("Number of tabs are %d",tabcount);

}
