#include"main.h"
int insert(struct box *b2,int increment,int update_id,float update_length,float upate_breadth,float update_height,float update_weight,char update_color[20])
{
 int n,i;
printf("1");
 b2++;
 b2->unique_id=update_id;
 b2->length=update_length;
 b2->breadth=update_breadth;
 b2->height=update_height;
 b2->weight=update_weight;
 strcpy(b2->color,update_color);
 increment++;
 return increment;
}
