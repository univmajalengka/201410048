//Menghitung Gaji Bersih Karyawan
#include <iostream>
#include <string>
using namespace std;

//Deklarasi Konstanta
const float persentunjangan = 0.2;
const float persenpajak = 0.15;
int main ()
{
	system ("COLOR F5");
	
	//Deklarai Variabel
	string namakaryawan;
	int gajibersih, gajipokok, tunjangan, pajak;
	cout<<endl;
	
    //INPUT DATA 
	cout << "==_________ TUGAS KE 10 _________ == \n";
	cout << "     KALKULASI TAKE-HOME-PAY KARYAWAN    \n";
	cout << "~~~~~~~~~~ TAOPIK HIDAYAT ~~~~~~~~~~ \n";
	cout << "============= KELAS 1B ============== \n";
	cout << "======== NPM : 20.14.1.0048 ========= \n";
	cout << "========= PRODI INFORMATIKA ========= \n"<< endl;
	
	//Input Nama Karyawan
	cout<<"Nama Karyawan	: ";
	getline (cin, namakaryawan);
	
	//Input Gaji Pokok
	cout<<"Gaji Pokok	: Rp.";
	cin>>gajipokok;
	cout<<endl;

    //Proses
	tunjangan = persentunjangan * gajipokok;
	pajak = persenpajak * gajipokok;
	gajibersih = gajipokok + tunjangan - pajak;

    //Output
    cout<<" Nama Karyawan  : "  << namakaryawan << endl;
    cout<<" Gaji Pokok     : Rp. " << gajipokok << endl;
    cout<<" Tunjangan      : Rp. "  << tunjangan << endl;
    cout<<" Pajak          : Rp. "  << pajak << endl;
	cout<<" Gaji Bersih Bapak/Ibu "<<namakaryawan<<" adalah Rp."<<gajibersih<<endl;

	return 0;
}
