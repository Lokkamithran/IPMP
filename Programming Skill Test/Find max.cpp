#include <iostream>
using namespace std;

int main(){
	int size, i, flag=0;
	cin >> size;
	int arr[size];
	for(i=0; i<size; i++)
		cin >> arr[i];
	for(i=0; i<size-1; i++)
		if(arr[i]>arr[i+1]){
			flag=1;
			cout << arr[i];
			break;
		}
	if(flag == 0) cout << arr[size-1];
	return 0;
}

