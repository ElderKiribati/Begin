#include <stdio.h>

char rotate ();

int main()
{
    char c;

    FILE *input;
   
    input = fopen ("input.txt", "r");
   
    while (feof (input) == 0){
        fscanf (input, "%c", &c);
        
        printf ("%c %c\n", c, rotate());
    } 
   return 0;
}
char rotate (){ //encryption
    char c;

    FILE *input;
   
    input = fopen ("input.txt", "r");
   
    while (feof (input) == 0){
        fscanf (input, "%c", &c);
   }
   c = c + 3;//adds 1 to ASCII value
   return c; 
}
