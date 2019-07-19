#include <cstdio>
#include <cmath>
using namespace std;

bool isPrime(int ip)
{
  int sip = sqrt(ip)+1;
  for(int i=2;i < sip;i++){
    if(ip % i == 0){
      return false;
    }
  }
  return true;
}

int main()
{
  int m,n;
  while(scanf("%d%d",&m,&n) != EOF){
    for(int j=m;j<=n;j++){
      if(isPrime(j) == true && isPrime(j+2) == true)  printf("%d %d\n",j,j+2);
    }
  }
  return 0;
}
