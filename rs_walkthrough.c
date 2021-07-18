#include <string.h>
#include <stdio.h>


int result(){
    
    puts("Access Granted");
    return 0;
}

int check_password(char* guess){
    char password[] = "joshua";
    int comparison_result; 
    comparison_result = strcmp(password, guess);

    if (comparison_result == 0){
        result();
    }else{
        puts("Access Denied");
        return 0;
    }
    
}

int main(){
    puts("Login: ");
    char guess[7];
    fgets(guess, 7, stdin);

    if (sizeof(guess) == 7){
        check_password(guess);
    }
    return 0;
}
