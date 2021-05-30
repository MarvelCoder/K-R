/*
 * HorizontalHistogram.c
 *
 *  Created on: 18-Jul-2020
 *      Author: Marvelcoder
 */


#include<stdio.h>

#define ARRAY_LENGTH 15

int main(){

	int ch,array[ARRAY_LENGTH]={0},barray[ARRAY_LENGTH]={0},index,count,temp,visited,fqncy;

	index=count=temp=visited=fqncy=0;

	while((ch=getchar())!=EOF){
		if(ch==' '||ch=='\t'||ch=='\n'){
			if(count!=0){
				array[index]=count;
				++index;
				count=0;
			}
		}else ++count;
	}

	//Prints the length of each word
	for(int i=0;i<ARRAY_LENGTH;i++){
		printf("%d ",array[i]);
	}

	printf("\n");

	/*
	 * This block of code calculates the frequency of each element from one array
	 * and sets it in corresponding location in another array.
	 *
	 * For ex: 5 is at 0th index and it's frequency is 3
	 * so 3 is set at 0th index in another array.
	 */
	for(int i=0;i<ARRAY_LENGTH;i++){
		temp=i;
		while(temp>=0){
			if(array[i]==array[--temp]){
				visited=1;
				break;
			}
		}

		if(visited==0){
			for(int j=0;j<ARRAY_LENGTH;j++){
				if(array[i]==array[j]){
					++fqncy;
				}
			}
		}

		if(visited==0){
			barray[i] = fqncy;
			fqncy=0;
		}
		visited=0;
	}

	//Prints the frequency of each word
	for(int i=0;i<ARRAY_LENGTH;i++){
		printf("%d ",barray[i]);
	}
	printf("\n---------------HORIZONTAL HISTOGRAM STARTS--------------------\n");

	for(int i=1;i<=11;i++){
		if(i==11){printf(">10 ");}
		else if(i==10){printf("%d  ",i);}
		else{printf("%d   ",i);}
		for(int j=0;j<ARRAY_LENGTH;j++){
			if(i<11 && i==array[j]){
				printf("X ");
			}else if(i>10 && array[j]>10){
				printf("X ");
			}
		}
		printf("\n\n");
	}

	printf("----------------HORIZONTAL HISTOGRAM ENDS------------------\n");

return 0;

}
