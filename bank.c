#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



void logFunc(){

    printf("welcome lol loggein success!");
}

void loadingBar(int total){
   int i;
    printf("Processing: ");
    for (i = 0; i <= total; i++) {
        printf("%c ", '$');
        fflush(stdout); 
        usleep(150000); 
    }
    printf("\n");
}

void accountCreated(){

    int totalProgress = 32;

    printf("\n Please hold on... The system is processing your request.\n");
    printf("\n");
    loadingBar(totalProgress);

    }

char accCongrats(){

    //TODO: include the username by reading in the accdata.txt
    printf("\nCongrats, You have succesfully created an account! \n" );
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
    scanf("%s", accSecure.password);
    system("clear");


    //TODO: fix writing on data.txt not working.
    fprintf(fptr, sizeof(accData), 1, fptr);

    fclose(fptr);

    //TODO: Write the data into a txt file after closing the fptry

    accountCreated(); //TODO: Improve func
    accCongrats();

    } else{
        printf("\n Program is exiting...\n");
        exit(0);
    }

    //TODO: done

    char goBack;
    printf("Do you wish login to your account? (Y/n) ");
    scanf(" %c", &goBack);

    //TODO: write a return to logFunc();
    //TODO: return func not doing anything. fix pls
    if (goBack == 'Y' || 'y'){
        return;
    }

}


int main(){

    struct accData01;
    struct accSecure;

    printf("\n");
    printf("=================================== \n");
    printf("      WELCOME TO THE SUI BANK");
    printf("\n");
    printf("=================================== \n");

    printf("\n Dev: Birdabo404 \n");

    char choice;
    printf("\n");
    printf("[ A ] Create Account. \n");
    printf("[ B ] Withdraw Money. \n");
    printf("[ C ] Check Balance. \n");
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
        logIN();
        break;
        //TODO: create more function to call using switchcase

        default:
        printf("\n Wrong Input, Try again!");
        break;
    }

    return 0;
}