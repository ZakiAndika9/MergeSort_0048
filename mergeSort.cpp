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