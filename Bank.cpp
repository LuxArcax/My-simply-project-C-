#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class bank {
    private:
    char titik = '.';
    int sisa_sld[5] = {1, 000, 000};
    int sisa_saldo = 1000000;
    string login = "Fadhil";
    int password = 0000;
    int narik_sld;    
    int choose;

    public:
        void login_sld(){
        cout << "Masukkan Nama Account: "; 
        cin >> login; 
            cout << "Password: "; 
            cin >> password;
                if(login == "Fadhil" && password == 0000){
                cout <<  endl;
                cout << "PILIH: " << endl << "1. Tarik saldo" << endl << "2. Cek saldo" << endl << "3. KELUAR" << endl << "PILIHAN KAMU: ";
                cin >> choose;
                switch (choose)
                {
                case 1:
                    tarik_sld();
                    break;
                case 2:
                    cek_sld();  
                    break;
                case 3:
                    exit(0);
                }
            } else if(login != "Fadhil" && password != 0000){
                cout << "Maaf login gagal :0" << endl;
            }
        }

        void tarik_sld(){
            cout << "Masukkan saldo yang ingin Anda tarik: ";
            cin >> narik_sld;
            if(narik_sld >= 1000000000) {
                cout << "Saldo kamu mah nggga segini banyaknya xixixi :0";
            } else if (narik_sld <= 0)
            {
                cout << "Maaf saldo yang Anda masukkan tidak valid!" << endl;
            } else if (narik_sld >= 0 && narik_sld <= 100000){
                cout << "Saldo yang ditarik: " << narik_sld << endl;
                cout << "Sisa Saldo: " << sisa_saldo - narik_sld << endl;
                cout << "KETIK 1 UNTUK KEMBALI KE MENU UTAMA" << endl << "KETIK 2 UNTUK KELUAR" << endl << "PILIHAN KAMU: ";
                cin >> choose;
                switch (choose)
                {
                case 1:
                    login_sld();
                    break;
                case 2:
                    exit(0);
                    break;
                }
            }
            
        }

        void cek_sld(){
            cout << "Saldo sisa: " << sisa_sld[0] << '.' << sisa_sld[1] << sisa_sld[2] << sisa_sld[1] << '.' << sisa_sld[1] << sisa_sld[1] << sisa_sld[1] << endl;
            cout << "KETIK 1 UNTUK KE MENU UTAMA" << endl << "KETIK 2 UNTUK KELUAR" << endl << "PILIHAN KAMU: "; cin >> choose; 
            switch (choose)
            {
            case 1:
                login_sld();
                break;
            case 2:
                exit(0);
                break;
            }
        }

};




int main(){
int choose;
bank bank1;
cout << "====BANK ACCOUNT====" << endl;
cout << "1. Login" << endl;
cout << "2. Quit" << endl;
cout << "====PILIH DIANTARA PILIHAN DIATAS====: ";
cin >> choose;
switch (choose)
{
case 1:
    bank1.login_sld();
    break;
}
return 0;
}