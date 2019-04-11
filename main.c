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

     int m;
     //int K = 0;
     //int T;
        FILE *file;
        file = fopen("input.txt","r");
        while ((m=fgetc(file)) != EOF)
        //T = m + K;
        printf("%c", m);
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



