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