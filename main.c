#include <stdio.h>

//char restore ();

int main(){
    char str[] = "hello";//message to be encrypted
    int i, x;
    
    
    printf ("\nChoose from following options: \n");
    printf ("1 = encryprtion. \n");
    printf ("2 = decryption. \n");
    scanf ("%d", &x);
    
    switch (x){
        case 1: //when '1' is entered, 3 is added to the ASCII value
            for (i = 0; (i <100 && str[i] != '\0'); i++)
                str[i] = str[i] + 3;
            printf ("%s\n", str);
            
            /*//this take the encrypted message and stores it in a file.
            FILE *output;
             
            
            output = fopen ("output.txt", "w");
            
            while (feof (output) != '\0'){
                fprintf (output, "%s", str);
            }
            fclose (output);*/
            
            break;
        case 2://when '2' is selected, 3 is subtracted from the ASCII value.
            for (i = 0; (i <100 && str[i] != '\0'); i++)
                str[i] = str[i] - 3;
            printf ("%s\n", str);
            //restore ();        
            break;
        default:
            printf ("\nERROR, invalid input");
    }
    return 0;
}

/*//this function reads the file with the encrypted message and decrypts it.
char restore (){
 
    char r[1024];
    int a;
    FILE *output;
    
    output = fopen ("output.txt", "r");
    
    while (feof (output) != '\0'){
        fscanf (output, "%s", r);
    }
    for (a = 0; (a < 100 && r[a] != '\0'); a++)
        r[a] = r[a] - 3;
        printf ("%s", r);
    return 0;
}*/