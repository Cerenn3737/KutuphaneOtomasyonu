#include<iostream>
#include<string.h>
#include<stdlib.h> 
#include<time.h>

using namespace std;

struct kitaplar{
	int barkod;
	string kitapadi;
	string yazaradi;
	int stoksayisi;
	
}kitap;

struct uyekaydi{
	int tc;
	string adi;
	string soyadi;
	char cinsiyet;
	int telefonno;
}uye;

struct emanetler{
	int uyetc;
	int kitapbarkod;
	int teslimtarihi;
	int iadetarihi;
}emanet;

 

void kitapekle()
{
	system("cls");
	cout<<"-Kitap Ekleme Ekrani-"<<endl;
    cout<<"Kitap barkod no:";
	cin>>kitap.barkod;
	cout<<"Kitap adi:";
	cin>>kitap.kitapadi;
	cout<<"Kitap yazari";
	cin>>kitap.yazaradi;
	cout<<"Kitap stok durumu:";
	cin>>kitap.stoksayisi;
	
	cout<<kitap.barkod<<"\t"<<kitap.kitapadi<<"\t"<<kitap.yazaradi<<"\t"<<kitap.stoksayisi<<endl;
}
void kitapsil()
{
	system("cls");
	cout<<"-Kitap Silme Ekrani-"<<endl;
    cout<<"Kitap barkod no:";
	cin>>kitap.barkod;
	
}
void kitaplistele()
{
	
}




void kitapislemleri()
{   
    int secim;
    system("cls");//sayesinde ekraný temizliyoruz
	cout<<"Kitap islemleri ekrani"<<endl;
	cout<<"1-Kitap ekle"<<endl;
	cout<<"2-Kitap sil"<<endl;
	cout<<"3-Kitap Listele"<<endl;
	cout<<"0-Ana Menuye don"<<endl;
	cout<<"Yapmak istediginiz islemi seciniz:";
	cin>>secim;
	
	switch(secim)
	{
		case 1: kitapekle();
		        break;
		case 2: kitapsil();
		        break;
	    case 3: kitaplistele();
	            break;
	    case 0: break;
	    default: cout<<"Hatali Islem! Lutfen yukaridaki sayilardan birini seciniz...";
	             break;
	}
	system("pause");
}
void uyeislemleri()
{
	
}
void emanetkitapislemleri()
{
	
}

int menu()
{   
    int secim;
	cout<<"\t\t\t-Kutuphane Giris Sistemine Hos Geldiniz-"<<endl;
	cout<<endl;
	cout<<"1- Kitap Islemleri"<<endl;
	cout<<"2- Uye Islemeleri"<<endl;
	cout<<"3- Emanet Kitap Islemeleri"<<endl;
	cout<<"0- Programi Kapat"<<endl;
	cout<<"Yukaridaki islemlerden hangisini secmek istersiniz:";
	cin>>secim;
	
	return secim;
	
}

int main()
{
	int secim=menu();
	 
	 
	while(secim!=0)
	{
	  switch(secim)
	  {
	  	case 1: kitapislemleri();
	  	        break;
	  	case 2: uyeislemleri();
	  	        break;
	    case 3: emanetkitapislemleri();
	            break;
	    case 0: break;
	    default: cout<<"Yapmis oldugunuz giris hatali! Lutfen tekrar deneyiniz..."<<endl<<endl;
	  }
	  secim=menu();
	}
	
}
