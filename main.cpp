
#include<stdio.h>
 main()
{
 int c=6;
 int *b; b=&c; /// variables use in the demonstration;
 int *a=(int*)new int; /// 'a' is a pointer;
 int **a=(int**)new int;/// 'a' is a double pointer;
 a=&b;
 printf("%d %d",**a,&b); /// value at c= **a
 return 0;
}
