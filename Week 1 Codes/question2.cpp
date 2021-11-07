//Program to find the element with odd occurance
#include <iostream>
#include <unordered_map>
using namespace std;

int oddOccurance(int *a, int size){
  int i;
  unordered_map<int, int> hashmap;
  for(i = 0; i < size; i++)
    hashmap[a[i]]++;
  for(auto &it : hashmap)
    if(it.second % 2)
      return it.first;
  return -1;
}

int main(){
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;
  int a[n];

  cout << "Enter the array: ";
  for(int i = 0; i < n; i++)
    cin >> a[i];

  cout << endl << "The element with odd number of occurances is: "
          << oddOccurance(a, n) << endl;
  return 0;
}
