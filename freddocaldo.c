#include <stdio.h>
int main()
{
int gradi;
printf("Digita la temperatura: ");
scanf("%d", &gradi);
if (gradi>25) {
printf("Fa caldo");
}
else if (gradi>=10)
{
printf("Né caldo, né freddo");
}
else if (gradi<10)
{
printf("Fa freddo");
}
return 0;
}