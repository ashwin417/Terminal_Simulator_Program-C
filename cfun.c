#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char str[100];
	label: printf("\n\n\t\t\tWelcome to OS of ASH!!!\n\n\nLogging in as Fool..... \n.\n.\n.\nSuccessfully Logined as Fool!\n\n\n\t\t-->ASH Terminal Will be Appearing Below!<-- \n\n");
	printf(" __________________________________________________________________________________________________________________________________________\n|__________________________________________________________________________________________________________________________________________|\n\t\t\t\t \t\t\t\tWelcome to ASH TERMINAL!!!\n __________________________________________________________________________________________________________________________________________\n|__________________________________________________________________________________________________________________________________________|\n\n\n");
	do
 	{
	printf("-----$ ");
	scanf("%s", str);
	if(strcmp(str,"whoami")==0)
		{
			printf("\t->You are Fool!\n");
		}
		else if(strcmp(str,"ls")==0)
		{
			printf("\t->There is nothing here\n");
		}
		else if(strcmp(str,"exit")==0)
		{
			printf("\t->Okay Thank you Mahan!\n\tSee you in my next janmam!\n\n\n");
			exit(0);
		}
		else if(strcmp(str,"whoisash")==0)
		{
			printf("\t->Ash is the creater of this funny program!!!\n");
		}
		else if(strcmp(str,"adduser")==0)
		{
			printf("\t->Name: ");
			char us1[10];
			scanf("%s",us1);
			printf("\n\t\t\t **** User %s is created successfully ****\n",us1);
		}
		else if(strcmp(str,"helpcom")==0)
		{
			printf("->\n\n \tls\n \twhoami\n \tadduser\n \tclear\n \tVersion \n \trestart \n \texit\n Enter a command and enjoy your session!!!\n\n");
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
		else
		{
			printf("\t\tWrong Command!!!!!!!\n\t\t 'helpcom' to list the commands \n");
		}
 }while(1);
}
