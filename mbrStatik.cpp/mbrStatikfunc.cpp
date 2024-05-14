#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printALL();

	static void setNim(int pNim) {nim = pNim;}
	static int getNim() {return nim;}

	mahasiswa(string pnama)
	{
		nama = pnama;
		setID();
	}
};

int mahasiswa::nim = 0;

void mahasiswa::setID()
{
	id == ++nim;
}

void mahasiswa::printALL()
{
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main()
{
	mahasiswa mhs1("Sergio");
	mahasiswa mhs2("Ramos");
	
	mahasiswa::setNim(205); // mengakses nim melalui static member function "setNim"
	mahasiswa mhs3("Marselino");
	mahasiswa mhs4("Ipin");

	mhs1.printALL();


	mhs2.printALL();
	mhs3.printALL();
	mhs4.printALL();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl; // mengakses nim melalui static
	
	return 0;
}