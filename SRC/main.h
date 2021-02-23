#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int insert(struct box *b2,int increment,int update_id,float update_length,float update_breadth,float update_height,float update_weight,char update_color[20]);
 //int display(struct box *b2,int x);
//int insert(struct box *b2,int increment,int update_id,float update_length,float update_breadth,float update_height,float update_weight,char update_color[20]);
 //int search(struct box *b2,int x,int search_id);
 struct box{
 int unique_id;
 float length,breadth,height,weight;
 char color[20];
};
//int increment=0;
