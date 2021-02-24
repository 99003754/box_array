#include"main.h"
int insert(struct box *b2,int increment,int update_id,float update_length,float update_breadth,float update_height,float update_weight,int update_color)
{
 if(increment==0)
 {
 }
 else
 {
  b2+=increment;
 }
 b2->unique_id=update_id;
 b2->length=update_length;
 b2->breadth=update_breadth;
 b2->height=update_height;
 b2->weight=update_weight;
 b2->color=update_color;
 increment++;
 //return 1;
}
