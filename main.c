s#include <stdio.h>

void Taboneia ();
void Rairairi ();

int main (){
    
    FILE *input; //calls the file containing messege to be encrypted
    
    input = fopen ("input.txt", "r");
    
    while (feof(input) != EOF){
        char c;
        fscanf (input, "%c", &c);
        
        printf ("%c", c);
    }
  
  return 0;
  
}
  
void Taboneia () {
    //encryption formula.
}

void Rairairi () {
    //decryption formula.
}
