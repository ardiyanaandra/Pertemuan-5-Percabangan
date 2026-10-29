#include <iostream>
using namespace std;

int main(){
	string nama, hadiah;
	float a, b, c, rata;
	
	cout <<"MENGHITUNG NILAI RATA-RATA\n\n";
	cout <<"Nama Pemenang : ";
	getline(cin, nama);
	cout <<"Nilai Pertandingan 1 : ";cin>> a;
	cout <<"Nilai Pertandingan 2 : ";cin>> b;
	cout <<"Nilai Pertandingan 3 : ";cin>> c;
	
	rata = (a+b+c)/3;
	
	if(rata >=85) hadiah = "Seperangkat Mobil";
	else if (rata >= 70) hadiah = "Seperangkat Uang Sebesar Rp. 500.000";
	else hadiah = "Liburan";
	
	cout<< "\nSiswa yang bernama "<<nama<<"\n";
	cout<< "Memperoleh nilai rata-rata "<<rata<<"dari hasil\n";
	cout<< "Perlombaan yang diikutinya. \n";
	cout<< "Hadiah yang didapat adalah "<<hadiah<<endl;
	return 0;	
}
