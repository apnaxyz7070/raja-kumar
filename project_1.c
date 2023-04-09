#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main(){
    int number;
    int guesh_number;
    int guesh_time=1;
    int choice;
    
    srand(time(0));
    guesh_number=(rand()%50)+1;
    //printf("------------%d------------",guesh_number);
    printf("\n\nGame name-: GUESH THE NUMBER\n");
    // printf("guesh_number is %d \n",guesh_number);
    printf("\t ~~~~~~~~~~~~~~~RULE OF THE GAME~~~~~~~~~~~~~~~\n\t computer generat a randam number between 1 to 50.\nyou are guesh this random number before five times then you will be winner.\n ");
    printf("\nyou are excited to play this game\n if yes-:enter 1\t no-:enter 0\n ");
    printf("enter choice:");
    scanf("%d",&choice);

    printf("\nTHANK YOU!");
    if(choice==1)
    {
    do
    {
        printf("\n\n Enter the number between 1-50 for guessing:");
    scanf("%d",&number);


       if (number>guesh_number)
       {
        printf("enter lower number\n");
       }
       if (number<guesh_number)
       {
        printf("enter high number\n");
       }
       if (number==guesh_number)
       {
        printf("\n>>>>>>>>>congragulations you are guesh the number succesfully in %d times.<<<<<<<<<<<\n",guesh_time);
        printf("\t\t...........THANK YOU FOR PLAY THIS GAME.........");
       }
       
       guesh_time++ ;
    } while (number!=guesh_number);
    if (guesh_time<=5)
{
    printf("______________you are winner__________\n");
}
else 
{
printf("\n~~~~~~~~~~~~~~you are not winner you are try next tim.\n");
}

 }
    
   
else
{
    printf("SORRY BRO you are not intersted to play this game. \n");
}

printf("\n::::::::THIS SMALLER GAME IS CREATED BY Mr.Raja.::::::::");
getch();
return 0;
}