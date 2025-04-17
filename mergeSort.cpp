#include <iostream>
#include <string>
using namespace std;

void input(){
	while (true) {
		cout << "Masukkan Panjang element array: ";
		cin >> n;

		if (n<= 20) {
			break;
		}
		else {
			cout << "\nMaksimal panjang array adalah 20";
		}
	}
}

cout << "\n=========================";
cout << "nInputkan Isi Element Array";
cout << "\n=========================" <<endl;

for (int i = 0; i < n; i++ ) {
	cout << "Array index ke- " << i <<": ";
	cin >> arr[i];
}