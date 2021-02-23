#include"main.h"
#include "unity.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


int main()
{
struct box b1[10];
struct box *ptr= NULL ;
ptr=(struct box*)malloc(10*sizeof(struct box));
ptr=b1;
 int x=0;
 
 insert(&b1,x,1,1,1,1,1,"red");
 //display(&b1,x);
   UNITY_BEGIN();
  
  
  /* Close the Unity Test Framework */
  return UNITY_END();
 
 
 

 }
