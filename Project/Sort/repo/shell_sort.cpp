#include <iostream>
#include <fstream>
#include <ctime>
#include <cstring>

using namespace std;

#define MAXCOUNT 1000000

void shellInsert(int a[], int count, int dk)
{
  for(int i = dk; i < count; i++) {
    if(a[i] < a[i - dk]) {
      int temp = a[i];
      int j = i - dk;
      while(j >= 0 && temp < a[j]) { // current one < checked one
        a[j+dk] = a[j];  // move checked one right
        j -=dk;
      }
      a[j+dk] = temp;
    }
  }
}

void shellSort(int a[], int count, int delta[], int t)
{
  for(int i = 0; i < t; i++) {
    shellInsert(a, count, delta[i]);
  }
}

int main(int argc, char **argv)
{
  char filename[100];
  int a[MAXCOUNT], count;

  if (argc == 1) {
    cout << "Enter data file name:";
    cin >> filename;
  } else {
    strcpy(filename, argv[1]);
    if (argc == 2) {
      cout << "How many numbers you want to read:";
      cin >> count;
    } else if (argc == 3) {
      count = atoi(argv[2]);
    }
  }
  
  if (count > MAXCOUNT) {
    cout << "max count " << MAXCOUNT << ", exit!";
    exit(1);
  }
  
  ifstream infile;
  infile.open(filename);
  int i;
  for(i = 0; i < count; i++) {
    infile >> a[i];
  }

  int delta[7] = {127, 63, 31, 15, 7, 3, 1}; 
  const clock_t beginTime = clock();
  
  shellSort(a, count, delta, 7);

  double seconds = (double)(clock() - beginTime)/CLOCKS_PER_SEC;

  for(i = 0; i < count; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  cout << "Total time is " << seconds << " sec." << endl;
  return 0;
}
  
