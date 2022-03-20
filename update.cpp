#include <iostream>
using namespace std;

int main()
{
	int x, y, pilih, hasil;
	cout<<"Kalkulator"<<endl;
	cout<<"Pilih operasi Aaritmatika"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"Masukkan pilihan : ";cin>>pilih;
	if(pilih==1)
	{
		cout<<"Masukkan angka : ";cin>>x;
		cout<<"Masukkan angka : ";cin>>y;
		hasil = x+y;
		cout<<"Hasil Penjumlahan = "<<hasil;
	}
	else if(pilih==2){
		cout<<"Masukkan angka";cin>>x;
		cout<<"Masukkan angka";cin>>y;
		hasil = x-y;
		cout<<"Hasil Pengurangan : "<<hasil;
	}
	else if(pilih==3){
		cout<<"Masukkan angka";cin>>x;
		cout<<"Masukkan angka";cin>>y;
		hasil = x*y;
		cout<<"Hasil Perkalian = "<<hasil;
	}
	else if(pilih==4){
		cout<<"Masukkan angka";cin>>x;
		cout<<"Masukkan angka";cin>>y;
		hasil = x/y;
		cout<<"Hasil Pembagian = "<<hasil;
	}
	return 0;
}






