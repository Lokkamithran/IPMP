#include <iostream>

using namespace std;

long long unsigned fibonacci(int a){
	long long unsigned term1 = 0, term2 = 1, term3 = 1;
	if(a == 1) return 0;
	else if(a == 2) return 1;
	a -= 2;
	while(a){
		term3 = term1 + term2;
		term1 = term2;
		term2 = term3;
		a--;
	}
	return term3;
}

int main() {
	int num;
	cin >> num;
	cout << fibonacci(num);									
	return 0;	
}


