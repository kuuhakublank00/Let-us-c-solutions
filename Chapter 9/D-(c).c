//Write a program that converts all lowercase characters in a given string to its equivalent uppercase character.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<strings.h>
void xlowercase(char *, const char *);
int main(void){
    char s[30], t[30] = {'\0'};
    printf("Enter a string in lowercase: ");
    fgets(s, 30, stdin);            //getting the string from the user
    xlowercase(t, s);
    printf("The uppercase string is: %s\n", t);
}
void xlowercase(char *target, const char *source){
    while(*source != '\n'){
        if(*source == 32)               //if the character is a space
            *target = *source;
        
        else
            *target = *source - ('a' - 'A');        //difference between ASCII values of 'a' and 'A'

        source++;
        target++; 
    }
}
