#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{

int initial_state=1,len,current_state=1;
char a,b; char input[10];

printf("Enter input string : ");
scanf("%s",&input);
len=strlen(input);
if(len==3){ //here the length of string is checked/
{
 if(initial_state==1 && input[0]=='a'){//to accept first element a/
 current_state=2;
}
 else {
 printf("String is Rejected.");
 exit(0);}
}
{
 if(current_state==2 && input[1]=='b'){//to accept second element b/
 current_state=3;
 }
 else {
 printf("String is Rejected.");
 exit(0);}
}
 {
if(current_state==3 && input[2]=='b'){ //to accept third element b/
current_state=4;
printf(" String is accepted");}
else {
printf("String is rejected.");
exit(0);}
 }
}
else{
 printf("Enter correct string." ); //if length & character of string is not correct/
 exit(0);
 }
 getch();
}