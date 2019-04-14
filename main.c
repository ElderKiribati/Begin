#include <stdio.h>

char rotate ();
char restore ();

int main(){
   char first, second;
   int x;
   
   FILE *input;
   
   input = fopen("input.txt", "r");
   
   printf ("%c", input);
   scan ("%c", &input);

   printf ("\nPlease choose following options:\n");
   printf ("1 = Encrypt the string.\n");
   printf ("2 = Decrypt the string.\n");
   scanf ("%d", &x);
   
  

   //using switch case statements
   switch(x){
   case 1:
        first = rotate ();
    printf ("\nEncrypted string: %s\n", first);
    break;

   case 2:
        second = restore();
      printf ("\nDecrypted string: %s\n", second);
      break;

   default:
      printf ("\nError\n");
   }
   
   
   printf ("\nPlease choose following options:\n");
   printf ("1 = Encrypt the string.\n");
   printf ("2 = Decrypt the string.\n");
   scanf ("%d", &x);
   
   switch(x){
   case 1:
        first = rotate ();
    printf ("\nEncrypted string: %s\n", first);
    break;

   case 2:
        second = restore();
      printf ("\nDecrypted string: %s\n", second);
      break;

   default:
      printf ("\nError\n");
   }
   return 0;
}

char rotate (){
    int i;
    char message[1024];
        for (i = 0; (i < 100 && message[i] != NULL); i++)
            message[i] = message[i] + 3; //the key for encryption is 3 that is added to ASCII value
        return message[i];
}

char restore (){
    int a;
    char message[1024];
        for (a = 0; (a < 100 && message[a] != NULL); a++)
            message[a] = message[a] - 3; //the key for encryption is 3 that is subtracted to ASCII value
        return message[a];
}
