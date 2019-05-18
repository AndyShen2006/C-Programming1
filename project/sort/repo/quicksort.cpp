#include <iostream>
#include <fstream>
#include <ctime>
#include <cstring>
#define MAXCOUNT 1000000

using namespace std;

int pivokey,pivoloc;

int Partition(int a[], int low, int high) {
  int temp = a[low];
  pivokey = a[low];
  while (low < high) {
    while (low < high && a[high] >= pivokey) --high;
    a[low] = a[high];
    while (low < high && a[low] <= pivokey) ++low;
    a[high] = a[low];
  }
  a[low] = temp;
  return low;
}

void QSort(int a[], int low, int high) {
  if(low < high){
    pivoloc = Partition(a, low, high);
    QSort(a, low, pivoloc - 1);
    QSort(a, pivoloc + 1, high);
  }
}

void QuickSort(int a[], int count) {
  QSort(a, 0, count);
}

int main(int argc, char **argv)
{
  //not Main code
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

  const clock_t beginTime = clock();
  //Main code
  QuickSort(a, count);
  
  double seconds = (double)(clock() - beginTime)/CLOCKS_PER_SEC;

  for(i = 0; i < count; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  cout << "Total time is " << seconds << " sec." << endl;
  return 0;
}
  
