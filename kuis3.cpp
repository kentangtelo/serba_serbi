#include<iostream>
#include<string>
using namespace std;

main()
{
    char loop = 'y',code;
    int pilihan1,pilihan2,id,pin,durasi,harga;
    int total_biaya,diskon,total_bayar,bayar,kembalian;
    string nama,tipe;

    while(loop == 'y' || loop == 'Y'){
        menu :
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
        }
        if(id==123 && pin==123 || pilihan1==2){
            cout<<"======================================\n";
            cout<<"\tPilihan Motor\n";
            cout<<"======================================\n";
            cout<<"1. Astrea\n2. Supra\n3. Nmax\n4. Kembali\n5. Keluar\n";
            cout<<"Pilihan : ";cin>>pilihan2;
        
            if(pilihan2==1){
                cout<<"Harga sewa Astrea 50000/hari\n";
                harga = 50000;
                tipe = "Astrea";
            }else if(pilihan2==2){
                cout<<"Harga sewa Supra 100000/hari\n";
                harga = 100000;
                tipe = "Supra";
            }else if(pilihan2==3){
                cout<<"Harga sewa Nmax 150000/hari\n";
                harga = 150000;
                tipe = "Nmax";
            }else if(pilihan2==4){
                goto menu;
            }else{
                system("cls");
                cout<<"Terimakasih:))";
                return 0;   
            }
            cout<<"Lanjut Transaksi (y/n)? ";cin>>code;
            if(code=='y' || code=='Y'){
                cout<<"Nama Penyewa\t: ";cin.ignore();getline(cin,nama);
                cout<<"Durasi Sewa(hari) : ";cin>>durasi;
            }else{
                goto menu;
            }
            cout<<"\n\n======================================\n";
            cout<<"\tRekap Data\n";
            cout<<"======================================\n";
            cout<<"Nama Penyewa\t: "<<nama<<endl;
            cout<<"Tipe Motor\t: "<<tipe<<endl;
            cout<<"Harga/hari\t: "<<harga<<endl;
            cout<<"Durasi\t\t: "<<durasi<<" hari"<<endl;

            total_biaya = durasi*harga;
            cout<<"Total Biaya\t: "<<total_biaya<<endl;

            if(id==123 && pin==123){
                diskon = total_biaya*15/100;
            }else if(pilihan1==2){
                diskon = 0;
            }
            cout<<"Diskon\t\t: "<<diskon<<endl;

            total_bayar = total_biaya-diskon;
            cout<<"Total Bayar\t: "<<total_bayar<<endl<<endl;
            
            cout<<"======================================\n";
            cout<<"Uang Bayar\t: ";cin>>bayar;

            kembalian = bayar-total_bayar;
            cout<<"Kembalian\t: "<<kembalian<<endl;
            cout<<"======================================\n";
            cout<<"\nTransaksi Lagi (y/n)? ";cin>>loop;
        }else{
            system("cls");
            cout<<"Terimakasih:))";
            return 0;
        }   
    }
return 0;
}