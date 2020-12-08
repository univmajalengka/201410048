#include <iostream>
using namespace std;
int main()
{
	int j1, m1, d1, j2, m2, d2, lama1, lama2, lama3;
	
	cout<<"MASUKAN jAM AWAL : "<<endl;
	cout<<"Jam   = ";
    cin>>j1;
    cout<<"menit = ";
    cin>>m1;
    cout<<"detik = ";
    cin>>d1;
    cout<<"Jam Awal Pada Pukul = "<<j1<<":"<<m1<<":"<<d1<<" WIB"<<endl;
    cout<<endl;
    cout<<"MASUKAN JAM AKHIR : "<<endl;
    cout<<"Jam   = ";
    cin>>j2;
    cout<<"menit = ";
    cin>>m2;
    cout<<"detik = ";
    cin>>d2;
    cout<<"Jam Akhir pada Pukul = "<<j2<<":"<<m2<<":"<<d2<<" WIB"<<endl;
    if ((d2-d1)<0)
{
    lama1=(60+d2)-d1;
    }
else
    {
    lama1=d2-d1;
    }
    if ((m2-m1)<0)
{
    lama2=(60+m2)-m1;
    }
else
    {
    lama2=m2-m1;
    }
    if ((j2-j1)<0)
{
    lama3=(24+j2)-j1;
    }
else
    {
    lama3=j2-j1;
    }
    cout<<"LAMA WAKTU BERMAIN : "<<endl;
    cout<<"Jam   = "<<lama3<<endl;
    cout<<"Menit = "<<lama2<<endl;
    cout<<"Detik = "<<lama1<<endl;
    cout<<"Jadi lama waktu bermain = "<<lama3<<":"<<lama2<<":"<<lama1<<" WIB";
    return 0;
} 
