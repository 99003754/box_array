#include"main.h"
int main()
{
int i;


 struct box b1[10];
 struct box *ptr= NULL ;
 ptr=(struct box*)malloc(10*sizeof(struct box));
 ptr=b1;
 ptr->unique_id=1;
 ptr->length=1;
 ptr->breadth=1;
 ptr->height=1;
 ptr->weight=1;
 strcpy(ptr->color,"abcd");
 int x=0;
 
 x=insert(&b1,x);
 display(&b1,x);
 
 

 }