//Program to find the transition point in an infinite array
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector<int> l;

int binarySearch(int f, int r){
  while(r-f > 1){
    int m = (f+r)/2;
    if(l[m] == 1 && l[m-1] == 0) return m;
    else if(l[m] == 1 && l[m-1] == 1) r = m;
    else f = m;
  }
  return r;
}

int transitionPoint(){
  if(l[0] == 1) return 0;
  if(l[0] == 0 && l[1] == 1) return 1;
  int power;
  for(power = 1;; power++)
    if(l[pow(2, power)] == 1)
      break;
  binarySearch(pow(2, power-1), pow(2, power));
}

int main(){
  int data;
  cout << "Enter the array (enter -1 to stop):" << endl;
  while(1){
    cin >> data;
    if(data == -1) break;
    l.push_back(data);
  }

  cout << endl << "The first occurance of 1 is at index: " << transitionPoint() << endl;

  return 1;
}
