//Program to find the median from 2 sorted arrays
#include <iostream>
using namespace std;

void mergeArrays(int *a, int *b, int *c, int size){
  int i = 0, j = 0, k = 0;
  while(a[i] != NULL && b[j] != NULL){
    if(a[i] < b[j]){
      c[k] = a[i];
      i++;
    }else if(b[j] < a[i]){
      c[k] = b[j];
      j++;
    }else{
      c[k] = c[k+1] = a[i];
      i++; j++; k++;
    }
    k++;
  }
  while(a[i] != NULL){
    c[k] = a[i];
    i++; k++;
  }
  while(b[j] != NULL){
    c[k] = b[j];
    j++; k++;
  }
  cout << endl << "The sorted array is: ";
  for(i = 0; i < 2*size; i++)
    cout << c[i] << " ";
  float ans = (float(c[size]) + float(c[size-1]))/2;
  cout << endl << "The median is: " << ans << endl;
}

int main(){
  int n, i;
  cout << "Enter the size of the arrays: ";
  cin >> n;

  int a[n], b[n], c[2*n];
  cout << "Enter the first array: ";
  for(i = 0; i < n; i++)
    cin >> a[i];
  cout << "Enter the second array: ";
  for(i = 0; i < n; i++)
    cin >> b[i];

  mergeArrays(a, b, c, n);
  return 0;
}
