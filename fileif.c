#include <stdio.h>
#include <string.h>

int main()
{
    char choice[50];
    printf("Che me dici?\n");
    scanf(" %[^'\n']s", choice);
    for(int i = 0; i < strlen(choice); i++)
    {
        choice[i] = tolower(choice[i]);
    }
    if (strcmp(choice, "de cristo") == 0 || strcmp(choice, "vivonacrema") == 0 || strcmp(choice, " te devo di manco male") ==0)
    {
        printf("Daje so felice!\n"); 
    }
    if (strcmp(choice, "nammerda") == 0 || strcmp(choice, " sto periodo mpo così") == 0 || strcmp(choice, "bah nte so dì ") == 0)
    {
        printf("Godo coglione\n");
    }
    if (strcmp(choice, "se poteva sta peggio") == 0 )
    {
        printf("Vabbe dai nse potemo lamentà\n");
    }
    return (0);

}