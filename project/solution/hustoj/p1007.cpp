#include <cstdio>
#include <cmath>
#define DEBUG 0
using namespace std;

double heron(int a,int b,int c)
{
  double p = (a+b+c)/2.0;
  return sqrt(p*(p-a)*(p-b)*(p-c));
}

bool isTriangle(int a,int b,int c)
{
  return (a+b>c && b+c>a && c+a>b);
}

int main()
{
  int a,b,c;
#if DEBUG
  a=1,b=1,c=3;
  printf("%d",isTriangle(a,b,c));
#else
  while(scanf("%d%d%d",&a,&b,&c) != EOF){
    if (isTriangle(a,b,c))
      printf("%.2f\n",heron(a,b,c));
    else
      printf("Wrong\n");
  }
#endif
  return 0;
}
