/*
 * HexToInt.c
 *
 *  Created on: 22-Aug-2020
 *      Author: Marvelcoder
 */


 #include<stdio.h>

 int hexToInt(char []);

 int main(){

    char hex[]="0x6BF0";

     printf("Hexadecimal number %s after conversion is %d",hex,hexToInt(hex));

 return 0;
 }


 int hexToInt(char arr[]){

    int decimal,length,pow,temppow,base,tempbase,num;
    decimal=length=pow=temppow=num=0;

    for(int i=0;arr[i]!='\0';++i){
        length++;
    }

    pow=length-1;

    for(int i=0;i<length;i++){
        temppow=pow;
        tempbase=16;
        base=1;
        while(temppow!=0){
            base=base*tempbase;
            temppow--;
        }
        if(pow==0)base=1;
        if(arr[i]>='0' && arr[i]<='9'){
            num=arr[i]-'0';
        }else if(arr[i]>='A' && arr[i]<='F'){
            num=arr[i]-55;
        }
        decimal+=num*base;
        pow--;
    }

 return decimal;
 }
