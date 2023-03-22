#include <iostream>
using namespace std;

float PersegiPanjang(float p, float 1) {
	return p * 1;
}

float segitiga(float a, float t) {
	return 0.5 * a * t;
}

float lingkaran(float r) {
	return 3.14 * r * r;
}
int main() {

	float panjang, lebar, tinggi, jejari, alas;
	int pilihan;




			cout << "------------------" << endl;
			cout << "------M E N U-----" << endl;
			cout << "------------------" << endl;

			cout << "1. luas persegi panjang" << endl;
			cout << "2. luas lingkaran" << endl;
			cout << "3. luas segitiga" << endl;
			cout << "4. Exit" << endl;

			cout << "\npilihan (1/2/3/4) : ";
			cin >> pilihan;

			switch (pilihan) {
			case 1:
				cout << "masukan panjang =";
				cin >> panjang;
				cout << "masukan lebar =";
				cin >> lebar;
				cout << "luas persegi panjang =" << PersegiPanjang(panjang, lebar);
				break;

			case 2:
				cout << "maukan alas =";
				cin >> alas;
				cout << "masukan tinggi =";
				cin >> tinggi;
				cout << "luas segitiga =" << segitiga(alas, tinggi);
				break;
			
			case 3:
				cout << "masukan jari-jari =";
				cin >> jejari;
				cout << "luas lingkaran =" << lingkaran(jejari);
				break;

			case 4:

				break;
			default:
				cout << "pilihan anda salah!";
				break;
			}
	
}