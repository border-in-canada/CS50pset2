#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //get key & check usage
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    int k = atoi(argv[1]);

  //prompt user for plaintext
    printf("plaintext: ");
    string p = get_string();

    printf("ciphertext: ");

    //determine char type
    for (int i = 0, n = strlen(p); i < n; i++)
    {

        if (isalpha (p[i]))
        {
            //upper cypher
            if (isupper (p[i]))
            {
                int u = p[i] - 65;
                int x = (u + k) % 26;
                int y = x + 65;
                printf("%c", y);
            }
            //lower cypher
            else if (islower (p[i]))
            {
                int l = p[i] - 97;
                int m = (l + k) % 26;
                int j = m + 97;
                printf("%c", j);
            }
        }
        //no cypher
        else
        {
            printf("%c", p[i]);
        }
    }
    //newline&return
    printf("\n");
    return 0;
}