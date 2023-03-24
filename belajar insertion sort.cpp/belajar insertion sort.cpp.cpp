#include <iostream>
using namespace

int arr[20];  //Membuat Array dengan panjang data 20
int n;		  //Membuat Variabel inputan n

void input() {	//Procedure input
	while (true)
	{
		cout << "Masukan Jumlah Data pada Array"	//Membuat input jumlah elemen Array
			cin >> n;								//memanggil variabel input n

		if (n <= 20) {				//membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang ada masukan maksimal 20 Elemen.\n";	//menampilkan pesan jika data lebih dari 20
		}
	}
	cout