#include <stdio.h>

void Taboneia ();
void Rairairi ();

int main (){
    
    FILE *input; //calls the file containing messege to be encrypted
    
    input = fopen ("input.txt", "r");
    
    while (feof(input) == 0){
        char c;
        fscanf (input, "%c", &c);
        
        printf ("%c", c);
    }
  
  return 0;
  
}
  
//encryption function
void Taboneia () {

}

//decryption function
void Rairairi () {
    
}

