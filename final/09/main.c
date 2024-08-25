#include <stdio.h>
#include "stglobal.h" 
char title[10]="NowQuiz"; // Game name
static int count_service = 0; // Total number of service requests
int main()
{
int service; // a variable for storing user's request
do
{
printf("\n <<<1. ID Search 2. PW search 3. Exit >>>\n");
printf(" Please enter your service number (1-3)> ");
scanf("%d", &service);
switch(service)
{
case 1: find_ID(); break; // invoke find_ID
case 2: find_PW(); // invoke find_PW
}
} while (service != 3);// if Exit is not entered, the loop continues
return 0;
}
