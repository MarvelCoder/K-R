/*
 * WordCount.c
 *
 *  Created on: 18-Jul-2020
 *      Author: Marvelcoder
 */

#include<stdio.h>

#define IN 1
#define OUT 0

int main(){

	int character,nl,nw,nc,state;

	state = OUT;
	nl=nw=nc=0;

	while((character=getchar())!=EOF){

		++nc;
		if(character == '\n')
			++nl;
		if(character==' '||character=='\n'||character=='\t')
			state=OUT;
		else if(state == OUT){
			state=IN;
			++nw;
		}
	}

	printf("%d %d %d\n",nl,nw,nc);
	return 0;
}
