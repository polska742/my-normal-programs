#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(int argc, string argv[])
{ 
   int n,k=0;
   do
   {
        if (argc!=2)
        {
            printf("Not Valid!");
            return 1;
        }
        else
        {
            k = atoi(argv[1]);
            break;
        }
   }
   while (1);
   string a = get_string("Plain Text : ");
    n = strlen(a);
        printf("Cipher Text : ");
        for (int i = 0; i < n; i++)
        {
            if (isalpha(a[i]))
            {
                if (isupper(a[i]))
                {
                    printf("%c",(((a[i]+k-65)%26)+65));
                }
                if (islower(a[i]))
                {
                    printf("%c",(((a[i]+k-97)%26)+97));
                }
            }
            else 
            {
                printf("%c",a[i]);
            }
        }
    printf("\n");
}
