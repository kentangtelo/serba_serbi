#include <iostream>
#include <iomanip>
using namespace std;

void struk_trans (string pesan[], int harga2[], int jmlh, int banyak_pesanan, int kembalian, int transaksi, int jml_pesanan2[]){
    system("cls");
    cout << "----------------------------------------------------\n";
	cout << "                   Struk Pembayaran                  \n";
	cout << "----------------------------------------------------\n";
    cout << "\nKode Transaksi : " << transaksi << endl;
    cout << "----------------------------------------------------\n";
	cout << "----------------------------------------------------\n";
	cout << "No  \tMakanan\t\t\tBanyak\t    Harga\n";
	cout << "----------------------------------------------------\n";
    for (int i=0; i<banyak_pesanan; i++){
        cout << i+1 << ".\t"<<left<<setw(22)<<pesan[i]<<right<<setw(6)<<jml_pesanan2[i]<<"\t Rp. " << harga2[i] << endl;
    }
    cout << "----------------------------------------------------\n";
    cout << "Total\t\t: " << jmlh << endl;
    if (kembalian >=0){
        cout << "Kembalian\t: " << kembalian << endl;
    }else{
        cout << "Uang Kurang\t: " << kembalian << endl;
    }
}

int main(){
    char loop ='y';
    int transaksi, harga, jmlh =0, i, j, jml_pesanan, banyak_pesanan, bayar, kembalian, total;
    string username, password, pesan[20]={""};
    string nama_menu[6]={"Nasi Ayam + Teh/Es Teh", "Nasi Ikan + Teh/Es Teh", "Sate + Teh/Es Teh", "Siomay", "Bakso", "Bubur"};
    int menu[6]={15000, 12000, 12000, 8000, 10000, 10000};
    int harga2[20]={0},jml_pesanan2[20]={0};

    while(loop == 'y' ){
        system("cls");
        cout << "Username : "; cin >> username;
        cout << "Password : "; cin >> password;

        if (username == "admin" && password == "admin"){
                system("cls");
                cout << "----------------------------------------------------\n";
				cout << "                   Kasir Katering                   \n";
				cout << "----------------------------------------------------\n";
                cout << "Kode Transaksi : ";cin >> transaksi;
                cout << "----------------------------------------------------\n";
                cout << "                   Daftar Menu" << endl;
                cout << "----------------------------------------------------\n";
                for (i=0; i<6; i++){
                    cout << i+1 << ". " << nama_menu[i] << " Rp. " << menu[i] << endl;
                }
                cout << endl;
                cout << "Banyak Pesanan : ";cin >> banyak_pesanan;
                cout << endl;
                for (i=0; i<banyak_pesanan; i++){
                    cout << "Menu ke-"; cin >> j;
                    cout << nama_menu[j-1] << endl;
                    cout << "Jumlah Pesanan : "; cin >> jml_pesanan;
                    harga = jml_pesanan*menu[j-1];
					jml_pesanan2[i] = jml_pesanan;
                    pesan[i]=nama_menu[j-1];
                    harga2[i]=harga;
                    jmlh += harga;
                    cout << endl;
                }
                cout << "----------------------------------------------------\n";
                cout << "Total Harga\t: "<<jmlh<<endl;
                cout << "----------------------------------------------------\n";
                cout << "Uang Bayar \t: ";cin >> bayar;
                kembalian = bayar - jmlh; 
                struk_trans(pesan, harga2, jmlh, banyak_pesanan, kembalian, transaksi, jml_pesanan2);
        }else {
            system("cls");
            cout << "---------------------------------------------------\n";
			cout << "Login Gagal!\n";
			cout << "---------------------------------------------------\n";
        }
        cout << "\nKembali (y/n) ? ";cin >> loop;
    }
    return 0;
}
