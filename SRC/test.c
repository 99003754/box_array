#include"main.h"
#include "unity.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


int main(int argc, char *argv[])
{
struct box b1[10];
struct box *ptr= NULL ;
ptr=(struct box*)malloc(10*sizeof(struct box));
if(ptr==NULL)
{
    printf("memoty not alllocated\n");
    return;
}
ptr=b1;
int x=0;
 
 insert(&ptr,0,1,1,1,1,1,10);
 display(&ptr,1);
 //display(&b1,x);
   UNITY_BEGIN();
  
  
  /* Close the Unity Test Framework */
  return UNITY_END();
 
 
 

 }
