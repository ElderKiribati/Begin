#include <stdio.h>

char rotate (char x);
char restore (char x);

int main()
{
   char c;

   FILE *input;
   
   input = fopen ("input.txt", "r");
   
   while (feof (input) == 0){
       fscanf (input, "%c", &c);
       rotate (&c);
       printf ("%c", c);       
   }
   return 0;
}
char rotate (char x){
    int i;
    for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 3; //the key for encryption is 3 that is added to ASCII value
    return str[i];
}

char restore (char x){
    int i;
    char str[100];
    for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 3; //the key for encryption is 3 that is added to ASCII value
    return str[i];
}
