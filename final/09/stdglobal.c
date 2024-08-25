#include <stdio.h>
#include "stglobal.h"
static int count_service = 0;
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
