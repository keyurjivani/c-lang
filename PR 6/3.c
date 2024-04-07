
#include <stdio.h>
#include <string.h>
int main()
{
    int i, A = 0, a = 0, d = 0, e =0;
    char n[20];

    printf("Password Must be More Than 6 word\n");
    printf("Enter One Capital Character...\nEnter One or More Small Character...\nEnter Onr or More Digit...\n\n ");

    printf("Create Your Password :");
    gets(n);

    if (strlen(n) >= 6)
    {
        for (i = 0; i <= strlen(n); i++)
        {
            if (n[i] >= 65 && n[i] <= 90)

                A = 1;

            else if (n[i] >= 97 && n[i] <= 122)

                a = 1;

            else if (n[i] >= 48 && n[i] <= 57)

                d = 1;
                
            else if (n[i] == 64)
            	 
            	e = 1;
        }
        if (A == 1 && a == 1 && d == 1 && e == 1 )

            printf("Mostly Strong Password.\n");

        else if (a == 1)

            printf("Very Weak Password.\n");

        else if (d == 1)

            printf("Enter Character and Digit.\n");
            
        else if (e == 1)
        
        	printf("Enter Password for Rule");

        else 

            printf("Not Valid Password.\n");
    }
}
