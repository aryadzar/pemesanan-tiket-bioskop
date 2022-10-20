//Raihan Rifandi (2217051043)
//Muhammad Arya Dzaky Arenanto (2217051007)
//Awalinda Pangestuti (2217051088)





#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

#define nekopay 0.069


int kursi123[100]={1,2,3,4,5,6,7,8,9,10};
char choice;
char kursi;
int nokursi;
int pilihan;
char endofline;
char pembayaran;
int no;
float jumlahharga;
float total;
int duit;
int debit;
int cc;
int tanggal;


void header (){
	HANDLE hex=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hex,4);
	cout << "\t\t\t\t\t\t*************************************************************************\n";
	
	cout << "\t\t\t\t\t\t*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*****";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,6);
	cout << "****";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,6);
	cout << "****";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "**";
	SetConsoleTextAttribute(hex,4);
	cout << "*";
	SetConsoleTextAttribute(hex,6);
	cout << "**";
	SetConsoleTextAttribute(hex,4);
	cout << "*******";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "*******";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "******\n";
	
	
	cout << "\t\t\t\t\t\t*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "*********";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "***";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,6);
	cout << "****";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);	
	cout << "*";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "*";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "******";
	SetConsoleTextAttribute(hex,6);
	cout << "***";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "***";
	SetConsoleTextAttribute(hex,4);
	cout << "**";
	SetConsoleTextAttribute(hex,6);
	cout << "***";
	SetConsoleTextAttribute(hex,4);
	cout << "*****\n";
	
	
	
	cout << "\t\t\t\t\t\t*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "*********";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "***";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "*********";
	SetConsoleTextAttribute(hex,6); 
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "***";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "***";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "******\n";
	
	
	cout << "\t\t\t\t\t\t*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*****";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "***";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,6);
	cout << "****";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);	
	cout << "***";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "*****";
	SetConsoleTextAttribute(hex,6);
	cout << "*";
	SetConsoleTextAttribute(hex,4);
	cout << "****************\n";
	
	
	SetConsoleTextAttribute(hex,4);
	cout << "\t\t\t\t\t\t*************************************************************************\n";
	cout << "\t\t\t\t\t\t\t\t\t  Powered By Nekopay\n";
	cout << "\t\t\t\t\t\t\t\t    Bayar Tagihan Tanpa Neko-Neko";
}

	//SetConsoleTextAttribute(hex,);

bool cinemas (bool booking_ticket = false){
	kembali:
	do {
	cout << "\n\t\t\t\t\t\t\t    ________________________________________________";
	cout << "\n\t\t\t\t\t\t\t   |TEKAN Y UNTUK MEMESAN TIKET                     |";
    cout << "\n\t\t\t\t\t\t\t   |TEKAN N UNTUK KELUAR DARI APLIKASI              |";
    cout << "\n\t\t\t\t\t\t\t   |________________________________________________|";
    cout << "\n\t\t\t\t\t\t\t    PILIHAN: ";
    cin >> choice;
  	switch (choice){
	case 'Y': case 'y':
		cout << "\n\n\n\t\t\t\t\t\t\t\t\t===========================";
		cout << "\n\t\t\t\t\t\t\t\t\t=========CINEMA C++========";
		cout << "\n\t\t\t\t\t\t\t\t\t===========================";
		booking_ticket = true;
		break;
	case 'N': case 'n':
	cout<<" Terima Kasih Telah Menggunakan Aplikasi ini";
	return 0;
	default:
		cout << "\n\n\t\t\t\t\t\t\t\t  INPUT YANG ANDA MASUKKAN TIDAK SESUAI";
} 

}while (choice!=9 && booking_ticket!=true);
     
    do {
	if (booking_ticket){
		cout << "\n\n\t\t\t\t\t\t     Silahkan memilih judul film dan jadwal nonton yang anda inginkan";
		cout << "\n\t\t\t\t\t\t   __________________________________________________________________________________________________________";
		cout << "\n\t\t\t\t\t\t  |NO|        JUDUL                                       |     JADWAL TAYANG     |     RATING              |";
		cout << "\n\t\t\t\t\t\t  |1 |  Beranak Dalam Kubur                               |      10.15-11.45      |       R                 |";
		cout << "\n\t\t\t\t\t\t  |2 |  Azab Bolos Matkul DDP                             |      12.00-13.30      |       D18+              |";
		cout << "\n\t\t\t\t\t\t  |3 |  Tuming Bikin Pusing Kamu Bikin Salting            |      14.00-15.00      |       D22+              |";
		cout << "\n\t\t\t\t\t\t  |4 |  Beranak Dalam Kubur                               |      21.15-22.45      |       D18+              |";
		cout << "\n\t\t\t\t\t\t  |5 | Cintaku Berawal Dari Kodingan                      |      10.15-11.30      |       D17+              |";
		cout << "\n\t\t\t\t\t\t  |6 |      G30S/PDIP                                     |      00.00-01.30      |       SEMUA UMUR        |";
		cout << "\n\t\t\t\t\t\t  |_________________________________________________________________________________________________________|";
		cout << "\n\t\t\t\t\t\t  Masukan Sesuai Dengan No yang Telah Disediakan Di Atas: ";
		cin>>pilihan;
	}
}while (pilihan != 1&&pilihan != 2&&pilihan != 3&&pilihan != 4&&pilihan != 5&&pilihan != 6);
}


void struk(){

	system("cls");
if (pilihan==1){
  	cout << "\n\t\t\t\t\t\t     ________________________________________________________________________________|\n" ;
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
	cout << "\t\t\t\t\t\t      |                        MOVIE TICKET                       =    ______________  |\n";
	cout << "\t\t\t\t\t\t      |              Title    : Beranak Dalam Kubur               =   |              | |\n";
	cout << "\t\t\t\t\t\t      |              Time     : 10.15-11.45                       =   | @*****@&**** | |\n";
	cout << "\t\t\t\t\t\t      |              Studio   : 1                                 =   | *****.**..** | |\n";
	cout << "\t\t\t\t\t\t      |              Row: Seat:"<<kursi<<nokursi<<"               =   | ***&******** | |\n";
	cout << "\t\t\t\t\t\t      |                                                           =   | @***&***@... | |\n";
	cout << "\t\t\t\t\t\t      |    CINEMA C++                                             =   |______________| |\n";
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
   
}else if (pilihan==2){
	cout << "\n\t\t\t\t\t\t     ________________________________________________________________________________|\n" ;
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
	cout << "\t\t\t\t\t\t      |                        MOVIE TICKET                       =    ______________  |\n";
	cout << "\t\t\t\t\t\t      |              Title    : Azab Bolos Matkul DDP             =   |              | |\n";
	cout << "\t\t\t\t\t\t      |              Time     : 12.00-13.30                       =   | @*****@&**** | |\n";
	cout << "\t\t\t\t\t\t      |              Studio   : 1                                 =   | *****.**..** | |\n";
	cout << "\t\t\t\t\t\t      |              Row: Seat:"<<kursi<<nokursi<<"               =   | ***&******** | |\n";
	cout << "\t\t\t\t\t\t      |                                                           =   | @***&***@... | |\n";
	cout << "\t\t\t\t\t\t      |    CINEMA C++                                             =   |______________| |\n";
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
}else if (pilihan==3){
	cout << "\n\t\t\t\t\t\t     ________________________________________________________________________________|\n" ;
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
	cout << "\t\t\t\t\t\t      |                        MOVIE TICKET                       =    ______________  |\n";
	cout << "\t\t\t\t\t\t      |              Title    : Tuming Pusing Kamu Bikin Salting  =   |              | |\n";
	cout << "\t\t\t\t\t\t      |              Time     : 14.00-15.00                       =   | @*****@&**** | |\n";
	cout << "\t\t\t\t\t\t      |              Studio   : 1                                 =   | *****.**..** | |\n";
	cout << "\t\t\t\t\t\t      |              Row: Seat:" <<kursi<<nokursi<<"              =   | ***&******** | |\n";
	cout << "\t\t\t\t\t\t      |                                                           =   | @***&***@... | |\n";
	cout << "\t\t\t\t\t\t      |    CINEMA C++                                             =   |______________| |\n";
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
}else if (pilihan==4){
    cout << "\n\t\t\t\t\t\t     ________________________________________________________________________________|\n" ;
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
	cout << "\t\t\t\t\t\t      |                        MOVIE TICKET                       =    ______________  |\n";
	cout << "\t\t\t\t\t\t      |              Title    : Beranak Dalam Kubur               =   |              | |\n";
	cout << "\t\t\t\t\t\t      |              Time     : 10.15-11.45                       =   | @*****@&**** | |\n";
	cout << "\t\t\t\t\t\t      |              Studio   : 1                                 =   | *****.**..** | |\n";
	cout << "\t\t\t\t\t\t      |              Row: Seat:" <<kursi<<nokursi<<"              =   | ***&******** | |\n";
	cout << "\t\t\t\t\t\t      |                                                           =   | @***&***@... | |\n";
	cout << "\t\t\t\t\t\t      |    CINEMA C++                                             =   |______________| |\n";
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
}else if (pilihan==5){
	cout << "\n\t\t\t\t\t\t     ________________________________________________________________________________|\n" ;
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
	cout << "\t\t\t\t\t\t      |                        MOVIE TICKET                       =    ______________  |\n";
	cout << "\t\t\t\t\t\t      |              Title    : Cintaku Berawal Dari Codingan     =   |              | |\n";
	cout << "\t\t\t\t\t\t      |              Time     : 10.15-11.30                       =   | @*****@&**** | |\n";
	cout << "\t\t\t\t\t\t      |              Studio   : 1                                 =   | *****.**..** | |\n";
	cout << "\t\t\t\t\t\t      |              Row: Seat:" <<kursi<<nokursi<<"              =   | ***&******** | |\n";
	cout << "\t\t\t\t\t\t      |                                                           =   | @***&***@... | |\n";
	cout << "\t\t\t\t\t\t      |    CINEMA C++                                             =   |______________| |\n";
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
	
}else if (pilihan==6){
	 cout << "\n\t\t\t\t\t\t     ________________________________________________________________________________|\n" ;
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
	cout << "\t\t\t\t\t\t      |                        MOVIE TICKET                       =    ______________  |\n";
	cout << "\t\t\t\t\t\t      |              Title    : G30S/PKI(PDIP)                    =   |              | |\n";
	cout << "\t\t\t\t\t\t      |              Time     : 10.15-11.30                       =   | @*****@&**** | |\n";
	cout << "\t\t\t\t\t\t      |              Studio   : 1                                 =   | *****.**..** | |\n";
	cout << "\t\t\t\t\t\t      |              Row: Seat:" <<kursi<<nokursi<<"              =   | ***&******** | |\n";
	cout << "\t\t\t\t\t\t      |                                                           =   | @***&***@... | |\n";
	cout << "\t\t\t\t\t\t      |    CINEMA C++                                             =   |______________| |\n";
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
	cout << "\t\t\t\t\t\t      |________________________________________________________________________________|\n";
	
	
	

}else {
	cout<<" Masukan Kode Dengan Benar";
}

}



void pembayaranbioskop(){

do {

cout<<"\n\n\tPilih Pembayaran Yang Anda Inginkan Gopay(G/g) Debit(D/d): ";
cin>>pembayaran;

if (pembayaran=='G' || pembayaran=='g' ){

   cout<<" \nBiaya Anda : Rp.50.000 *belum termasuk ppn";
   cout<<"\nMasukan No HP Anda : ";
   cin>>no;
   jumlahharga= 50000+(50000*nekopay);
   cout<<"Pembayaran Anda : "<<jumlahharga;
   getch();


}else if(pembayaran== 'D' || pembayaran== 'd' ){
      cout<<" \nBiaya Anda : Rp.50.000 *belum termasuk ppn";
      cout<<" \nMasukan No. Kartu Debit Anda : ";
	  cin>>debit;
	  cout<<" \nExpire date: ";
	  cin>>tanggal;
	  cout<<" \nCCV : ";
      cin>>cc;
	  jumlahharga= 50000+(50000*nekopay);
      cout<<"Pembayaran Anda : "<<jumlahharga;
	  getch();

}  
}while(pembayaran !='G'&& pembayaran!='g'&& pembayaran !='C'&&pembayaran != 'c'&& pembayaran !='D'&& pembayaran != 'd' );


}


void tempatdudukbooking(){


    system("CLS");
cout<<"---------------------------------------------------------------------\n";
cout<<"-----------------SILAHKAN PILIH TEMPAT DUDUK ANDA--------------------\n"; 
cout<<"---------------------------------------------------------------------\n";
cout<<"\n\n"; 
   char huruf1 = 'A';
   char huruf2 = 'B';
   char huruf3 = 'C';
   char huruf4 = 'D';
   char huruf5 = 'E';
   char huruf6 = 'F';
   char huruf7 = 'G';
   char huruf8 = 'H';
   char huruf9 = 'I';
   char huruf10 = 'J';
   char huruf11 = 'K';
   char huruf12 = 'L';
   char huruf13 = 'M';
   char huruf14 = 'O';
   
 for (int i=1;i<=12;i++){

    cout<<"["<<huruf1<<i<<"]"<<" ";

    if (i%4 == 0){

        cout<<"\t";
    }

 }
 
for (int j=1;j<=12;j++){
    
    if (j==1){

        cout<<endl;
    }
    cout<<"["<<huruf2<<j<<"]"<<" ";

    if (j%4 == 0){

        cout<<"\t";
    }

 }

for (int k=1;k<=12;k++){
    
    if (k==1){

        cout<<endl;
    }
    cout<<"["<<huruf3<<k<<"]"<<" ";

    if (k%4 == 0){

        cout<<"\t";
    }

 }


for (int l=1;l<=12;l++){
    
    if (l==1){

        cout<<endl;
    }
    cout<<"["<<huruf4<<l<<"]"<<" ";

    if (l%4 == 0){

        cout<<"\t";
    }

 }

for (int m=1;m<=12;m++){
    
    if (m==1){

        cout<<endl;
    }
    cout<<"["<<huruf5<<m<<"]"<<" ";

    if (m%4 == 0){

        cout<<"\t";
    }

 }

 for (int n=1;n<=12;n++){
    
    if (n==1){

        cout<<endl;
    }
    cout<<"["<<huruf6<<n<<"]"<<" ";

    if (n%4 == 0){

        cout<<"\t";
    }

 }

for (int o=1;o<=12;o++){
    
    if (o==1){

        cout<<endl;
    }
    cout<<"["<<huruf7<<o<<"]"<<" ";

    if (o%4 == 0){

        cout<<"\t";
    }

 }

for (int p=1;p<=12;p++){
    
    if (p==1){

        cout<<endl;
    }
    cout<<"["<<huruf8<<p<<"]"<<" ";

    if (p%4 == 0){

        cout<<"\t";
    }

 }
for (int q=1;q<=12;q++){
    
    if (q==1){

        cout<<endl;
    }
    cout<<"["<<huruf9<<q<<"]"<<" ";

    if (q%4 == 0){

        cout<<"\t";
    }

 }

for (int r=1;r<=12;r++){
    
    if (r==1){

        cout<<endl;
    }
    cout<<"["<<huruf10<<r<<"]"<<" ";

    if (r%4 == 0){

        cout<<"\t";
    }

 }
 
 for (int s=1;s<=12;s++){
    
    if (s==1){

        cout<<endl;
    }
    cout<<"["<<huruf11<<s<<"]"<<" ";

    if (s%4 == 0){

        cout<<"\t";
    }

 }

for (int t=1;t<=12;t++){
    
    if (t==1){

        cout<<endl;
    }
    cout<<"["<<huruf12<<t<<"]"<<" ";

    if (t%4 == 0){

        cout<<"\t";
    }

 }
 
 for (int u=1;u<=12;u++){
    
    if (u==1){

        cout<<endl;
    }
    cout<<"["<<huruf13<<u<<"]"<<" ";

    if (u%4 == 0){

        cout<<"\t";
    }

 }

 for (int v=1;v<=12;v++){
    
    if (v==1){

        cout<<endl;
    }
    cout<<"["<<huruf14<<v<<"]"<<" ";

    if (v%4 == 0){

        cout<<"\t";
    }

 }



cout<<"\n\n\n\n________________________________LAYAR BIOSKOP__________________________________\n";

cout<<"\n\n\n\t\tNote : Untuk Format Yang Dimasukan Harus Sama Dengan Tampilan Kursi Yang Ada Di Atas";
do {

cout<<"\n\n\n\n\t\t\tSilahkan Kursi Yang Anda Inginkan: ";
cout<<" \n\n\n\n\t\t\tMasukan Hurufnya : ";
cin>>kursi;
}while (kursi!='A'&&kursi!='B'&&kursi!='C'&&kursi!='D'&&kursi!='E'&&kursi!='F'&&kursi!='G'&&kursi!='H'&&kursi!='I'&&kursi!='J'&&kursi!='K'&&kursi!='L'&&kursi!='M'&&kursi!='N'&&kursi!='O');
do{
cout<<" \n\t\t\tMasukan Nomor Kursinya :";
cin>>nokursi;
}while (nokursi!=1&&nokursi!=2&&nokursi!=3&&nokursi!=4&&nokursi!=5&&nokursi!=6&&nokursi!=7&&nokursi!=8&&nokursi!=9&&nokursi!=10&&nokursi!=11&&nokursi!=12);
}

bool footer (bool goback=false) {
		cout << "Terima Kasih Telah Memesan Di Sini";


}

int main (){
    header();
    balik :
    cinemas();

    if (choice=='N'||choice=='n'){
    	
    	system("exit");
	}else{
    pembayaranbioskop();
    tempatdudukbooking();
    struk();
    footer();
    do{
    cout<<" Apakah Ingin Memesan Kembali ? Yes(Y) atau tidak(N) : ";
    cin>>endofline;
    if (endofline =='Y'){
    goto balik;
    system ("CLS");
}else if (endofline=='N'){
	
	system ("exit");
}


}while (endofline!='Y'&&endofline!='N');



	
	
}

}






	
