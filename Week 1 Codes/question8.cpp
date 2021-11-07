//Program to find the max element in a pivoted array
#include <iostream>
using namespace std;

int maxElement(int *a, int l, int r){
  int m;
  while(r - l > 1){
    m = (l + r)/2;
    if(a[m] > a[m+1] && a[m] > a[m-1]) return a[m];
    else if(a[m] > a[m-1] && a[m] < a[m+1]) return maxElement(a, m, r);
    else if(a[m] > a[m+1] && a[m] < a[m-1]) return maxElement(a, l, m);
  }
  return (a[l] > a[r])? a[l] : a[r];
}

int main(){
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  int a[n];
  cout << "Enter the pivoted array: ";
  for(int i=0; i<n; i++)
    cin >> a[i];
  cout << endl << "The max element is: " << maxElement(a, 0, n-1) << endl;

  return 0;
}
