#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
	const int MAX_MAHASISWA = 100;

	int NIM[MAX_MAHASISWA];
	string nama[MAX_MAHASISWA];
	int tahunMasuk[MAX_MAHASISWA];

public:
	int jumlahMahasiswa = 0;
};


void tambahMahasiswa() {
	int nim;
	string nama;
	int tahunMasuk;
	cout << "Masukkan NIM: ";
	cin >> nim; 
	cout << "Masukkan Nama: ";
	cin >> nama;
	cout << "Masukkan tahunMasuk: ";
	cin >> tahunMasuk;

}

	
void tampilkanSemuaMahasiswa{
	if (listEmpty()) {
	cout << "List Kosong" << endl;
	system("pause");
	system("cls");
	return;
	}
	else {
	Node* currentNode = START;
	while (currentNode != NULL) {
		cout << "NIM: " << currentNode->noMhs << ", Nama: " << currentNode->name << endl; 
		currentNode = currentNode->next; 
		}
	}
}

void algorithmacariMahasiswaByNIM();
//isi disini
void algorithmaSortByTahunMasuk();
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			cout << "\nData berhasil ditambah: ";
			string element; 
			getline(cin, element); 
			s.push(element); 
			break;
		case 2:
			
			break;
		case 3:
			//isi disini
			break;
		case 4:
			//isi disini
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}//2. stack, single LL, //3. stack : menyimpan data yang ditumpuk dan hanya bisa diakses diatas / Top (LIFO)//   queue : seperti mengantri, masuk belakang keluar depan (FIFO)//4. pada saat data yang disimpan ditumpuk  //5. a. ada 5//b. 25, 20,10,5,1,5,8,5,10,12,15,12,10,20,22,20,25