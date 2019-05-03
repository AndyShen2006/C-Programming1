#include <cstdio>

using namespace std;

int main()
{
  int a,b,k;
  int i = 0;
  scanf("%d",&k);
  while(scanf("%d%d",&a,&b) != EOF){
    if(i == k)  break;
    printf("%d\n",a+b);
    i++;
  }
  return 0;
}
