#include <stdio.h>
void find_PW(); void find_ID();
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
void find_ID()
{
static int count_ID=0; // static local variable
count_ID++; // increase count_ID by 1
count_service++; // increase total counter by
printf("\n Your are visiting the %s game.\n",title);
printf("\n Total number of requests: %d,the number of requests for ID_search: %d.\n",
count_service, count_ID);
}
void find_PW()
{
static int count_PW=0; // static local variable
count_PW++; // increase count_PW by 1
count_service++; // increase total counter by
printf("\n Your are visiting the %s game.\n",title);
printf("\n Total number of requests: %d,the number of requests for PW_search: %d.\n",
count_service, count_PW);
}
