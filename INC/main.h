#include<stdio.h>
#include<string.h>
 int display(struct box *b2,int x);
 int insert(struct box *b2);
 struct box{
 int unique_id;
 float length,breadth,height,weight;
 char color[20];
};