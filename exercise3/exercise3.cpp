#include <iostream>
#include <vector>
using namespace std;

class penerbit {
public:
	string namapenerbit;
	penerbit(string nama) : namapenerbit(nama) {}
	string getNamaPenerbit() {
		return namapenerbit;
	}
};

class pengarang {
public:
	string namapengarang;
	vector<penerbit*> penerbitDiikuti;
	pengarang(string nama) : namapengarang(nama) {}
	
	void tambahPenerbit(penerbit* penerbit) {
		penerbitDiikuti.push_back(penerbit);
	}

	void displayPenerbitDiikuti() {
		cout << "Daftar penerbit yang diikuti \"" << namapengarang << "\": ";
		for (penerbit* penerbit : penerbitDiikuti) {
			cout << penerbit->getNamaPenerbit() << " ";
		}
		cout << endl;
	}
	string getNamaPengarang() {
		return namapengarang;
	}
};

class buku {
public:
	string judulbuku;
	string pengarang;
	buku(string judul, string pengarnag) : judulbuku(judul), pengarang(pengarang) {}
	void displaydaftarbuku() {
		cout << "Daftar Buku Dikarang : " << endl;
	}
};

int main() {
	penerbit penerbit1("gama press");
	penerbit penerbit2("intan pariwara");

	pengarang pengarang1("giga");
	pengarang pengarang2("joko");
	pengarang pengarang3("lia");
	pengarang pengarang4("asroni");

	cout << "Daftar Pengarnag Pada Penerbit: " << endl;

}