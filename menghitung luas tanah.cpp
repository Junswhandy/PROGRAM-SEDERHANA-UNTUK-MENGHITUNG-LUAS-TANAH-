#include <iostream>
#include <math.h>
using namespace std;
const float phi=3.14;
float P, L, S, r, LTK, LT, LB, LS;
int main(){
	cout<<"Masukan Panjang Tanah		:";
	cin>>P;
	cout<<"Masukan Lebar tanah		:";
	cin>>L;
	cout<<"Masukan sisi			:";
	cin>>S;
	cout<<"Masukan jari-Jari Sumur		:";
	cin>>r;
	LT=P*L;
	LB=S*S;
	LS=phi*pow(r,2);
	LTK=LT-LB-LS;
	cout<<"======================================================"<<endl;
	cout<<"Luas Tanah			=" << LT <<endl;
	cout<<"Luas Bangunan	  		=" << LB <<endl;
	cout<<"Luas sumur			=" << LS <<endl;
	cout<<"Luas Tanah Kosong		=" << LTK <<endl;
	return 0;
	
}
