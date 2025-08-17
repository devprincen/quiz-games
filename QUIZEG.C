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
        CreateAc();

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
        FILE *file;
	char name[20], email[100], password[50], lg;
	int age;	
	clrscr();
	
	file = fopen("data.csv", "w");
	
	printf("\t\t\t\t> > Create Account < < \n");
	
	if(file == NULL){ 
	   printf("\t\t\t\t File is not find\n\n\n\n\n");	
	   return;
	}
	
	printf("Name -- ");
	scanf("%s", name);
	fprintf(file, "Name: %s\n", name);
	printf("\n");
	
	printf("Password -- ");
	scanf("%s", password);
	fprintf(file, "Password: %s\n", password);
	printf("\n");

	
	do{
	    printf("Email -- ");
 	    scanf(" %s", email);    
	if(strchr(email, '@') && strstr(email, ".com")){
		break;
	}else{
	   printf("\n\t\tInvalid email please enter right email\n");
	  }
	} while(1);
	     printf("\n");
          	fprintf(file, "Email: %s\n", email);
	
	printf("Age -- ");
	scanf("%d", &age);
	fprintf(file, "Age: %d\n", age);
	printf("\n\n");
	
	fclose(file);
	
	printf("Your account has been created successfully, please login.\n\n");
	printf("If you want to login, click Y/y\n\n");
	printf("If you want exit the program click no\n\n");
	scanf(" %c", &lg);
	if(lg == 'Y' || lg == 'y'){
	     LoginAc();
	} else{
	     exit(0);
	}
	
	getch();

}

void LoginAc(){
	FILE* file;
	char name[20], password[50];
	char storedName[20], storedPass[20];
	clrscr();
	
	file = fopen("data.csv", "r");
		
	printf("\t\t\t\t> > Login Account < < \n");
	
	if(file == NULL){ 
	   printf("\t\t\t\t File is not find\n\n\n\n\n");	
	   return;
	}
	
	printf("Enter Name: -- ");
	scanf("%s", name);
	printf("\n");
	
	printf("Enter Password: -- \n");
	scanf("%s", password);
	printf("\n");
	
	fscanf(file, "Name: %s\n", storedName);
	fscanf(file, "Password: %s\n", storedPass);
	
	if(strcmp(name, storedName) == 0 && strcmp(password, storedPass) == 0){
	   printf("\t\t\t\t Name and Password is match\n");
	}else{
	   printf("\t\t\t\t Name and Password is not match please try again\n");
	}
	
	fclose(file);
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

