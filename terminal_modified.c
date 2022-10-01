#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	char str[100],name[100],name1[100],us1[10];;
	printf("Enter the username(without spaces):");
	scanf("%s",name);
	strcpy(name1,name);
	label: printf("\n\n\t\t\tWelcome to OS of ASH!!!\n\n\nLogging in as %s..... \n.\n.\n.\nSuccessfully Logined as %s!\n\n\n\t\t-->ASH Terminal Will be Appearing Below!<-- \n\n",name,name);
	printf(" __________________________________________________________________________________________________________________________________________\n|__________________________________________________________________________________________________________________________________________|\n\n\t\t\t\t \t\t\t\tWelcome to ASH TERMINAL!!!\n __________________________________________________________________________________________________________________________________________\n|__________________________________________________________________________________________________________________________________________|\n\n\n");
	do
 	{
	printf("-----%s@ashOS$: ",name);
	scanf("%s", str);
	if(strcmp(str,"whoami")==0)
		{
			printf("\t->You are %s!\n",name);
		}
		else if(strcmp(str,"ls")==0)
		{
			printf("\t->There is nothing here\n");
		}
		else if(strcmp(str,"exit")==0)
		{
			printf("\t->Okay Thank you %s!\n\tSee you in my next janmam!\n\n\n",name);
			exit(0);
		}
		else if(strcmp(str,"whoisash")==0)
		{
			printf("\t->Ash is the creater of this funny program!!!\n");
		}
		else if(strcmp(str,"adduser")==0)
		{
			printf("\t->Name: ");
			scanf("%s",us1);
			printf("\n\t\t\t **** User %s is created successfully ****\n",us1);
		}
		else if(strcmp(str,"helpcom")==0)
		{
			printf("->\n\n \tls: Shows contents\n\n \twhoami: Shows name of current user\n\n \tadduser: Create new user\n\n \tswitchuser: Switch to another user\n\n \tresetuser: Reset to default user\n\n \tclear: Clear screen\n\n \tversion: Shows terminal version \n\n \trestart: Restart terminal \n\n \texit: Exit from terminal\n\n\n Enter a command and enjoy your session!!!\n\n");
		}
		else if(strcmp(str,"clear")==0)
  		{
			printf("\e[1;1H\e[2J");
		}
		else if(strcmp(str,"version")==0)
		{
			printf("\t->AshOS S VERSION 1.0\n\t\t->Created By R A for fun!!!\n\t\tProgramming Language Used is C\n");
		}
		else if(strcmp(str,"restart")==0)
		{
			printf("\e[1;1H\e[2J");
			printf("\n.....Terminal Cleared.....\n\n.....Restarting Ash.....\n\n");
			goto label;
		}
		else if(strcmp(str,"switchuser")==0)
		{
		     if(us1!="\0"){
			strcpy(name,us1);
			printf("User switched to %s\n",us1);}
		     else
		     {
		     	printf("No user found");
		     }
		}
		else if(strcmp(str,"resetuser")==0)
		{
		     strcpy(name,name1);
		     printf("User set to %s\n",name1);
		}
		else
		{
			printf("\t\tWrong Command!!!!!!!\n\t\t 'helpcom' to list the available commands \n");
		}
 }while(1);
}
