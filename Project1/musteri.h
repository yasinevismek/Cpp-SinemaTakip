#include <iostream>
#include <fstream>
#include <string>

using namespace std;



class musteri
{
public:
	string soyad, ad;
	int id,bakiye;
	musteri();
	int imlec;
};



musteri::musteri()
{	
	
	fstream kayit;
	kayit.open("musteri.txt", ios::out);
	kayit << "ID\tAD\tSOYAD" << endl;
	kayit << "---------------------------------------" << endl;
	imlec = kayit.tellp();
	kayit.close();
}
