/*
 * SyntaxError.c
 *
 *  Created on: 14-Aug-2020
 *  Author: Marvelcoder
 *
 * Need to redo current logic, failing due to /
 * Need to think of a good way of handling comments
 */

 #include<stdio.h>

 #define MAXLINE 100000
 #define openparanthesis '('
 #define closeparanthesis ')'
 #define opencurlybraces '{'
 #define closecurlybraces '}'
 #define opensquarebrackets '['
 #define closesquarebrackets ']'
// #define singlequotes '''
// #define doublequotes '"'
 #define singlelinecomment '/'
 #define multilinecomment'*'
// #define slashescape '\'

 int main(){

    int openparanthesiscount,closeparanthesiscount,opencurlybracescount,closecurlybracescount,
 opensquarebracketscount,closesquarebracketscount,singlequotescount,doublequotescount,singlelinecommentcount,
 multilinecommentcount,slashescapecount;

 openparanthesiscount=closeparanthesiscount=opencurlybracescount=closecurlybracescount=
 opensquarebracketscount=closesquarebracketscount=singlequotescount=doublequotescount=
 singlelinecommentcount=multilinecommentcount=slashescapecount=0;

    char line[MAXLINE],ch;
    int i=0;
    while((ch=getchar())!=EOF){
        line[i]=ch;
        i++;
    }

    for(int j=0;j<i;j++){
        if(line[j]==openparanthesis){
            ++openparanthesiscount;
        }else if(line[j]==closeparanthesis){
            ++closeparanthesiscount;
        }else if(line[j]==opencurlybraces){
            ++opencurlybracescount;
        }else if(line[j]==closecurlybraces){
            ++closecurlybracescount;
        }else if(line[j]==opensquarebrackets){
            ++opensquarebracketscount;
        }else if(line[j]==closesquarebrackets){
            ++closesquarebracketscount;
        }else if(line[j]=='\''){
            ++singlequotescount;
        }else if(line[j]=='\"'){
            ++doublequotescount;
        }else if(line[j]==singlelinecomment){
            ++singlelinecommentcount;
        }else if(line[j]==multilinecomment){
            ++multilinecommentcount;
        }else if(line[j]=='\\'){
            ++slashescapecount;
        }
    }

    printf("\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-");
    printf("Syntax Errors");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-");
    printf("\n");

    if(openparanthesiscount>closeparanthesiscount || openparanthesiscount<closeparanthesiscount){
        printf("Mismatch between Open Parenthesis %d and Close Parenthesis %d\n",openparanthesiscount,closeparanthesiscount);
    }else if(opencurlybracescount>closecurlybracescount || opencurlybracescount<closecurlybracescount){
        printf("Mismatch between Open Curly Braces %d and Close Curly Braces %d\n",opencurlybracescount,closecurlybracescount);
    }else if(opensquarebracketscount>closesquarebracketscount || opensquarebracketscount<closesquarebracketscount){
        printf("Mismatch between Open Square Brackets %d and Close Square Brackets %d\n",opensquarebracketscount,closesquarebracketscount);
    }else if(singlequotescount%2!=0){
        printf("Mismatch between Single Quotes %d\n",singlequotescount);
    }else if(doublequotescount%2!=0){
        printf("Mismatch between Double Quotes %d\n",doublequotescount);
    }else if(singlelinecommentcount%2!=0){
        printf("Single Line Comment syntax incorrect %d\n",singlelinecommentcount);
    }else if(multilinecommentcount>1){
        printf("Multi Line Comment syntax incorrect %d\n",multilinecommentcount);
    }else if(slashescapecount%2!=0){
        printf("Mismatch between slash escape %d\n",slashescapecount);
    }

    printf("\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-");
    printf("Syntax Errors");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-");
    printf("\n");

    return 0;
 }
