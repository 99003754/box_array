
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
extern int increment;

 struct box{
 int unique_id;
 float length,breadth,height,weight;
 int color;
};

int insert(struct box *b2,int uid,float update_length,float update_breadth,float update_height,float update_weight,int update_color);
int search(struct box *b2,int search_id);


//