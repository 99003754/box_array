 #include"main.h"
 int display(struct box *b2,int x)
 {
 int i;
 for(i=0;i<=x;i++)
 {

 printf("\n--------RECORD %d---------",i+1);
 printf("\nID: %d",b2->unique_id);
 printf("\nLength: %f",b2->length);
 printf("\nBreadth: %f",b2->breadth);
 printf("\nHeight: %f",b2->height);
 printf("\nWeight: %f",b2->weight);
 printf("\nColor: %d",b2->color);
 b2++;

 }
 }