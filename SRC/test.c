#include"main.h"
#include "unity.h"
struct box b1[10];
struct box *ptr= NULL;
int increment;
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_insert1(void)
{

    TEST_ASSERT_EQUAL(1,insert(&ptr,3,2,5,3,2,11));

}

void test_insert3(void)
{
 
    TEST_ASSERT_EQUAL(1,insert(&ptr,4,4,5,3,2,12));
}
void test_insert4(void)
{

    TEST_ASSERT_EQUAL(1,insert(&ptr,5,4,5,3,2,12));
}
void test_insert5(void)
{

    TEST_ASSERT_EQUAL(1,insert(&ptr,6,4,5,3,2,12));
}
void test_search(void)
{
    TEST_ASSERT_EQUAL(1,search(&ptr,4));

}

int main(int argc, char *argv[])
{
 
increment=0;
ptr=(struct box*)malloc(10*sizeof(struct box));
if(ptr==NULL)
{
    printf("memoty not alllocated\n");
    return;
}
ptr=b1;

 
 //insert(&ptr,0,1,1,1,1,1,10);
 //display(&ptr,1);
 
   UNITY_BEGIN();
  
  RUN_TEST(test_insert1);
  //RUN_TEST(test_insert2);
  RUN_TEST(test_insert3);
  RUN_TEST(test_insert4);
  RUN_TEST(test_insert5);


  RUN_TEST(test_search);

  //display(&ptr,increment);
  /* Close the Unity Test Framework */
  return UNITY_END();
 
 
 

 }
