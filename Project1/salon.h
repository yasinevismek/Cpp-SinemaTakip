#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class salon
{
public:
	salon();
	void koltukgoster();
};



salon::salon()
{
	ofstream koltuk;
	koltuk.open("koltuk.txt", ios::out);

	koltuk << "01234567*" << endl;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			koltuk << "O";
		}
		koltuk << i;
		koltuk << endl;
	}
	koltuk.close();
}
void salon::koltukgoster()
{
	char s[9][9];
	ifstream koltuk;
	koltuk.open("koltuk.txt", ios::in);
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			koltuk >> s[i][j];
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << s[i][j] << " ";
		}
		cout << endl;
		cout << endl;
	}
	cout << endl;
	koltuk.close();
}
