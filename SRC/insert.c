#include"main.h"
int insert(struct box *b2)
{
 int n,i;
printf("1");
 b2++;
 b2->unique_id=1;
 b2->length=1;
 b2->breadth=1;
 b2->height=1;
 b2->weight=1;
 strcpy(b2->color,"abcdefgh");
 n=1;
 return n;
}