/*
 * WhyIntForEOF.c
 *
 *  Created on: 19-Aug-2020
 *  Author: Marvelcoder
 *
 *
 */

 #include<stdio.h>

 int main(){

 char c;

 while((c=getchar())!=EOF){
       printf("%c\n",c);
}

 return 0;
 }
