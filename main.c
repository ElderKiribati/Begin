#include <stdio.h>

char Taboneia (int x);
char Rairairi ();

int main (){
    
    FILE *input; //calls the file containing messege to be encrypted
    
    char c;
    
    input = fopen ("input.txt", "r");
    
    char T;
    
    while (feof(input) == 0){
        
        fscanf (input, "%c", &c);
        
        T = Taboneia (c);
        
        printf ("%c %c\n", c, T);

    }
    return 0;
}
  
//encryption function
char Taboneia (int x) {
    FILE *input;
    
    char t = 0; 
    
    input = fopen ("input.txt", "r");
    
    while (feof(input) ==0 ){
       
        fscanf (input, "%c", &t);
        
    
    }
    return t;
    
}

//decryption function
char Rairairi () {
    return 0;
}

