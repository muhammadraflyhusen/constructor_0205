#include <iostream>
using namespace std;
class buku
{
	string judul;

public:
	buku setjudul(string judul)
	{
		this->judul = judul;
		return *this;
	}
	string getJudul()
	{
		return this->judul;
	}

} bukunya;
int main()
{
	// bukunya.setJudul("Matematika"); 
	// cout << bukunya.getJudul("Matematika");
	cout << bukunya.setjudul("matematika").getJudul();
	return 0;
}