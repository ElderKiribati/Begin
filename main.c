#include <stdio.h>

int main(){
    char str[1024];//message to be encrypted
    char str1[1024];// message to be decrypted
    int i, x;
    int k = 3; // this is the key
    
    FILE *input;
    
    input = fopen ("input.txt", "r");
    
    while (feof (input) == 0){//reads message from file
        fscanf (input, "%[^'\n']s", &str);// "%[^'\n']s", this part reads white space.
    }
    
    printf ("\nChoose from following options: \n");
    printf ("1 = encryprtion. \n");
    printf ("2 = decryption. \n");
    scanf ("%d", &x);
    
    FILE *output;
    
    output = fopen ("output.txt", "w");//opens file for a message to be stored.
    
    switch (x){
        
        case 1: //when '1' is entered, 3 is added to the ASCII value
            for (i = 0; (i <1024 && str[i] != '\0'); i++)
                str[i] = str[i] + k;
            printf ("%s\n", str);
            fprintf (output, "%s", str);//stores encrypted message in a file.
            
            break;
            
        case 2://when '2' is entered, 3 is subracted from the ASCII value.
            
            for (i = 0; (i <1024 && str[i] != '\0'); i++)
                str[i] = str[i] - k;
            printf ("%s\n", str);
            fprintf (output, "%s", str);//stores encrypted message in a file.
                
            break;
            
        default:
            printf ("\nERROR, invalid input\n");
    }
    fclose (output);
    
    output = fopen ("output.txt", "r");//reads message from file.
    
    while (feof (output) == 0){
        fscanf (output, "%[^'\n']s", &str1);// "%[^'\n']s", this part reads white space.
    }
    
    printf ("\nChoose from following options: \n");
    printf ("1 = encryprtion. \n");
    printf ("2 = decryption. \n");
    scanf ("%d", &x);
    
    switch (x){
        
        case 1: //when '1' is entered, 3 is added to the ASCII value
            for (i = 0; (i < 1024 && str1[i] != '\0'); i++)
                str1[i] = str1[i] + k;
            printf ("%s\n", str1);
            
            break;
            
        case 2://when '2' is entered 3 is subtracted from the ASCII value.
            
            for (i = 0; (i < 1024 && str1[i] != '\0'); i++)
                str1[i] = str1[i] - k;
            printf ("%s\n", str1); 
                
            break;
            
        default:
            printf ("\nERROR, invalid input\n");
    }
    return 0;
}