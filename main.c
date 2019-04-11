#include <stdio.h>

char Wareware ();
char Taboneia ();
char Rairairi ();

int main (){
    
    Wareware();
    return 0;
}

  
//File read function
char Wareware () {

     char ch;
        FILE *file;
        file = fopen("input.txt","r");
        while ((ch=fgetc(file)) != EOF)
        printf("%c", ch);
        return 0;
        }

// encryption function
char Taboneia (){

    return 0;
} 

//decryption function
char Rairairi () {
    return 0;
}



