//Program to find the minimum length unsorted subarray
#include <iostream>
using namespace std;

void findSubArray(int *a, int size){
  int startIndex = 0, endIndex = size - 1, max, min, i;

  for(startIndex = 0; startIndex < size; startIndex++)
    if(a[startIndex] > a[startIndex + 1]) break;
  for(endIndex = size - 1; endIndex > 0; endIndex--)
    if(a[endIndex] < a[endIndex - 1]) break;

  max = min = a[startIndex];
  for(i = startIndex; i <= endIndex; i++){
    if(a[i] > max) max = a[i];
    if(a[i] < min) min = a[i];
  }

  for(i = 0; i < startIndex; i++)
    if(a[i] > min) startIndex = i;
  for(i = endIndex + 1; i < size; i++)
    if(a[i] < max) endIndex = i;

  cout << endl << "The minimum length subarray to be sorted is between indices "
      << startIndex << " and " << endIndex << endl;
}

int main(){
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  int a[n];
  cout << "Enter the array: ";
  for(int i=0; i<n; i++)
    cin >> a[i];
  findSubArray(a, n);

  return 0;
}
