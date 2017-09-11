#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define PASSWORD_LENGTH 40
#define RANGE_OF_MAX 15
#define NUMBER_OF_PASSWORDS 100

// Returns length of a string!!!
int stringCharCount(char input[]) {
    int i =  0;
    while(!(input[i] == '\0')) {
        i++;
    }
    return i;
}

void passcode(void){
    /*
    const int passwordLength = 8;
    char string[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char password[20];
    srand((unsigned)time(NULL));
    int index = 0;
    int randomPosition = 0;
    int count = stringCharCount(string) - 1;
    while(index < passwordLength){
        randomPosition = rand() % count;
        password[index] = string[randomPosition];
        ++index;
    }
    printf("Password is : %s\n",password);
    printf("Length is : %d\n",stringCharCount(password));
*/
}




// Random Passwords Generator
void passwordGenerator(void) {
    char password[100] = " ";
    char str[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    srand((unsigned)time(NULL));
    int randomPosition = 0;
    int count = stringCharCount(str) - 1;
    int i;
    int mainIndex;
    printf("\t\t\t ------------------------------------\n");
    printf("\t\t\t\t   LIST OF PASSWORDS\n");
    printf("\t\t\t ------------------------------------\n");
    for(i = 1; i <= NUMBER_OF_PASSWORDS; i++) {
        for (mainIndex = 0; mainIndex < PASSWORD_LENGTH; mainIndex++) {
            randomPosition = (int)(rand() % count);
            password[mainIndex] = str[randomPosition];
            
            if (mainIndex % 5 == 0 &&  mainIndex != 0) {
                    password[mainIndex] = '-';
            }
            
           
        }
        mainIndex = 0;
        randomPosition = 0;
        printf("\t\t\t%s\n",password);
    }


}

int main(int argc, const char *argv[]){
    passwordGenerator();
}