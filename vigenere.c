#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //Check argument usage
    if (argc != 2)
    {
        printf("Usage: ./vigenere j\n");
        return 1;
    }

    //Check for alphanumeric-only key values
    string k = argv[1];

    for (int i = 0, n = strlen(k); i < n; i++)
    {
        if (!isalpha(k[i]))
        {
            printf("Usage: Alphabetic arguments only!\n");
            return 1;
        }
    }

  //prompt user for plaintext
    printf("plaintext: ");
    string p = get_string();

    printf("ciphertext: ");

    //determine char type
    int a = 0;
    int b = strlen(k);
    for (int i = 0, n = strlen(p); i < n; i++)
    {

        if (isalpha (p[i]))
        {
            if (a < b)
            {
                k[a] = toupper(k[a]);
                int c = k[a];

                if (isupper (p[i]))
                {
                int key = c - 65;
                int u = p[i] - 65;
                int x = (u + key) % 26;
                int y = x + 65;
                printf("%c", y);
                }

                //lower cipher
                else if (islower (p[i]))
                {
                int key = c - 65;
                int l = p[i] - 97;
                int m = (l + key) % 26;
                int d = m + 97;
                printf("%c", d);
                }
                a++;

            }
            else if (a >= b)
            {

                int f = a % b;
                k[f] = toupper(k[f]);
                int c = k[f];

                if (isupper (p[i]))
                {
                int key = c - 65;
                int u = p[i] - 65;
                int x = (u + key) % 26;
                int y = x + 65;
                printf("%c", y);
                }

                //lower cipher
                else if (islower (p[i]))
                {
                int key = c - 65;
                int l = p[i] - 97;
                int m = (l + key) % 26;
                int d = m + 97;
                printf("%c", d);
                }
                a++;
            }

        }
        //no cipher
        else
        {
            printf("%c", p[i]);
        }
    }
    //newline&return
    printf("\n");
    return 0;
}