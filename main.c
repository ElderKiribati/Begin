#include <stdio.h>

int main(){
    char str[1024];//message to be encrypted
    char str1[1024];// message to be decrypted
    int a;
    int i, x;
    
    FILE *input;
    
    input = fopen ("input.txt", "r");
    
    while (feof (input) == 0){//reads message from file to be encrypted
        fscanf (input, "%s", &str);
    }
    
    printf ("\nChoose from following options: \n");
    printf ("1 = encryprtion. \n");
    printf ("2 = decryption. \n");
    scanf ("%d", &x);
    
    switch (x){
        
        case 1: //when '1' is entered, 3 is added to the ASCII value
            for (i = 0; (i <100 && str[i] != '\0'); i++)
                str[i] = str[i] + 3;
            printf ("%s\n", str);
            
            //this takes the encrypted message and stores it in a file.
            FILE *output;
             
            output = fopen ("output.txt", "w");
            
            while (feof (output) == 0){
                fprintf (output, "%s", &str);
            }
            fclose (output);
            break;
            
        case 2:/*when '2' is selected the output file containing
                the encrypted message is opened and then decrypted.*/
            FILE *output;
    
            output = fopen ("output.txt", "r");
    
            while (feof (output) == 0){
                fscanf (output, "%s", str1);
            }
            for (a = 0; (a < 100 && str1[a] != '\0'); a++)
                str1[a] = str1[a] - 3;
                printf ("%s", str1);        
            break;
            
        default:
            printf ("\nERROR, invalid input");
    }
    return 0;
}