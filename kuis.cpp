#include <iostream>
#include <string>
using namespace std;

main ()
{
    char loop = 'y',code;
    int pilihan1,pilihan2,id,pin,durasi,harga,total_biaya,diskon,total_bayar,bayar,kembalian;
    string nama,tipe;

    while(loop == 'y' || loop == 'Y'){
        system("cls");
        cout<<"======================================\n";
        cout<<"\tJasa Motor Pak Dengklek\n";
        cout<<"======================================\n";
        cout<<"1. Login Member\n2. Lewati\n3. Keluar\n";
        cout<<"Pilihan : ";cin>>pilihan1;

        if(pilihan1==1){
            cout<<"======================================\n";
            cout<<"\t\tLogin\n";
            cout<<"======================================\n";
            cout<<"No.ID\t: ";cin>>id;
            cout<<"Pin\t: ";cin>>pin;

            
            if(id==123 && pin==123){
                cout<<"Sukses Login :))\n";
                menu:
                cout<<"======================================\n";
                cout<<"\tPilihan Motor\n";
                cout<<"======================================\n";
                cout<<"1. Astrea\n2. Supra\n3. Nmax\n";
                cout<<"Pilihan : ";cin>>pilihan2;

                if(pilihan2==1){
                    cout<<"Harga Sewa Astrea 50000/hari\n";
                    cout<<"Lanjut Transaksi (y/n)?";cin>>code;

                    if(code == 'y' || code == 'Y'){
                        cout<<"Nama Penyewa\t: ";cin.ignore();getline(cin,nama);
                        cout<<"Durasi Sewa(hari) : ";cin>>durasi;
                        harga = 50000;
                        tipe = "Astrea";

                    }else {
                        goto menu;
                    }
                }else if(pilihan2==2){
                    cout<<"Harga Sewa Supra 10000/hari\n";
                    cout<<"Lanjut Transaksi (y/n)?";cin>>code;

                    if(code == 'y' || code == 'Y'){
                        cout<<"Nama Penyewa\t: ";cin.ignore();getline(cin,nama);
                        cout<<"Durasi Sewa(hari) : ";cin>>durasi;
                        harga = 100000;
                        tipe = "Supra";

                    }else {
                        goto menu;
                    }
                }else if(pilihan2==3){
                    cout<<"Harga Sewa Nmax 15000/hari\n";
                    cout<<"Lanjut Transaksi (y/n)?";cin>>code;

                    if(code == 'y' || code == 'Y'){
                        cout<<"Nama Penyewa\t: ";cin.ignore();getline(cin,nama);
                        cout<<"Durasi Sewa(hari) : ";cin>>durasi;
                        harga = 150000;
                        tipe = "Nmax";

                    }else {
                        goto menu;
                    }
                }else {
                    cout<<"Salah input";
                    return 0;
                }
                system("cls");
                cout<<"======================================\n";
                cout<<"\tRekap Data\n";
                cout<<"======================================\n";
                cout<<"Nama Penyewa\t: "<<nama<<endl;
                cout<<"Tipe Motor\t: "<<tipe<<endl;
                cout<<"Harga/hari\t: "<<harga<<endl;
                cout<<"Durasi\t\t: "<<durasi<<" hari"<<endl;

                total_biaya = durasi*harga;
                cout<<"Total Biaya\t: "<<total_biaya<<endl;

                diskon = total_biaya*15/100;
                cout<<"Diskon\t\t: "<<diskon<<endl;

                total_bayar = total_biaya-diskon;
                cout<<"Total Bayar\t: "<<total_bayar<<endl;

                cout<<"\nUang Bayar\t: ";cin>>bayar;

                kembalian = bayar-total_bayar;
                cout<<"Kembalian\t: "<<kembalian<<endl;
            }
            cout<<"\nTransaksi Lagi  (y/n)? "; cin >> loop;
        }else if (pilihan1==2){
            menu2:
            cout<<"======================================\n";
            cout<<"\tPilihan Motor\n";
            cout<<"======================================\n";
            cout<<"1. Astrea\n2. Supra\n3. Nmax\n";
            cout<<"Pilihan : ";cin>>pilihan2;

            if(pilihan2==1){
                cout<<"Harga Sewa Astrea 50000/hari\n";
                cout<<"Lanjut Transaksi (y/n)?";cin>>code;

                if(code == 'y' || code == 'Y'){
                    cout<<"Nama Penyewa\t: ";cin.ignore();getline(cin,nama);
                    cout<<"Durasi Sewa(hari) : ";cin>>durasi;
                    harga = 50000;
                    tipe = "Astrea";

                }else{
                    goto menu2;
                }
            }else if(pilihan2==2){
                cout<<"Harga Sewa Supra 10000/hari\n";
                cout<<"Lanjut Transaksi (y/n)?";cin>>code;

                if(code == 'y' || code == 'Y'){
                    cout<<"Nama Penyewa\t: ";cin.ignore();getline(cin,nama);
                    cout<<"Durasi Sewa(hari) : ";cin>>durasi;
                    harga = 100000;
                    tipe = "Supra";

                }else{
                    goto menu2;
                }
            }else if(pilihan2==3){
                cout<<"Harga Sewa Nmax 15000/hari\n";
                cout<<"Lanjut Transaksi (y/n)?";cin>>code;

                if(code == 'y' || code == 'Y'){
                    cout<<"Nama Penyewa\t: ";cin.ignore();getline(cin,nama);
                    cout<<"Durasi Sewa(hari) : ";cin>>durasi;
                    harga = 150000;
                    tipe = "Nmax";

                }else{
                    goto menu2;
                }
            }else{
                cout<<"Salah input";
                return 0;
            }
            system("cls");
            cout<<"======================================\n";
            cout<<"\tRekap Data\n";
            cout<<"======================================\n";
            cout<<"Nama Penyewa\t: "<<nama<<endl;
            cout<<"Tipe Motor\t: "<<tipe<<endl;
            cout<<"Harga/hari\t: "<<harga<<endl;
            cout<<"Durasi\t\t: "<<durasi<<" hari"<<endl;

            total_biaya = durasi*harga;
            cout<<"Total Biaya\t: "<<total_biaya<<endl;

            diskon = 0;
            cout<<"Diskon\t\t: "<<diskon<<endl;

            total_bayar = total_biaya-diskon;
            cout<<"Total Bayar\t: "<<total_bayar<<endl;

            cout<<"\nUang Bayar\t: ";cin>>bayar;

            kembalian = bayar-total_bayar;
            cout<<"Kembalian\t: "<<kembalian<<endl;

            cout<<"\nTransaksi Lagi  (y/n)? "; cin >> loop;
        }else{
            return 0;
        }
    }
}
