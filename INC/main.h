#include<stdio.h>
#include<string.h>
#include<stdlib.h>
extern int increment;
 //int display(struct box *b2,int x);
//int insert(struct box *b2,int increment,int update_id,float update_length,float update_breadth,float update_height,float update_weight,char update_color[20]);
 //int search(struct box *b2,int x,int search_id);
 //float max_height(struct box *ptr);
 struct box{
 int unique_id;
 float length,breadth,height,weight;
 int color;
};

int insert(struct box *b2,int update_id,float update_length,float update_breadth,float update_height,float update_weight,int update_color);
int search(struct box *b2,int search_id);


//