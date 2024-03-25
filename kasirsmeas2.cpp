#include<iostream>
using namespace std;


int main(){
	
	char nama[30],pembeli[30];
	int harga, jumlah, total, jumlah_total, jumlah_bayar, kembalian, potongan;
	string input, kode;
	
	awal :
	cout<<"		Toko Klontong Fiko		"<<endl;
	cout<<"=============================="<<endl;
	cout<<"Nama pembeli : ";
	cin>>pembeli;
	cout<<"Barang yang tersedia"<<endl;
	cout<<"1 - Teh pucuk - Rp.4.000"<<endl;
	cout<<"2 - Roti aoka - Rp.3.000"<<endl;
	cout<<"3 - Indomie goreng - Rp.5.000"<<endl;
	cout<<"4 - Pop mie soto - Rp.7.000"<<endl;
	cout<<"5 - Onigiri - Rp.9.000"<<endl;
	
	
	cout<<endl;
	cout<<endl;
	cout<<"Barang yang dibeli : ";
	cin>>kode;
	cout<<"Jumlah barang yang dibeli : ";
	cin>>jumlah;
	
	
	if(kode == "1"){
		cout<<"Teh pucuk";
		harga = 4000;
	} else if (kode == "2"){
		cout<<"Roti aoka";
		harga = 3000;
	} else if (kode == "3"){
		cout<<"Indomie goreng";
		harga = 5000;
	} else if(kode == "4"){
		cout<<"Pop mie soto";
		harga = 7000;
	} else if(kode == "5"){
		cout<<"Onigiri";
		harga = 9000;
	} else{
		cout<<"Barang tidak tersedia";
	}
	
	cout<<endl;
	cout<<"============================"<<endl;
	cout<<"Struk Pembayaran"<<endl;
	cout<<"============================"<<endl;
	cout<<"Nama Pembeli : "<<pembeli<<endl;
	cout<<"Harga : "<<harga<<endl;
	cout<<"Jumlah : "<<jumlah<<endl;
	
	
	total= harga * jumlah;
	
	cout<<"Total : "<<total<<endl;
	
	cout<<endl;
	
	if (total == 100000 || total<150000){
		potongan = 0.05 * total;
	} else if(total > 150000){
		potongan = 0.10 * total;
	} else{
		potongan = 0;
	}
	
	cout<<"Potongan : "<<potongan<<endl;
	cout<<"================================"<<endl;
	
	jumlah_total = total-potongan;
	
	cout<<"Total Keseluruhan : "<<jumlah_total<<endl;
	cout<<"Uang Bayar : ";
	cin>>jumlah_bayar;
	
	kembalian = jumlah_bayar-jumlah_total;
	cout<<"Uang Kembalian : "<<kembalian<<endl;
	cout<<"=================================="<<endl;
	cout<<"      TERIMA KASIH ^_^            "<<endl;
	cout<<"=================================="<<endl;
	
	cout<<"Tambah Lagi [y/n] : ";
	cin>>input;
	
	if(input == "y" || input == "Y"){
		goto awal ;
	} else{
		return 0;
	}
	
	if(input == "n" || input == "N"){
		return 0;
	}
}