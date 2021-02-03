#include <iostream>
using namespace std;
int main()
{
	//Deklarasi
	system (" color f4");
	cout << " Tugas Algoritma dan Pemograman "<<endl;
	cout << " Nama  : Taopik Hidayat"<<endl;
	cout << " NPM   : 20.14.1.0048 "<<endl;	
	cout << " Kelas : 1 B "<<endl;
	//Deklarasi
    int belanja,harga,diskon;
    cout<<"=================="<<endl;
    cout<<"= PROGRAM DISKON ="<<endl;
    cout<<"=================="<<endl;
    cout<<"Jumlah Belanja : ";
    cin>>belanja;
    //Proses
    //Diskon 0% untuk belanja dari 0 sampai 25.000
    if ((belanja>=0) && (belanja<25000)){
        diskon=belanja*0.0;
        harga=belanja-diskon;
    //Diskon 10% untuk belanja dari 25.000 sampai 50.000
    } else if ((belanja>=25000) && (belanja<50000)){
        diskon=belanja*0.10;
        harga=belanja-diskon;
        cout<<endl<<"Diskon 10%"<<endl;
    //Diskon 12,5% untuk belanja dari 50.000 sampai 100.000
    } else if ((belanja>=50000) && (belanja<100000)){
        diskon=belanja*0.125;
        harga=belanja-diskon;
        cout<<endl<<"Diskon 12.5%"<<endl;
    //Diskon 15% untuk belanja lebih dari 100.000
    } else if (belanja>=100000){
        diskon=belanja*0.15;
        harga=belanja-diskon;
        cout<<endl<<"diskon 15%"<<endl;
    //Proses akhir
    }else {
        harga=belanja;
    }
    //Tampilan Akhir
    cout<<endl<<"jadi Jumlah Harganya = Rp. "<<harga<<endl;;
    return 0;
}
