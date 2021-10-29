#include <iostream>
using namespace std;

int main() {
	int side, j, i;
	cin >> side;
	for(i=0; i<side; i++){
		for(j=0; j+i<side-1; j++)
			cout << "  ";
		for(j=0; j<2*i+1; j++)
			cout << "* ";
		cout << endl;
	}
	for(i=side-1; i>0; i--){
		for(j=0; j+i<side; j++)
			cout << "  ";
		for(j=0; j<2*i-1; j++)
			cout << "* ";
		cout << endl;
	}
}

