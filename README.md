# Election-Voting-System-Using-Aadhar



TITLE   : “Election Voting System”.
AIM   : 
To create a C program representing the Election voting system where anyone can cast their vote to their favourite party.

ABSTRACT : 
This C program demonstrates the process of the Election Voting System where anyone can cast their vote to their favourite party,can check the number of vote counts and also find who is in the leading position. It is used to elect the favourite party from the list.This program contains a basic header file,#include <stdio.h> and also used in several functions and data types.In this program to get the output without lag “Do” loops and “Switch” statements have been used so that the user could enter their opinion in the input.The code can be executed in “Code Blocks” or any other  C-compiler.

ALGORITHM : 
Step 1 : Start
Step 2 : Declare the variables Party1 = “BJP”, Party2=”CONGRESS”, Party3=”TDP”, Party4=”JSP”, Party5=”NOTA”, voteCount1=0, voteCount2=0, voteCount3=0, voteCount4=0, votesCount5=5, choice=0.
Step 3 : Display the main menu and options.Read choice variable.
Step 4 : If choice is equal to 1;Display the party names from the party variables.
Step 5 : Read choice ,If choice equals 1
				Increment the votesCount1 by one
Step 6 : If choice equals 2
				Increment the votesCount2 by one
Step 7 : If choice equals 3
				Increment the votesCount3 by one
Step 8 : If choice equals 4
				Increment the votesCount4 by one
Step 9 : If choice equals 5
				Increment the votesCount5 by one
Step 10 : If choice equals 2
			Display all the Party’s with their corresponding votesCount
Step 11 :If choice equals 3
	Display the party with the highest votesCount value
Step 12 : If choice equals 4
	Finish the program
Step 13 : Else 
	Display Invalid choice
	   While choice is different 0 
Step 14 : Stop.




PROGRAM : 

#include<stdio.h>
#define PARTY_COUNT
#define PARTY1 "BJP"
#define PARTY2 "CONGRESS"
#define PARTY3 "TDP"
#define PARTY4 "JSP"
#define PARTY5 "NOTA"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0,votesCount5=0;
 
void castVote(){
int choice;  
printf("\n\n ^*^*^*^* Please choose your PARTY ^*^*^*\n\n");
printf("\n 1. %s", PARTY1);
printf("\n 2. %s", PARTY2);
printf("\n 3. %s", PARTY3);
printf("\n 4. %s", PARTY4);
printf("\n 5. %s", PARTY5);
 
printf("\n\n Input your choice (1 - 5) : ");
scanf("%d",&choice);
 
switch(choice){
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: votesCount5++; break;
   
    default: printf("\n Error: Wrong Choice !! Please retry");
           getchar();
}
printf("\n Thanks for the Vote !!");
}
 
void votesCount(){
printf("\n\n ~*~*~*~*~Voting Stats ~*~*~*~*~");
printf("\n %s - %d ", PARTY1, votesCount1);
printf("\n %s - %d ", PARTY2, votesCount2);
printf("\n %s - %d ", PARTY3, votesCount3);
printf("\n %s - %d ", PARTY4, votesCount4);
printf("\n %s - %d ", PARTY5, votesCount5);
}
 
void getLeadingPARTY(){
    printf("\n\n  &*&*&*&*&* Leading PARTY &*&*&*&*&*\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4 && votesCount1 > votesCount5)
    printf("[%s]",PARTY1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1 && votesCount2 > votesCount3 > votesCount5)
    printf("[%s]",PARTY3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3 && votesCount4 > votesCount5)
    printf("[%s]",PARTY4);
    else if(votesCount5>votesCount1 && votesCount5>votesCount2 && votesCount5 >votesCount3 && votesCount5 > votesCount4)
    printf("[%s]",PARTY5);
    else
    printf("----- Warning !!! No-win situation----");  
   
   
   
}
 
int main()
{
int i;
int choice;
 
do{
printf("\n\n $!$!$!$! Welcome To Vote For Your Favourite PARTY $!$!$!$!");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading PARTY");
printf("\n 4. Exit");
 
printf("\n\n Please enter your choice : ");
scanf("%d", &choice);
 
switch(choice)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingPARTY();break;
case 4: break;
default: printf("\n Error: Invalid Choice");
}
} while(choice!=4);
getchar();
return 0;
}





RESULT  :  
Hence this is the C program project to demonstrate that the Election Voting System is created and executed in the compiler successfully. 
