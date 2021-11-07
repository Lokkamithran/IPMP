//Program to find the Longest Increasing Subsequence
#include <iostream>
#include <vector>
using namespace std;

void longestIncSubsequence(int *a, int size){
  int i, j, length = 1;
  vector<int> pos(size, 1);

  for(i = 1; i < size; i++)
    for(j = 0; j < i; j++)
      if(a[i] > a[j] && pos[i] == pos[j])
          pos[i]++;

  for(i = 0; i < size; i++)
    if(pos[i] > length)
      length = pos[i];

  cout << endl << "The length of the Longest Increasing Subsequence is: "
      << length << endl;
}

int main(){
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  int a[n];
  cout << "Enter the array: ";
  for(int i = 0; i < n; i++)
    cin >> a[i];

  longestIncSubsequence(a, n);
  return 1;
}
