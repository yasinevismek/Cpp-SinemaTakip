#include <iostream>
#include <fstream>
#include "musteri.h"
#include "salon.h"
#include "filmler.txt"
int sayi = 1;
using namespace std;

void biletal();
void menu();
void koltuksec();
void musterigoster();
musteri musteri1;
salon koltuk;

int filmid;
int seanskod;
int main()
{	
	filmler();
	menu();

	system("pause");
}
void biletal()
{
		ofstream yaz;
	cout << "Bilet almak istediginiz filmin numarasini giriniz: ";
	cin >> filmid;
seanssec:	cout << "Filmin seans kodunu giriniz: ";
	cin >> seanskod;
	if (filmid == 1)
	{
		if (seanskod == 101 || seanskod == 102)
		{
			yaz.open("musteri.txt", ios::out | ios::app);
			cout << "adinizi giriniz: ";
			cin >> musteri1.ad;
			cout << "soyadinizi giriniz: ";
			cin >> musteri1.soyad;
			musteri1.id = sayi;
			yaz << musteri1.id << "\t" << musteri1.ad << "\t" << musteri1.soyad<< endl;
			sayi++;
			musterigoster();
			koltuk.koltukgoster(); 
			koltuksec();
			koltuk.koltukgoster();
			cout << "Bilet alimi basarili menuye yonlendirileceksiniz.." << endl;
			system("pause");

			system("cls");
			filmler();
			menu();
			yaz.close();
		}
		else
		{
			cout << "Seans kodu hatali.."<<endl;
			goto seanssec;
		}
	}
	else if (filmid == 2)
	{
		if (seanskod == 103 || seanskod == 104)
		{
			yaz.open("musteri.txt", ios::out | ios::app);
			cout << "adinizi giriniz: ";
			cin >> musteri1.ad;
			cout << "soyadinizi giriniz: ";
			cin >> musteri1.soyad;
			musteri1.id = sayi;
			yaz << musteri1.id << "\t" << musteri1.ad << "\t" << musteri1.soyad << endl;
			sayi++;
			yaz.close();
			musterigoster();
			koltuk.koltukgoster();
			koltuksec();
			koltuk.koltukgoster();
			cout << "Bilet alimi basarili menuye yonlendirileceksiniz.." << endl;
			system("pause");

			system("cls");
			filmler();
			menu();
		}
		else
		{
			cout << "Seans kodu hatali.."<<endl;
			goto seanssec;
		}
	}
	else if (filmid == 3)
	{
		if (seanskod == 105 || seanskod == 106)
		{
			yaz.open("musteri.txt", ios::out | ios::app);
			cout << "adinizi giriniz: ";
			cin >> musteri1.ad;
			cout << "soyadinizi giriniz: ";
			cin >> musteri1.soyad;
			musteri1.id = sayi;
			yaz << musteri1.id << "\t" << musteri1.ad << "\t" << musteri1.soyad  << endl;
			sayi++;
			yaz.close();
			musterigoster();
			koltuk.koltukgoster();
			koltuksec();
			koltuk.koltukgoster();
			cout << "Bilet alimi basarili menuye yonlendirileceksiniz.." << endl;
			system("pause");

			system("cls");
			filmler();
			menu();
		}
		else
		{
			cout << "Seans kodu hatali.." << endl;
			goto seanssec;
		}

	}
	else if (filmid == 4)
	{
		if (seanskod == 107 || seanskod == 108)
		{
			yaz.open("musteri.txt", ios::out | ios::app);
			cout << "adinizi giriniz: ";
			cin >> musteri1.ad;
			cout << "soyadinizi giriniz: ";
			cin >> musteri1.soyad;
			musteri1.id = sayi;
			yaz << musteri1.id << "\t" << musteri1.ad << "\t" << musteri1.soyad << endl;
			sayi++;
			yaz.close();
			musterigoster();
			koltuk.koltukgoster();
			koltuksec();
			koltuk.koltukgoster();
			cout << "Bilet alimi basarili menuye yonlendirileceksiniz.." << endl;
			system("pause");

			system("cls");
			filmler();
			menu();
		}
		else
		{
			cout << "Seans kodu hatali.." << endl;
			goto seanssec;
		}
	}
	else
	{
		cout << "Boyle bir film bulunamadi. Lutfen kontrol ediniz.. "<<endl;
		biletal();
	}
}
void menu()
{
	int secim;
	cout << "1-Bilet Al\n2-Filme Gore Salon Gor\n0-Cikis" << endl;;
	do
	{
		cin >> secim;
		switch (secim)
		{	
		case 1:
			biletal();
			break;
		case 2:

liste:		cout << "Hangi film icin: ";
			cin >> filmid;
			cout << "Hangi seans icin: ";
			cin >> seanskod;
			if (filmid == 1 && (seanskod == 101 || seanskod == 102))
			{
				koltuk.koltukgoster();
				cout << endl;
			}
			else if (filmid == 2 && (seanskod == 103 || seanskod == 104))
			{
				koltuk.koltukgoster();
				cout << endl;
			}
			else if (filmid == 3 && (seanskod == 105 || seanskod == 106))
			{
				koltuk.koltukgoster();
				cout << endl;
			}
			else if (filmid == 4 && (seanskod == 107 || seanskod == 108))
			{
				koltuk.koltukgoster();
				cout << endl;
			}
			else
			{
				cout << "hatali islem.." << endl;
				goto liste;
			}
			menu();
			break;
		case 0:
			exit(0);

		default:
			cout << "Yanlis secim yaptiniz. Lutfen islemi tekrar girin: "<<endl;
			break;
		}
	} while (secim != 0);
}
void koltuksec()
{
	int yatay, dikey; 
	cout << " 'X' ile gosterilen yerler doludur!" << endl;;
	cout << "sira sec: ";
	cin >> dikey;
	cout << "koltuk sec: ";
	cin >> yatay;

	
	ofstream koltuk;
	koltuk.open("koltuk.txt", ios::out);

	koltuk << "01234567*" << endl;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (yatay == i && dikey == j) {	
				koltuk << "X";
			}
			else
				koltuk << "O";
		}
		koltuk << i;
		koltuk << endl;
	}
	koltuk.close();
}
void musterigoster()
{
	ifstream oku;

	oku.open("musteri.txt", ios::in);
	oku.seekg(musteri1.imlec);
	cout << "id\tad\tsoyad" << endl;
	while(oku >> musteri1.id >> musteri1.ad >> musteri1.soyad)
	{
		cout << musteri1.id << "\t" << musteri1.ad << "\t" << musteri1.soyad<<endl;
		cout << endl;
	}
	oku.close();
}