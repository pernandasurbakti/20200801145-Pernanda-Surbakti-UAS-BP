#include <iostream>
#include <string>

using namespace std;

int main (){
	string nama;
	string nim;
	
	cout<<"Masukan Data Berikut : "<<endl<<endl;
	cout<<"Nama    : ";
	getline (cin, nama);  
	 
	cout<<"NIK     : ";
	getline (cin, nim); 
	 
	cout<<endl;
	cout<<"DATA MAHASISWA"<<endl; 
	cout<<"------------------------------"<<endl;
	
	cout<<"Nama    : "<<nama<<endl;
	cout<<"NIK     : "<<nim<<endl;

}
