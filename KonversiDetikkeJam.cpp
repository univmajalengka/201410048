//Konversi total detik ke Jam, Menit dan Detik
#include<iostream>
using namespace std;
int main()
{
	int j,m,d,td;
	cout<<"Masukan Jam :";
	cin>>j;
	cout<<"Masukan Menit :";
	cin>>m;
	cout<<"Masukan Detik :";
	cin>>d;
	td=(j*3600)+(m*60)+d;
	cout<<"Total Detik : "<<td;

	int td,sm;
	cout<<"Masukan total detik : ";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<j<<":"<<m<<":"<<d;
	return 0;
}
