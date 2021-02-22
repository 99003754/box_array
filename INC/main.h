#include<stdio.h>
#include<string.h>
 int display(struct box *b2,int x);
int insert(struct box *b2,int increment);
 int search(struct box *b2,int x,int search_id);
 struct box{
 int unique_id;
 float length,breadth,height,weight;
 char color[20];
};
