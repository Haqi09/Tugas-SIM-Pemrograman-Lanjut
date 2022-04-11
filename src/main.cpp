#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas Samudera Hindia" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " Mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " Tenaga Kependidikan" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan Semua Mahasiswa" << endl;
		cout << "  5. Tampilkan Semua Dosen" << endl;
		cout << "  6. Tampilkan Semua Tenaga Kependidikan" << endl;
		cout << "  7. Tampilkan Data Semua Mahasiswa" << endl;
		cout << "  8. Tampilkan Data Semua Dosen" << endl;
		cout << "  9. Tampilkan Data Semua Tenaga Kependidikan" << endl;
		cout << " 10. Exit" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
			{
				system("cls");
				string id, nama, nrp, departemen;
				int dd, mm, yy, tahunmasuk;
				cout << "Tambah Mahasiswa" << endl;
				cout << "ID 				: ";
				cin >> id;
				cout << "Nama Lengkap 			: ";
				cin.ignore();
				getline (cin, nama);
				cout << "Tanggal Lahir (dd mm yyyy) 	: ";
				cin >> dd >> mm >> yy;
				cout << "NRP 				: ";
				cin >> nrp;
				cout << "Departemen 			: ";
				cin.ignore();
				getline (cin, departemen);
				cout << "Tahun Masuk 			: ";
				cin>> tahunmasuk;
				cout << endl;

				mahasiswa datamhs(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
				recMhs.push_back(datamhs);

			}
			break;
			
			case 2:
			{
				system("cls");
				string id, nama, npp, departemen, pendidikan;
				int dd, mm, yy;
				cout << "Tambah Dosen" << endl;
				cout << "ID 				: ";
				cin >> id;
				cout << "Nama Lengkap 			: ";
				cin.ignore();
				getline (cin, nama);
				cout << "Tanggal Lahir (dd mm yyyy) 	: ";
				cin >> dd >> mm >> yy;
				cout << "NPP 				: ";
				cin >> npp;
				cout << "Departemen 			: ";
				cin.ignore();
				getline (cin, departemen);
				cout << "Pendidikan 			: ";
				cin>> pendidikan;
				cout << endl;

				dosen datadsn(id, nama, dd, mm, yy, npp, departemen, pendidikan);
				recDosen.push_back(datadsn);

			}
			break;
			case 3:
			{
				system("cls");
				string id, nama, npp, unit;
				int dd, mm, yy;
				cout << "Tambah Tenaga Kependidikan" << endl;
				cout << "ID 				: ";
				cin >> id;
				cout << "Nama Lengkap 			: ";
				cin.ignore();
				getline (cin, nama);
				cout << "Tanggal Lahir (dd mm yyyy) 	: ";
				cin >> dd >> mm >> yy;
				cout << "NPP 				: ";
				cin >> npp;
				cout << "Unit 				: ";
				cin.ignore();
				getline (cin, unit);
				cout << endl;

				tendik datatdk(id, nama, dd, mm, yy, npp, unit);
				recTendik.push_back(datatdk);

			}
			break;

			case 4:
			{
				system("cls");
				cout << "Mahasiswa Universitas Samudera Hindia" << endl;
				int i=0;
				int n =0;
				while(i < recMhs.size())
				{
					n++;
					cout << n << ". " << recMhs[i].getNama() << endl;
					i++;
				}
			}
			cout << endl;
			break;

			case 5:
			{
				system("cls");
				cout << "Dosen Universitas Samudera Hindia" << endl;
				int i=0;
				int n =0;
				while(i < recDosen.size())
				{
					n++;
					cout << n << ". " << recDosen[i].getNama() << endl;
					i++;
				}
			}
			cout << endl;
			break;

			case 6:
			{
				system("cls");
				cout << "Tenaga Kependidikan Universitas Samudera Hindia" << endl;
				int i=0;
				int n =0;
				while(i < recTendik.size())
				{
					n++;
					cout << n << ". " << recTendik[i].getNama() << endl;
					i++;
				}
			}
			cout << endl;
			break;

			case 7:
			{
				system("cls");
				cout << "Data Semua Mahasiswa Universitas Samudera Hindia" << endl;
				int i=0;
				while(i < recMhs.size())
				{
					cout << "ID 			: " << recMhs[i].getId() << endl;
					cout << "Nama 			: " << recMhs[i].getNama() << endl;
					cout << "Tanggal Lahir 		: " << recMhs[i].getTglLahir() << " " << recMhs[i].getBulanLahir() << " " << recMhs[i].getTahunLahir() << endl;
					cout << "NRP 			: " << recMhs[i].getNRP() << endl;
					cout << "Departemen 		: " << recMhs[i].getDepartemen() << endl;
					cout << "Tahun Masuk 		: " << recMhs[i].getTahunmasuk() << endl;
					cout << endl;

					i++;
				}
				cout << endl;
				break;
			}

			case 8:
			{
				system("cls");
				cout << "Data Semua Dosen Universitas Samudera Hindia" << endl;
				int i=0;
				while(i < recDosen.size())
				{
					cout << "ID 			: " << recDosen[i].getId() << endl;
					cout << "Nama 			: " << recDosen[i].getNama() << endl;
					cout << "Tanggal Lahir 		: " << recDosen[i].getTglLahir() << " " << recDosen[i].getBulanLahir() << " " << recDosen[i].getTahunLahir() << endl;
					cout << "NPP 			: " << recDosen[i].getNPP() << endl;
					cout << "Departemen 		: " << recDosen[i].getDepartemen() << endl;
					cout << "Pendidikan		: " << recDosen[i].getPendidikan() << endl;
					cout << endl;

					i++;
				}
				cout << endl;
				break;
			}

			case (9):
			{
				system("cls");
				cout << "Data Semua Tenaga Kependidikan Universitas Samudera Hindia" << endl;
				int i=0;
				while(i < recTendik.size())
				{
					cout << "ID 			: " << recTendik[i].getId() << endl;
					cout << "Nama 			: " << recTendik[i].getNama() << endl;
					cout << "Tanggal Lahir 		: " << recTendik[i].getTglLahir() << " " << recTendik[i].getBulanLahir() << " " << recTendik[i].getTahunLahir() << endl;
					cout << "NPP 			: " << recTendik[i].getNPP() << endl;
					cout << "Unit 			: " << recTendik[i].getUnit() << endl;
					cout << endl;

					i++;
				}
				cout << endl;
				break;
			}

			case (10):
			{
				exit(1);
			}
		}
	}

	return 0;
}
