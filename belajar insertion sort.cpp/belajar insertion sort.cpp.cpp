#include <iostream>
using namespace std;

int arr[20];  //Membuat Array dengan panjang data 20
int n;		  //Membuat Variabel inputan n

void input() {	//Procedure input
	while (true)
	{
		cout << "Masukan Jumlah Data pada Array : "; //Membuat input jumlah elemen Array
			cin >> n;								//memanggil variabel input n

		if (n <= 20) {				//membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang ada masukan maksimal 20 Elemen.\n";	//menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;		//membuat jarak perbaris program
	cout << "====================" << endl;			//membuat tampilan susunan data elemen array
	cout << "Masukan Elemen Array" << endl;
	cout << "=====================" << endl;


	for (int i = 0; i < n; i++)	//menggunakan perulangan for untuk menyipan data pada array
	{
		cout << "Data ke-" << (i + 1) << "; ";	//memasukkan atau menginputkan nilai data n
		cin >> arr[i];							//menyimpan nilai data n
	}
}

void insertionsort() {		//procedure itnsertionsor

	int temp;			//membuat variabel data temporer atau penyimpanan sementara
	int j;				//membuat variabel j sebagai penanda

	for (int i = 1; i < n; i++)	{	//1. looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];				//2. simpan nilai arr[i] ke variabel sementara temp

	j = i - 1;						//3. setting nilai j sama dengan i-1;

	while (j >= 0 && arr[j] > temp)		//4. looping while dimana nilai j lebih besar sama dengan 0 dan 
		//arr[j] lebih besar dari pada temp
	{
		arr[j + 1] = temp;	//4. simpan arr[j] ke dalam variabel arr[j + 1]
		j--;				//4. Descrement nilai j by 1
	}

	arr[j + 1] = temp;		//5. simpan nilai temp ke dalam arr[j+1

	
	cout << "\nPass " << i << ": ";		//Output ke layar 
	for (int k = 0; k < n; k++) {		//looping nilai k dimulai dari 0 hingga n-1
		cout << arr[k] << "";			//Output ke layar
	}
}
}


void display() {		//procedure disply
	cout << endl;											//Output baris kosong
	cout << "\n============================" << endl;		//Output ke layer
	cout << "Element Array yang telah tersusun" << endl;	//output ke layer
	cout << "===============================" << endl;		//output le layyer

	for (int j = 0; j < n; j++) {				//Looping dengan j dimualai dari 0 hingga n-1
		cout << arr[j] << endl;					//Output ke layer
	}
	cout << endl;								//Output baris kosong
}

int main()
{
	input();			//memanggil input
	insertionsort();    //memanggil insertionsort
	display();			//memanggil display
}