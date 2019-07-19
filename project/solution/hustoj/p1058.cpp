#include <cstdio>
#include <cstring>
#define SIZE 10

using namespace std;

int htod(char h){
  if('0' <= h && h <= '9'){
    return h-'0';
  } else if('A' <= h && h <= 'F'){
    return h-'A'+10;
  } else if('a' <= h && h <= 'f'){
    return h-'a'+10;
  } else{
    return -1;
  }
}

int chtod(int high,int low){
  high = htod(high)*16;
  low = htod(low);
  return high+low;
}

int main(){
  char a[SIZE];
  while(scanf("%s",a) != EOF){
    if(strlen(a)==7)  printf("RGB(%d,%d,%d)\n",chtod(a[1],a[2]),chtod(a[3],a[4]),chtod(a[5],a[6]));
  }
  return 0;
}
