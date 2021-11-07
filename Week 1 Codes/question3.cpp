//Program to check for majority element in a sorted array
#include <iostream>
using namespace std;

int leftPosition(int *a, int l, int r, int key){
  int m;
  if(a[0] == key) return 0;
  while(r-l > 1){
    m = (l+r)/2;
    if(a[m] >= key) r = m;
    else l = m;
  }
  return r;
}
void majorityCheck(int *a, int size, int key){
  int leftPos = leftPosition(a, 0, size, key), add;
  add = (size%2 == 0)? size/2 : (size-1)/2;
  if(a[leftPos] == key && a[leftPos+add] == key)
    cout << endl << "The entered key is the majority element." << endl;
  else cout << endl << "The entered key is not the majority element." << endl;
}

int main(){
  int n, key;
  cout << "Enter the size of the array: ";
  cin >> n;
  int a[n];
  cout << "Enter the sorted array: ";
  for(int i=0; i<n; i++)
    cin >> a[i];
  cout << "Enter the key: ";
  cin >> key;
  majorityCheck(a, n, key);

  return 1;
}
