#include <iostream>

using namespace std;

//fungsi tanpa nilai balik dengan argumen, untuk menjumlahkan hasil transaksi Topup
void topupSaldo(int saldo, int jumlah, string metode) {
	int topup = saldo + jumlah;
	cout << "Selamat! transaksi Topup Diamond anda sebesar " << jumlah << " berhasil, melalui metode pembayaran " << metode << endl;
	cout <<  "Saldo Diamond anda saat ini: " << topup << endl;
}

//fungsi utama yang wajib ada didalam bahasa c++
int main() {
	//tipe data integer untuk memuat sebuah bilangan bulat
	int saldo = 0, jumlah = 0, pilihan, pembayaran;
	//array statis dengan tipe data integer untuk menyimpan nilai jumlah saldo
	int harga[6] = {0, 500, 600, 100, 1000, 550};
	//array statis dengan tipe data string untuk menyimpan daftar pembelian aplikasi
	string beli[6] = {"", " paket hero ", " paket skin ", " paket emote ", " paket efek recall ", " paket starlight member "};
	//tipe data string untuk memuat sebuah kalimat
	string metode;
	//tipe data char untuk memuat sebuah huruf
	char pilih;
	//perulangan/looping do-while untuk terus mengulangi program aplikasi
	do{
		//label argumen yang menjadi tujuan lompatan perintah goto
		menu:
		//perintah untuk membersihkan layar console atau menghapus teks yang ditampilkan sebelumnya
		system("cls");
		int i=0, topup = saldo+jumlah;
		//program menu awal
		cout << "===================================================" << endl;
		cout << "selamat datang diprogram fedhayyen aplikasi topup game online!!" << endl;
		cout << "===================================================" << endl;
		cout << endl;
		cout << "Saldo anda saat ini: " << topup << endl << endl;
    	cout << "Menu:" << endl;
    	cout << "1. Topup saldo diamond" << endl;
    	cout << "2. pembelian dalam aplikasi" << endl;
    	cout << "3. Keluar" << endl;
    	cout << "Masukkan pilihan: ";
    	//perintah input untuk memilih output yang akan dijalankan
		cin >> pilihan;
		//controlflow/percabangan switch agar perintah input dapat memilih menu program yang akan dijalankan
    	switch (pilihan) {
    		//kode program case akan berjalan jika nilai input telah terpenuhi
        	case 1:
			system("cls");
			cout << "Masukkan jumlah Topup Diamond anda: ";
			cin >> jumlah;
    		cout << "1. Kartu kredit" << endl;
    		cout << "2. Kartu debit" << endl;
    		cout << "3. Transfer bank" << endl;
        	cout << "Pilih metode pembayaran: ";
			cin >> pembayaran;
			//controlflow if, elseif, else salah satu program akan dijalankan apabila input sebuah kondisi terpenuhi 
        	if(pembayaran == 1) metode = "kartu kredit";
        	else if(pembayaran == 2) metode = "kartu debit";
			else if(pembayaran == 3) metode = "transfer bank";
			else cout << "Pilihan tidak valid." << endl;
			cout << endl;
			//pemanggilan fungsi tanpa nilai balik dengan argumen agar dapat tercetak 
			topupSaldo(saldo, jumlah, metode);
			//menghentikan kode program case jika kondisi telah terpenuhi 
			break;
			case 2:
				system("cls");
				cout << "saldo Diamond anda saat ini : " << topup << endl;
				cout << "silahkan lakukan pembelian" << endl;
				//perulangan/looping for untuk terus mengulangi mencetak nilai array sampai kondisi bernilai false
				for(i; i<=5; i++){
					//controlflow if untuk membanding nilai agar menghasilkan output array yang sesuai
					if(i==1) cout << i << beli[i] << harga[i] << endl;
					if(i==2) cout << i << beli[i] << harga[i] << endl;
					if(i==3) cout << i << beli[i] << harga[i] << endl;
					if(i==4) cout << i << beli[i] << harga[i] << endl;
					if(i==5) cout << i << beli[i] << harga[i] << endl;
				}
				cout << endl;
				cout << "masukan pilihan : ";
				cin >> i;
				//perbandingan agar pembelian sesuai dengan harga
				if(topup<=harga[1,2,3,4,5]) cout << "saldo Diamond anda tidak cukup";
				//perbandingan agar nilai input tidak melebihi nilai dari daftar menu
				if(i >= 5) cout << "pilihan tidak valid";
				//nested if untuk membandingkan 2 kondisi agar tidak menghasilkan output yang sama
				if(i <= 5) {
					if(topup>=harga[1,2,3,4,5]){
						cout << "selamat pembelian:" << beli[i] << "seharga: " << harga[i] << " Diamond, anda berhasil!" << endl;
						cout << "sisa saldo Diamond anda saat ini : " << topup - harga[i];
						cout << endl;
					}
				}
			break;
        	case 3:
        		system("cls");
            	cout << "Terima kasih telah menggunakan layanan kami" << endl;
        	break;
    	}
    	cout << endl;
    	cout << "kembali ke menu utama?(y/t) : ";
    	cin >> pilih;
    	//jika yang diinput bernilai true maka perintah goto akan membuatkan loncatan kembali ke label argumen menu
    	if(pilih == 'y') goto menu;
    	//jika yang diinput bernilai false maka perintah return0 akan mengakhiri program
		else return 0;
		//jika nilai input sesuai dengan kondisi while maka akan menjalankan program dalam do
    }while(pilih);
}
