// Muhammad Aditya Rahmansyah Baskoro 
// Faraday
#include <iostream>
using namespace std;

int main() {



	char BIPI, KVT, FMK, TVM, PROGDAS, MATDIS;
	int nBIPI, nKVT, nFMK, nTVM, nPROGDAS, nMATDIS, totalNilai; //Beban SKS BIPI 2, KVT 3, FMK 2, TVM 2, PROGDAS 3, MATDIS 3
	double nSEMESTER;

	cout << "\tKalkulator IP Semester 1\t" << endl;
	cout << "_______________________________________" << endl;
	cout << "" << endl;
	cout << "" << endl;
	// Menunjukkan Jumlah SKS, Beban Penilaian dan Daftar nilai setiap Mata kuliah
	cout << "Bahasa Indonesia & Penulisan Ilmiah\n";
	cout << "_______________________________________" << endl;
	cout << "Jumlah SKS : 2\n";
	cout << "Beban Penilaian : Quiz 10%, Tugas 15%, UTS 25%, UAS 50%\n";
	cout << "" << endl;
	cout << "Daftar Nilai :\n";
	cout << "A >= 85\n";
	cout << "B >= 70\n";
	cout << "C >= 55\n";
	cout << "D >= 40\n";
	cout << "E >= 0 \n";
	cout << "" << endl;
	cout << "Input Nilai BIPI (Dalam Indeks Huruf) : "; //Input nilai Matkul 1 : Bahasa Indonesia & Penulisan Ilmiah
	cin >> BIPI;
	switch (BIPI) { //Mengonversikan nilai setiap Mata kuliah dari indeks huruf ke indeks angka.
	case 'A':
		nBIPI = 4;
		break;
	case 'B':
		nBIPI = 3;
		break;
	case 'C':
		nBIPI = 2;
		break;
	case 'D':
		nBIPI = 1;
		break;
	case 'E':
		nBIPI = 0;
		break;
	default: //Menunjukkan jika penginput menginputkan nilai dengan format yang salah
		cout << "Invalid response";
	}

	cout << "" << endl;
	cout << "" << endl;

	cout << "Kalkulus Variabel Tunggal";
	cout << "" << endl;
	cout << "Jumlah SKS : 3\n";
	cout << "Beban Penilaian : Quiz 15%, Tugas 15%, UTS 35%, UAS 35%\n";
	cout << "" << endl;
	cout << "Daftar Nilai :\n";
	cout << "A >= 85\n";
	cout << "B >= 70\n";
	cout << "C >= 55\n";
	cout << "D >= 40\n";
	cout << "E >= 0 \n";
	cout << "" << endl;

	cout << "Input Nilai KVT (Dalam Indeks Huruf) : "; //Input nilai Matkul 2 : Kalkulus Variabel Tunggal
	cin >> KVT;
	switch (KVT) {
	case 'A':
		nKVT = 4;
		break;
	case 'B':
		nKVT = 3;
		break;
	case 'C':
		nKVT = 2;
		break;
	case 'D':
		nKVT = 1;
		break;
	case 'E':
		nKVT = 0;
		break;
	default:
		cout << "Invalid response";
	}
	cout << "" << endl;
	cout << "" << endl;

	cout << "Fisika Mekanika Klasik\n";
	cout << "" << endl;
	cout << "Jumlah SKS : 2\n";
	cout << "Beban Penilaian : Quiz 10%, Tugas 15%, UTS 25%, UAS 50%\n";
	cout << "" << endl;
	cout << "Daftar Nilai :\n";
	cout << "A >= 85\n";
	cout << "B >= 70\n";
	cout << "C >= 55\n";
	cout << "D >= 40\n";
	cout << "E >= 0 \n";
	cout << "" << endl;
	cout << "Input Nilai FMK (Dalam Indeks Huruf) : "; //Input nilai Matkul 3 : Fisika Mekanika Klasik
	cin >> FMK;
	switch (FMK) {
	case 'A':
		nFMK = 4;
		break;
	case 'B':
		nFMK = 3;
		break;
	case 'C':
		nFMK = 2;
		break;
	case 'D':
		nFMK = 1;
		break;
	case 'E':
		nFMK = 0;
		break;
	default:
		cout << "Invalid response";
	}
	cout << "" << endl;
	cout << "" << endl;

	cout << "Teori Vektor & Matriks\n";
	cout << "" << endl;
	cout << "Jumlah SKS : 2\n";
	cout << "Beban Penilaian : Quiz 10%, Tugas 10%, UTS 30%, UAS 50%\n";
	cout << "" << endl;
	cout << "Daftar Nilai :\n";
	cout << "A >= 85\n";
	cout << "B >= 70\n";
	cout << "C >= 55\n";
	cout << "D >= 40\n";
	cout << "E >= 0 \n";
	cout << "" << endl;
	cout << "Input Nilai BIPI (Dalam Indeks Huruf) : ";  //Input nilai Matkul 4 : Teori Vektor & Matriks
	cin >> TVM;
	switch (TVM) {
	case 'A':
		nTVM = 4;
		break;
	case 'B':
		nTVM = 3;
		break;
	case 'C':
		nTVM = 2;
		break;
	case 'D':
		nTVM = 1;
		break;
	case 'E':
		nTVM = 0;
		break;
	default:
		cout << "Invalid response";
	}

	cout << "" << endl;
	cout << "" << endl;

	cout << "Pemrograman Dasar\n";
	cout << "" << endl;
	cout << "Jumlah SKS : 3\n";
	cout << "Beban Penilaian : Quiz 10%, Tugas 15%, UTS 25%, UAS 50%\n";
	cout << "" << endl;
	cout << "Daftar Nilai :\n";
	cout << "A >= 85\n";
	cout << "B >= 70\n";
	cout << "C >= 55\n";
	cout << "D >= 40\n";
	cout << "E >= 0 \n";
	cout << "" << endl;
	cout << "Input Nilai PROGDAS (Dalam Indeks Huruf) : "; //Input nilai Matkul 5 : Pemrograman Dasar
	cin >> PROGDAS;
	switch (PROGDAS) {
	case 'A':
		nPROGDAS = 4;
		break;
	case 'B':
		nPROGDAS = 3;
		break;
	case 'C':
		nPROGDAS = 2;
		break;
	case 'D':
		nPROGDAS = 1;
		break;
	case 'E':
		nPROGDAS = 0;
		break;
	default:
		cout << "Invalid response";
	}

	cout << "" << endl;
	cout << "" << endl;

	cout << "Matematika Diskrit\n";
	cout << "" << endl;
	cout << "Jumlah SKS : 2\n";
	cout << "Beban Penilaian : Quiz 10%, Tugas 15%, UTS 25%, UAS 50%\n";
	cout << "" << endl;
	cout << "Daftar Nilai :\n";
	cout << "A >= 85\n";
	cout << "B >= 70\n";
	cout << "C >= 55\n";
	cout << "D >= 40\n";
	cout << "E >= 0 \n";
	cout << "" << endl;
	cout << "Input Nilai MATDIS (Dalam Indeks Huruf) : "; //Input nilai Matkul 6 : Matematika Diskrit
	cin >> MATDIS;
	switch (MATDIS) {
	case 'A':
		nMATDIS = 4;
		break;
	case 'B':
		nMATDIS = 3;
		break;
	case 'C':
		nMATDIS = 2;
		break;
	case 'D':
		nMATDIS = 1;
		break;
	case 'E':
		nMATDIS = 0;
		break;
	default:
		cout << "Invalid response";
	}
	cout << "" << endl;

	totalNilai = nBIPI * 2 + nKVT * 3 + nFMK * 2 + nTVM * 2 + nPROGDAS * 3 + nMATDIS * 3; //Total Nilai = Matkul 1 * BebanSKS Matkul 1 + ... + Matkul n * BebanSKS Matkul n
	nSEMESTER = totalNilai / 15.0; //IP Semester = Total Nilai / Total SKS

	cout << "" << endl;
	cout << "IP Semester 1 Anda adalah : " << nSEMESTER << endl; // Menunjukkan hasil akhir IP Semester 1 
	cout << "_______________________________________" << endl;

}