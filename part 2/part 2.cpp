#include <iostream>
using namespace std;

class bangunDatar {
	//akses modifier
private:
	float panjang, Lebar;
public:
	float luas;

	void input() { // methode input persegi panjang
		cout << "Masukkan Panjangnya = ";
		cin >> panjang;
		cout << "Masukan Lebarnya = ";
		cin >> Lebar;
	}
	float hitungluas() {
		return panjang * Lebar;
	}
	void display() {
		cout << "Panjangnya = " << panjang << endl;
		cout << "Lebarnya = " << Lebar << endl;
		cout << "Luasnya = " << hitungluas() << endl;
	}
};

int main() {
	bangunDatar pp; // Deklarasi objek pp dari class bangundatar
	pp.input();
	pp.display();
