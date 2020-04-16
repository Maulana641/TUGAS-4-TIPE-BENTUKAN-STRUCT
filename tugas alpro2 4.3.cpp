#include<iostream>
using namespace std;

main()
{
 struct buku{
    char judul[15];
    int tahun_terbit;
    int harga;
    char penerbit [50];
    char penulis [50];
};
 buku data;

 cout<<"Masukan data buku "<<endl;
 cout<<"Masukan judul Buku      : ";cin>>data.judul;
 cout<<"Masukan Tahun Terbit   : ";cin>>data.tahun_terbit;
 cout<<"Masukan Harga Buku     : ";cin>>data.harga;
 cout<<"Masukan Penerbit buku : ";cin>>data.penerbit;
 cout<<"Masukan Penulis buku   : ";cin>>data.penulis;

 cout<<endl<<endl<<"Tampilkan Data hasilnya"<<endl;
 cout<<"Judul Buku        : "<<data.judul<<endl;
 cout<<"Tahun Terbit     : "<<data.tahun_terbit<<endl;
 cout<<"Harga Buku       : "<<data.harga<<endl;
 cout<<"Penerbit Buku   : "<<data.penerbit<<endl;
 cout<<"Penulis  Buku	 : "<<data.penulis<<endl;
return 0;

}
