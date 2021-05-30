/*
 * ChracterCount.c
 *
 *  Created on: 13-Jul-2020
 *      Author: Marvelcoder
 */


#include <stdio.h>

int main(){

	int chcount,character;

	chcount=0;

	while((character=getchar())!=EOF){
		++chcount;
	}


	printf("Number of characters is %d",chcount);
}
