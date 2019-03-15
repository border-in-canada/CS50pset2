#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //prompt user for string
    string s = get_string();
    if (s != NULL)
    {
        //print capital first initial
        printf("%c", toupper(s[0]));

        //print capital middle/last initial
        for (int i = 0, n = strlen(s); i < n; i++)
        {
           if (s[i] == ' ')
           {
               printf("%c", toupper(s[i + 1]));
           }
        }
        printf("\n");
    }


}