#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
public:
	int nim;
	string nama;

public:
	Mahasiswa()
	{
		nim = 0;
		nama = "";
	};
	Mahasiswa(int iNim)
	{
		nim = iNim;
	};
	
	Mahasiswa(int iNim, string iNama)
	{
		nim = iNim;
		nama = iNama;
	};

	void cetak() {
		cout << "Nim = " << nim << endl;
		cout << "Nama = " << nama << endl;
		cout << endl;
	}
};