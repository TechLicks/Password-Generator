#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Global Variables 
int NUMBER_OF_PASSWORDS = 0;
int PASSWORD_LENGTH = 0;


// Returns length of a string!!!
int stringCharCount(char input[]) {
    int i =  0;
    while(!(input[i] == '\0')) {
        i++;
    }
    return i;
}

// Animation

void transitionAnimation(void){
    int i;
    printf("\n");
    printf("\t\t\t\t___________________\n\n");
    for(i=0;i<=100;i++){
        printf("\r \t\t\t\t  Generating: %d",i);
        Sleep(10);
    }
    printf("\n\t\t\t\t___________________\n");
    putchar(10);
    Sleep(1000);
}

// Random Passwords Generator
void passwordGenerator(int NUMBER_OF_PASSWORDS,int PASSWORD_LENGTH) {
    char password[100] = " ";
    char str[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    srand((unsigned)time(NULL));
    int randomPosition = 0;
    int count = stringCharCount(str) - 1;
    int i;
    int mainIndex;
    for(i = 1; i <= NUMBER_OF_PASSWORDS; i++) {
        for (mainIndex = 0; mainIndex < PASSWORD_LENGTH; mainIndex++) {
            randomPosition = (int)(rand() % count);
            password[mainIndex] = str[randomPosition];   
        }
        mainIndex = 0;
        randomPosition = 0;
        printf("\t\t\t\t%s\n",password);
    }


}


int main(int argc, const char *argv[]){
    system("cls");
    printf("\t\tHow Many Passwords You want to generate: ");
    scanf("%d",&NUMBER_OF_PASSWORDS);
    fflush(stdin);
    printf("\t\tLength Of the Password: ");
    scanf("%d",&PASSWORD_LENGTH);
    if (PASSWORD_LENGTH > 50) {
        printf("\n\t\t Length Should Not be Greater than 50\n");
        exit(0);
    }
    transitionAnimation();
    fflush(stdin);
    passwordGenerator(NUMBER_OF_PASSWORDS, PASSWORD_LENGTH);
}
