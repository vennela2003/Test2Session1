#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter the first point\n");
  scanf("%f,%f",x1,y1);
   printf("enter the second point\n");
  scanf("%f,%f",x2,y2);
   printf("enter the third point\n");
  scanf("%f,%f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float a=(x1 * (y2-y3)+ x2* (y3- y1) +x3 * (y1-y2))*0.5;
  return fabs(a)>0.00001;
  }
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if( istriangle== 1)
    printf(" the given (%f,%f),(%f,%f) and (%f,%f) is a triangle\n",&x1,&y1,&x2,&y2,&x3,&y3);
  else
    printf(" the given (%f,%f),(%f,%f) and (%f,%f)is not  a triangle\n",&x1,&y1,&x2,&y2,&x3,&y3);
}
