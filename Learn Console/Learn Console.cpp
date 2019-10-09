// Learn Console.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class encapsulation {
public:
	string Nama;
	string NIM;
	int nilaiku = 85;
	void setNilai(int nilai) {
		nilaiku = nilai;
	}
	int getNilai() {
		return nilaiku;
	}
};


int main()
{
	encapsulation bagus;
	bagus.Nama = "Muhamad Bagus";
	bagus.NIM = "1512500941";
	//bagus.setNilai(100);
	cout << "Nama = " << bagus.Nama << endl;
	cout << "NIM = " << bagus.NIM << endl;
	cout << "Nilai = " << bagus.getNilai();
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
