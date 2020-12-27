#include <iostream>
using namespace std;

int main()
{	
	char loop = 'y', loop2 = 'y', kode, promo_menu;
	int trans, pesanan, kode_menu, jml_pesanan, harga, bayar, kembalian, total_harga;
	string user, pass, nama, nama_menu, promo;

	while(loop == 'y' || loop == 'Y'){
		system("cls");
		cout << "Username : "; cin >> user;
		cout << "Password : "; cin >> pass;

		if(user == "admin" && pass == "admin"){
			while(loop2 == 'y'||loop2 == 'Y'){
				system("cls");
				int jml = 0;
				cout << "----------------------------------------------------\n";
				cout << "                   Kasir Katering                   \n";
				cout << "----------------------------------------------------\n";
				cout << "Kode Transaksi\t: "; cin >> trans;
				cout << "Nama Kustomer\t: ";
				cin.ignore(); getline(cin, nama);
				cout << "Kode Promo (y/n)? : "; cin >> kode;
				if(kode == 'y' || kode == 'Y'){
					do{
					cout << "Kode Promo\t: "; cin >> promo;
						if (promo == "PROMO20"){
						cout << "Mendapatkan diskon 20% " << endl; 
						} else{
						cout << "Promo Tidak Tersedia " << endl;
						cout << "\nCoba Lagi (y/n)? : "; cin >> promo_menu;
						}
					}while(promo_menu == 'y');
				}
				cout << "Banyaknya Menu         : "; cin >> pesanan;
				cout << "----------------------------------------------------\n";

				for(int x = 1 ; x <= pesanan; x++){
					cout << "\nItem- " << x << endl;
					cout << "Kode Menu\t: "; cin >> kode_menu;
					cout << "Nama Menu\t: ";
					cin.ignore(); getline(cin, nama_menu);
					cout << "Jumlah Pesanan\t: "; cin >> jml_pesanan;
					cout << "Harga per pesanan\t: "; cin >> harga;
					total_harga = jml_pesanan * harga;
					cout << "Total Harga\t: " << total_harga << endl;
					jml = jml + total_harga;
					cout << "---------------------------------------------------";
				}
				cout << "\n===================================================\n";
				if (promo == "PROMO20"){
					cout << "Total Bayar\t: " << jml << endl;
					jml = jml * 0.8;
					cout << "After Discount\t: " << jml << endl;
				} else {
					cout << "Total Bayar\t: " << jml << endl;
				}
				cout << "---------------------------------------------------\n";
				cout << "Uang Bayar\t: "; cin >> bayar; 
				kembalian = bayar - jml;
				if(kembalian >= 0){
					cout << "Kembalian\t: " << kembalian << endl;
				}else{
					cout << "Uang tidak cukup \n";
					cout << "Jumlah\t: " << kembalian << endl;
				}
				cout << "\nOrder Baru (y/n)? :  "; cin >> loop2;
			}
		} else {
			cout << "---------------------------------------------------\n";
			cout << "Login Gagal!\n";
			cout << "---------------------------------------------------\n";
		}
		cout << "Kembali  (y/n)? : "; cin >> loop;
	}
	return 0;
}
