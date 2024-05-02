#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void Dashboard(){
    printf("\nTstetst");
}


void loginFunc(){

    printf("===================================");
    printf("\n           L O G I N\n");
    printf("===================================");

    printf("\n");
    FILE* fptr;
    fptr = fopen("BankSystem/accountdata.txt", "r");
    if (fptr == NULL){
        printf("\n Broken page 404");
        
    }       
}
void loadingBar(int total){
   int i;
    printf("Processing: ");
    for (i = 0; i <= total; i++) {
        printf("%c", '$');
        fflush(stdout); 
        usleep(150000); 
    }
    printf("\n");
}
 
void accountCongrats(){
    //TODO: include the username by reading in the accdata.txt

    char loginUsername[256];
    char line[256];

    FILE* username_File = fopen("BankSystem/accountdata.txt", "r");

    if (username_File == NULL){
        printf("\nERROR!");
        printf("\nusername fetch has failed, returning to main. \n");
    
    }
}

void withDraw(){

    printf("Trasnferring Money innit\n");
    
}

void checkBalance(){

    printf("\nChecking balance\n");
}

void logIN(void){
    printf("\n\n");
        printf("=================================");
        printf("\n      BANK ACCOUNT CREATION \n");
        printf("=================================\n ");
    printf("\n ");

}

struct AccountData01{
    char fname[32];
    char lname[32];
    int number;
    int age;
};

struct AccountData02{
    char userName[32];
    char password[32];
};

void Account(void){

    char response;
    
    FILE *fptr; 
    struct AccountData01 accData;
    struct AccountData02 accSecure;

    printf("Do you wish to create an account? (Y/n):  ");
    scanf(" %c", &response);
    

    if (response == 'y' || response == 'Y') {
        system("clear");
        printf("=================================");
        printf("\n      BANK ACCOUNT CREATION \n");
        printf("=================================\n ");

    // TODO: done
    fptr = fopen("accountdata.txt", "w");

    printf("\nPlease Input all of the necessary information\n");

    printf("\n*First Name: ");
    scanf("%s", accData.fname);

    printf("\n*Last Name: ");
    scanf("%s", accData.lname);

    printf("\n*Age: ");
    scanf("%d", &accData.age);

    printf("\n*Phone number: ");
    scanf("%d", &accData.number);

    system("clear");


    printf("\n *Username: ");
    scanf("%s", accSecure.userName);

    printf("\n *Password: ");
    

    system("clear");


    //TODO: fix writing on data.txt not working. [FIXED]
    fprintf(fptr, "First name: %s\n Last name: %s\n Age: %d\n Phone number: %d\n Username: %s\n Password: %s\n", accData.fname, accData.lname, accData.age, accData.number, accSecure.userName, accSecure.password );

    fclose(fptr);

    int totalProgress = 32;

    printf("\n Please hold on... The system is processing your request.\n");
    printf("\n");
    loadingBar(totalProgress);
    printf("\n");

    accountCongrats();


    //TODO: done
    char goBack;
    printf("Do you wish login to your account? (Y/n) ");
    scanf(" %c", &goBack);
    system("clear");

    //TODO: write a return to loginFunc();
    //TODO: return func not doing anything. fix pls

    if (goBack == 'Y' || goBack == 'y'){
        loginFunc();
    } 
    
    }else{
        printf("\n Program is exiting...\n");
        exit(0);
    }
}


// main function - keep it clean. 
int main(){

    struct accData01;
    struct accSecure;

    printf("\n");
    printf("=================================== \n");
    printf("||      WELCOME TO THE SUI BANK   ||");
    printf("\n");
    printf("=================================== \n");

    printf("\n Dev: Birdabo404 \n");

    char choice;
    printf("\n");
    printf("[ A ] Create an Account. \n");
    printf("[ B ] Withdraw Your Money. \n");
    printf("[ C ] Check Your Balance. \n");
    printf("[ D ] Login. \n");
    printf("[ E ] Exit. ");

    printf("\n");
    printf("\nChoose your action: ");
    scanf("%c", &choice);

    switch(choice) {
        case 'A':
        Account();
        break;

        case 'a':
        Account();
        break;

        case 'B':
        withDraw();
        break;

        case 'C':
        checkBalance();
        break;

        case 'D':
        loginFunc();
        break;

        case 'E':
        printf("The Program is exiting, thank you!");
        exit(0);
        break;

        default:
        printf("\n Wrong Input, Please try again!");
        break;
    }

    return 0;
}