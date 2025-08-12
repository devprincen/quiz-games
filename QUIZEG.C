#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void Wellcome();
void homePage();
void Startgame();
void CreateAc();
void LoginAc();
void StartNew();
void Score();
void Instructions();

int main(){
	Wellcome();
	homePage();

	return 0;
}

void Wellcome(){
	int select;
	clrscr();
	printf("\t\t\t---- Wellcome to Quize Game ----\n");
	printf("Enter 1 - HomePage \n");
	printf("Enter 2 - Exit the Page \n");
	scanf("%d", &select);

	switch(select){
	case 1:
	   homePage();
	   break;

	case 2:
	   exit(0);
	   break;
	default:
	   printf("Please select any one of both number you enter is nor valid\n");
	   break;
	}

	getch();
}

void homePage(){
	int choose;

	clrscr();

	printf("\t\t\t\t> > Home Page < < \n");

	printf(" 1 - Create a New Account \n");
	printf(" 2 - Login Account \n");
	printf(" 3 - Start New Quize \n");
	printf(" 4 - View Previous Scores \n");
	printf(" 5 - Instructions (How to Play) \n");
	printf(" 6 - Exit \n");
	scanf("%d", &choose);
	
     	switch(choose){
	case 1:
	   CreateAc();
	   break;

	case 2:
           LoginAc();
	   break;
	   
	case 3:
           StartNew();
	   break;
	   
	case 4:
           Score();
	   break;
	   
	case 5:
           Instructions();
	   break;
	   
	case 6:
           exit(0);
	   break;
	   
	default:
	   printf("Please select any one of both number you enter is nor valid\n");
	   break;
	}
	
	getch();
	
}

void CreateAc(){

	clrscr();
	
	printf("\t\t\t\t> > Create Account < < \n");
	
	getch();

}

void LoginAc(){

	clrscr();
	
	printf("\t\t\t\t> > Login Account < < \n");
	
	getch();

}

void StartNew(){

	clrscr();
	
	printf("\t\t\t\t> > View Previous Scores < < \n");
	
	getch();

}

void Instructions(){

	clrscr();
	
	printf("\t\t\t\t> > Start New Quize < < \n");
	
	getch();

}

void Score(){

	clrscr();
	
	printf("\t\t\t\t> > Instructions (How to Play) < < \n");
	
	getch();

}

