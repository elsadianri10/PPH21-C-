#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <stdlib.h>
#include <fstream>
#include <windows.h>
using namespace std;
long long gaji,tunjangan,PKP,a,b,c,d,e,f,g,h,i,j,k,l,JHT,JP,PB,Tagihan,Neto,Netto,BJ;
float JKK,JK;
string status,bulan,npwp,nonpwp,nama,ulang;
long long a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4,d1,d2,d3,d4,e1,e2,e3,e4,f1,f2,f3,f4,g1,g2,g3,g4,h1,h2,h3,h4,i1,i2,i3,i4,j5,j2,j3,j4,k1,k2,k3,k4,l1,l2,l3,l4;
long long PKP1,PKP2,PKP3,PKP4,PKP5,PKP6,PKP7,PKP8,PKP9,PKP10,PKP11,PKP12;
long long m1,m2,m3,m4,n1,n2,n3,n4,o1,o2,o3,o4,p1,p2,p3,p4,q1,q2,q3,q4,r1,r2,r3,r4,s1,s2,s3,s4,t1,t2,t3,t4,u1,u2,u3,u4,v1,v2,v3,v4,w1,w2,w3,w4,x1,x2,x3,x4;
long long a5,a6,a7,a8,b5,b6,b7,b8,c5,c6,c7,c8,d5,d6,d7,d8,e5,e6,e7,e8,f5,f6,f7,f8,g5,g6,g7,g8,h5,h6,h7,h8,i5,i6,i7,i8,j6,j7,j8,j9,k5,k6,k7,k8,l5,l6,l7,l8;
void rumus()
{
	//1
	string line;
	long int index[11],indent=0;
  	ifstream myfile ("ptkp.txt");
  	if (myfile.is_open()){
    	while ( getline (myfile,line) ){
      		index[indent] = atol(line.c_str());
      		indent++;
    	}
    	myfile.close();
  	}
	a = index[0];
	b = index[1];
	c = index[2];
	d = index[3];
	e = index[4];
	f = index[5];
	g = index[6];
	h = index[7];
	i = index[8];
	j = index[9];
	k = index[10];
	l = index[11];
	//2
	JKK = 0.24/100*gaji;//Jaminan kesehatan kecelakaan
	JK = 0.3/100*gaji; // jaminan kesehatan
	JHT = 0.02 * gaji;//jaminan hari tua
	JP = 0.01 * gaji;//jaminan pensiun
	PB = gaji + tunjangan + JKK + JK;//penghasilan bruto
	BJ = 0.05 * PB;//biaya jabatan
	if (BJ>0 && BJ<=500000){
		BJ = 0.05 * PB;//biaya jabatan
	}
	else if (BJ>=500000){
		BJ=500000;
	}
	Tagihan  = BJ + JHT + JP;
	Neto = PB - Tagihan;
	Netto = Neto*12;
	//3
	PKP1= (floor((Netto - a)/1000)*1000);
	PKP2= (floor((Netto - b)/1000)*1000);
	PKP3= (floor((Netto - c)/1000)*1000);
	PKP4= (floor((Netto - d)/1000)*1000);
	PKP5= (floor((Netto - e)/1000)*1000);
	PKP6= (floor((Netto - f)/1000)*1000);
	PKP7= (floor((Netto - g)/1000)*1000);
	PKP8= (floor((Netto - h)/1000)*1000);
	PKP9= (floor((Netto - i)/1000)*1000);
	PKP10= (floor((Netto - j)/1000)*1000);
	PKP11= (floor((Netto - k)/1000)*1000);
	PKP12= (floor((Netto - l)/1000)*1000);
	//4
	a1 = (PKP1*0.05);
	a2 = ((50000000*0.05)+((PKP1-50000000)*0.15));
	a3 = ((50000000*0.05)+(200000000*0.15)+((PKP1-250000000)*0.25));
	a4 = ((50000000*0.05)+(200000000*0.15)+(250000000*0.25)+((PKP1-500000000)*0.30));
	b1 = (PKP2*0.05);
	b2 = ((50000000*0.05)+((PKP2-50000000)*0.15));
	b3 = ((50000000*0.05)+(200000000*0.15)+((PKP2-250000000)*0.25));
	b4 = ((50000000*0.05)+(200000000*0.15)+(250000000*0.25)+((PKP2-500000000)*0.30));
	c1 = (PKP3*0.05);
	c2 = ((50000000*0.05)+((PKP3-50000000)*0.15));
	c3 = ((50000000*0.05)+(200000000*0.15)+((PKP3-250000000)*0.25));
	c4 = ((50000000*0.05)+(200000000*0.15)+(250000000*0.25)+((PKP3-500000000)*0.30));
	d1 = (PKP4*0.05);
	d2 = ((50000000*0.05)+((PKP4-50000000)*0.15));
	d3 = ((50000000*0.05)+(200000000*0.15)+((PKP4-250000000)*0.25));
	d4 = ((50000000*0.05)+(200000000*0.15)+(250000000*0.25)+((PKP4-500000000)*0.30));
	e1 = (PKP5*0.05);
	e2 = ((50000000*0.05)+((PKP5-50000000)*0.15));
	e3 = ((50000000*0.05)+(200000000*0.15)+((PKP5-250000000)*0.25));
	e4 = ((50000000*0.05)+(200000000*0.15)+(250000000*0.25)+((PKP5-500000000)*0.30));
	f1 = (PKP6*0.05);
	f2 = ((50000000*0.05)+((PKP6-50000000)*0.15));
	f3 = ((50000000*0.05)+(200000000*0.15)+((PKP6-250000000)*0.25));
	f4 = ((50000000*0.05)+(200000000*0.15)+(250000000*0.25)+((PKP6-500000000)*0.30));
	g1 = (PKP7*0.05);
	g2 = ((50000000*0.05)+((PKP7-50000000)*0.15));
	g3 = ((50000000*0.05)+(200000000*0.15)+((PKP7-250000000)*0.25));
	g4 = ((50000000*0.05)+(200000000*0.15)+(250000000*0.25)+((PKP7-500000000)*0.30));
	h1 = (PKP8*0.05);
	h2 = ((50000000*0.05)+((PKP8-50000000)*0.15));
	h3 = ((50000000*0.05)+(200000000*0.15)+((PKP8-250000000)*0.25));
	h4 = ((50000000*0.05)+(200000000*0.15)+(250000000*0.25)+((PKP8-500000000)*0.30));
	i1 = (PKP9*0.05);
	i2 = ((50000000*0.05)+((PKP9-50000000)*0.15));
	i3 = ((50000000*0.05)+(200000000*0.15)+((PKP9-250000000)*0.25));
	i4 = ((50000000*0.05)+(200000000*0.15)+(250000000*0.25)+((PKP9-500000000)*0.30));
	j5 = (PKP10*0.05);
	j2 = ((50000000*0.05)+((PKP10-50000000)*0.15));
	j3 = ((50000000*0.05)+(200000000*0.15)+((PKP10-250000000)*0.25));
	j4 = ((50000000*0.05)+(200000000*0.15)+(250000000*0.25)+((PKP10-500000000)*0.30));
	k1 = (PKP11*0.05);
	k2 = ((50000000*0.05)+((PKP11-50000000)*0.15));
	k3 = ((50000000*0.05)+(200000000*0.15)+((PKP11-250000000)*0.25));
	k4 = ((50000000*0.05)+(200000000*0.15)+(250000000*0.25)+((PKP11-500000000)*0.30));
	l1 = (PKP12*0.05);
	l2 = ((50000000*0.05)+((PKP12-50000000)*0.15));
	l3 = ((50000000*0.05)+(200000000*0.15)+((PKP12-250000000)*0.25));
	l4 = ((50000000*0.05)+(200000000*0.15)+(250000000*0.25)+((PKP12-500000000)*0.30));
	//5
	m1 = round(a1/12);
	m2 = round(a2/12);
	m3 = round(a3/12);
	m4 = round(a4/12);
	n1 = round(b1/12);
	n2 = round(b2/12);
	n3 = round(b3/12);
	n4 = round(b4/12);
	o1 = round(c1/12);
	o2 = round(c2/12);
	o3 = round(c3/12);
	o4 = round(c4/12);
	p1 = round(d1/12);
	p2 = round(d2/12);
	p3 = round(d3/12);
	p4 = round(d4/12);
	q1 = round(e1/12);
	q2 = round(e2/12);
	q3 = round(e3/12);
	q4 = round(e4/12);
	r1 = round(f1/12);
	r2 = round(f2/12);
	r3 = round(f3/12);
	r4 = round(f4/12);
	s1 = round(g1/12);
	s2 = round(g2/12);
	s3 = round(g3/12);
	s4 = round(g4/12);
	t1 = round(h1/12);
	t2 = round(h2/12);
	t3 = round(h3/12);
	t4 = round(h4/12);
	u1 = round(i1/12);
	u2 = round(i2/12);
	u3 = round(i3/12);
	u4 = round(i4/12);
	v1 = round(j5/12);
	v2 = round(j2/12);
	v3 = round(j3/12);
	v4 = round(j4/12);
	w1 = round(k1/12);
	w2 = round(k2/12);
	w3 = round(k3/12);
	w4 = round(k4/12);
	x1 = round(l1/12);
	x2 = round(l2/12);
	x3 = round(l3/12);
	x4 = round(l4/12);
	//6
	a5 = ((m1*1.2)+m1);
	a6 = ((m2*1.2)+m2);
	a7 = ((m3*1.2)+m3);
	a8 = ((m4*1.2)+m4);
	b5 = ((n1*1.2)+n1);
	b6 = ((n2*1.2)+n2);
	b7 = ((n3*1.2)+n3);
	b8 = ((n4*1.2)+n4);
	c5 = ((o1*1.2)+o1);
	c6 = ((o2*1.2)+o2);
	c7 = ((o3*1.2)+o3);
	c8 = ((o4*1.2)+o4);
	d5 = ((p1*1.2)+p1);
	d6 = ((p2*1.2)+p2);
	d7 = ((p3*1.2)+p3);
	d8 = ((p4*1.2)+p4);
	e5 = ((q1*1.2)+q1);
	e6 = ((q2*1.2)+q2);
	e7 = ((q3*1.2)+q3);
	e8 = ((q4*1.2)+q4);
	f5 = ((r1*1.2)+r1);
	f6 = ((r2*1.2)+r2);
	f7 = ((r3*1.2)+r3);
	f8 = ((r4*1.2)+r4);
	g5 = ((s1*1.2)+s1);
	g6 = ((s2*1.2)+s2);
	g7 = ((s3*1.2)+s3);
	g8 = ((s4*1.2)+s4);
	h5 = ((t1*1.2)+t1);
	h6 = ((t2*1.2)+t2);
	h7 = ((t3*1.2)+t3);
	h8 = ((t4*1.2)+t4);
	i5 = ((u1*1.2)+u1);
	i6 = ((u2*1.2)+u2);
	i7 = ((u3*1.2)+u3);
	i8 = ((u4*1.2)+u4);
	j6 = ((v1*1.2)+v1);
	j7 = ((v2*1.2)+v2);
	j8 = ((v3*1.2)+v3);
	j9 = ((v4*1.2)+v4);
	k5 = ((w1*1.2)+w1);
	k6 = ((w2*1.2)+w2);
	k7 = ((w3*1.2)+w3);
	k8 = ((w4*1.2)+w4);
	l5 = ((x1*1.2)+x1);
	l6 = ((x2*1.2)+x2);
	l7 = ((x3*1.2)+x3);
	l8 = ((x4*1.2)+x4);
}
void input()
{
	cout<<"\nMasukan Nama"<<setw(39)<<" = ";
	getline(cin,nama);
	cout<<"Masukan Gaji(/bulan)"<<setw(35)<<"= Rp. ";
	cin>>gaji;
	cout<<"Masukan Tunjangan(/bulan)"<<setw(30)<<"= Rp. ";
	cin>>tunjangan;
	cout<<"Masukan PPh Untuk Bulan (Januari - Desember)"<<setw(7)<<" = ";
	cin>>bulan;
	cout<<"Apakah WP memiliki NPWP Atau Tidak (Y/T)"<<setw(11)<<" = ";
	cin>>npwp;
}
void sk()
{
	for (int a=0; a<=76; a++){
		cout<<"=";
	}
	cout<<"\n|"<<setw(21)<<"Pria/Wanita Lanjang"<<setw(4)<<"|"<<setw(2)<<"|"<<setw(15)<<"Pria Kawin"<<setw(7)<<right<<"|"<<setw(2)<<"|"<<setw(22)<<"Suami Istri Digabung"<<setw(3)<<right<<"|"<<endl;
		for (int a=0; a<=76; a++){
		cout<<"=";
	}
	cout<<endl;
	cout<<"|"<<setw(4)<<"TK0"<<setw(2)<<"|"<<setw(15)<<"Rp.54.000.000"<<setw(4)<<"|"<<setw(2)<<"|"<<setw(4)<<"K0"<<setw(2)<<"|"<<setw(14)<<"Rp.58.500.000"<<setw(2)<<"|"<<setw(2)<<"|"<<setw(5)<<"KI0"<<setw(2)<<"|"<<setw(15)<<"Rp.112.500.000"<<setw(3)<<"|"<<endl;
	cout<<"|"<<setw(4)<<"TK1"<<setw(2)<<"|"<<setw(15)<<"Rp.58.500.000"<<setw(4)<<"|"<<setw(2)<<"|"<<setw(4)<<"K1"<<setw(2)<<"|"<<setw(14)<<"Rp.63.000.000"<<setw(2)<<"|"<<setw(2)<<"|"<<setw(5)<<"KI1"<<setw(2)<<"|"<<setw(15)<<"Rp.117.000.000"<<setw(3)<<"|"<<endl;
	cout<<"|"<<setw(4)<<"TK2"<<setw(2)<<"|"<<setw(15)<<"Rp.63.000.000"<<setw(4)<<"|"<<setw(2)<<"|"<<setw(4)<<"K2"<<setw(2)<<"|"<<setw(14)<<"Rp.67.500.000"<<setw(2)<<"|"<<setw(2)<<"|"<<setw(5)<<"KI2"<<setw(2)<<"|"<<setw(15)<<"Rp.121.500.000"<<setw(3)<<"|"<<endl;
	cout<<"|"<<setw(4)<<"TK3"<<setw(2)<<"|"<<setw(15)<<"Rp.67.500.000"<<setw(4)<<"|"<<setw(2)<<"|"<<setw(4)<<"K3"<<setw(2)<<"|"<<setw(14)<<"Rp.72.000.000"<<setw(2)<<"|"<<setw(2)<<"|"<<setw(5)<<"KI3"<<setw(2)<<"|"<<setw(15)<<"Rp.126.000.000"<<setw(3)<<"|"<<endl;
	for (int a=0; a<=76; a++){
		cout<<"=";
	}
	cout<<"\nKeterangan =  ";
	cout<<"\nTK = Tidak Kawin, K = Kawin, KI = Suami Istri Bekerja / Usaha ";
	cout<<"\n0 = Jika Tidak Memiliki Tanggungan(Anak) \n1 = Jika Memiliki 1 Tanggungan(Anak) \n2 = Jika Memiliki2 Tanggungan(Anak) \n3 = Jika Memiliki 3 atau lebih Tanggungan(Anak) ";
	cout<<endl;
	cout<<"\nMasukan Status Kawin"<<setw(31)<<" = ";
	cin>>status;
}
void output()
{
	cout<<"\nNama Pegawai"<<setw(29)<<" = "<<nama;
	if (npwp=="Y" || npwp=="y"){
		cout<<"\nNPWP"<<setw(37)<<" = "<<nonpwp;
	}
	else if (npwp=="T" || npwp=="t"){
		cout<<"\nNPWP"<<setw(57)<<" = Tidak Memiliki NPWP ";
	}
	cout<<"\nGaji(/bulan)"<<setw(33)<<" = Rp. "<<gaji;
	cout<<"\nTunjangan(/bulan)"<<setw(28)<<" = Rp. "<<tunjangan;
	cout<<"\nStatus Kawin"<<setw(29)<<" = "<<status;
	cout<<"\nPenghasilan Bruto(Kotor)"<<setw(21)<<" = Rp. " << PB ;
	cout<<"\nPenghasilan Neto(Bersih)"<<setw(21)<<" = Rp. "<<Neto;
	cout<<"\nPenghasilan Neto(Bersih) Setahun"<<setw(13)<<" = Rp. "<<Netto;
}
void PTKP()
{
	if (status=="TK0" || status=="tk0"){
		cout<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<a;
	}
	else if (status=="TK1" || status=="tk1"){
		cout<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<b;
	}
	else if (status=="TK2" || status=="tk2"){
		cout<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<c;
	}
	else if (status=="TK3" || status=="tk3"){
		cout<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<d;
	}
	else if (status=="K0" || status=="k0"){
		cout<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<e;
	}
	if (status=="TK1" || status=="k1"){
		cout<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<f;
	}
	else if (status=="K2" || status=="k2"){
		cout<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<g;
	}
	else if (status=="K3" || status=="k3"){
		cout<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<h;
	}
	else if (status=="KI0" || status=="ki0"){
		cout<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<i;
	}
	else if (status=="KI1" || status=="ki1"){
		cout<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<j;
	}
	else if (status=="KI2" || status=="ki2"){
		cout<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<k;
	}
	else if (status=="KI3" || status=="ki3"){
		cout<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<l;
	}
}
void pkp()
{
	if (status=="TK0" || status=="tk0"){
	cout<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP1;}
	else if (status=="TK1"|| status=="tk1"){
	cout<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP2;}
	else if (status=="TK2" || status=="tk2"){
	cout<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP3;}
	else if (status=="TK3" ||status=="tk3"){
	cout<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP4;}
	else if (status=="K0" || status=="k0"){
	cout<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP5;}
	else if (status=="K1" || status=="k1"){
	cout<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP6;}	
	else if (status=="K2" || status=="k2"){
	cout<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP7;}
	else if (status=="K3" || status=="k3"){
	cout<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP8;}
	else if (status=="KI0" || status=="ki0"){
	cout<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP9;}
	else if (status=="KI1" || status=="ki1"){
	cout<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP10;}
	else if (status=="KI2" || status=="ki2"){
	cout<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP11;}
	else if (status=="KI3" || status=="ki3"){
	cout<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP12;}
}
void pph()
{
	if (status=="TK0" || status=="tk0"){
		if(PKP1>0 && PKP1<=50000000){
			cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<a1;}
			else if(PKP1>50000000 && PKP1<=250000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<a2;
			}
			else if(PKP1>25000000 && PKP1<=500000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<a3;
			}
			else if (PKP1>500000000){
                 cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<a4;}
        	else {cout<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="TK1"|| status=="tk1"){
		if(PKP2>0 && PKP2<=50000000){
			cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<b1;}
			else if(PKP2>50000000 && PKP2<=250000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<b2;
			}
			else if(PKP2>25000000 && PKP2<=500000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<b3;
			}
			else if (PKP2>500000000){
                 cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<b4;}
            else {cout<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="TK2" || status=="tk2"){
		if(PKP3>0 && PKP3<=50000000){
			cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<c1;}
			else if(PKP3>50000000 && PKP3<=250000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<c2;
			}
			else if(PKP3>25000000 && PKP3<=500000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<c3;
			}
			else if (PKP3>500000000){
                 cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<c4;}
            else {cout<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="TK3" || status=="tk3"){
		if(PKP4>0 && PKP4<=50000000){
			cout<<"\nPPH Terutang"<<setw(33)<<" = "<<d1;}
			else if(PKP4>50000000 && PKP4<=250000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<d2;
			}
			else if(PKP4>25000000 && PKP4<=500000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<d3;
			}
			else if (PKP4>500000000){
                 cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<d4;}
            else {cout<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="K0" || status=="k0"){
		if(PKP5>0 && PKP5<=50000000){
			cout<<"\nPPH Terutang"<<setw(33)<<" = "<<e1;}
			else if(PKP5>50000000 && PKP5<=250000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<e2;
			}
			else if(PKP5>25000000 && PKP5<=500000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<e3;
			}
			else if (PKP5>500000000){
                 cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<e4;}
            else {cout<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="K1" || status=="k1"){
		if(PKP6>0 && PKP6<=50000000){
			cout<<"\nPPH Terutang"<<setw(33)<<" = "<<f1;}
			else if(PKP6>50000000 && PKP6<=250000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<f2;
			}
			else if(PKP6>25000000 && PKP6<=500000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<f3;
			}
			else if (PKP6>500000000){
                 cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<f4;}
            else {cout<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="K2" || status=="k2"){
		if(PKP7>0 && PKP7<=50000000){
			cout<<"\nPPH Terutang"<<setw(33)<<" = "<<g1;}
			else if(PKP7>50000000 && PKP7<=250000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<g2;
			}
			else if(PKP7>25000000 && PKP7<=500000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<g3;
			}
			else if (PKP7>500000000){
                 cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<g4;}
            else {cout<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="K3" || status=="k3"){
		if(PKP8>0 && PKP8<=50000000){
			cout<<"\nPPH Terutang"<<setw(33)<<" = "<<h1;}
			else if(PKP8>50000000 && PKP8<=250000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<h2;
			}
			else if(PKP8>25000000 && PKP8<=500000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<h3;
			}
			else if (PKP8>500000000){
                 cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<h4;}
            else {cout<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="KI0" || status=="ki0"){
		if(PKP9>0 && PKP9<=50000000){
			cout<<"\nPPH Terutang"<<setw(33)<<" = "<<i1;}
			else if(PKP9>50000000 && PKP9<=250000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<i2;
			}
			else if(PKP9>25000000 && PKP9<=500000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<i3;
			}
			else if (PKP9>500000000){
                 cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<i4;}
            else {cout<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="KI1" || status=="ki1"){
		if(PKP10>0 && PKP10<=50000000){
			cout<<"\nPPH Terutang"<<setw(33)<<" = "<<j5;}
			else if(PKP10>50000000 && PKP10<=250000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<j2;
			}
			else if(PKP10>25000000 && PKP10<=500000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<j3;
			}
			else if (PKP10>500000000){
                 cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<j4;}
            else {cout<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="KI2" || status=="ki2"){
		if(PKP11>0 && PKP11<=50000000){
			cout<<"\nPPH Terutang"<<setw(33)<<" = "<<k1;}
			else if(PKP11>50000000 && PKP11<=250000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<k2;
			}
			else if(PKP11>25000000 && PKP11<=500000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<k3;
			}
			else if (PKP11>500000000){
                 cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<k4;}
            else {cout<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="KI3" || status=="ki3"){
		if(PKP12>0 && PKP12<=50000000){
			cout<<"\nPPH Terutang"<<setw(33)<<" = "<<l1;}
			else if(PKP12>50000000 && PKP12<=250000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<l2;
			}
			else if(PKP12>25000000 && PKP12<=500000000){
				cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<l3;
			}
			else if (PKP12>500000000){
                 cout<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<l4;}
            else {cout<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
		}
	
}
void pasal21()
{
	if (npwp=="Y" || npwp=="y"){
		if (status=="TK0" || status=="tk0"){
			if(PKP1>0 && PKP1<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<m1;}
				else if(PKP1>50000000 && PKP1<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<m2;
				}
				else if(PKP1>250000000 && PKP1<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<m3;
				}
				else if (PKP1>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<m4;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="TK1" || status=="tk1"){
			if(PKP2>0 && PKP2<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<n1;}
				else if(PKP2>50000000 && PKP2<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<n2;
				}
				else if(PKP2>250000000 && PKP2<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<n3;
				}
				else if (PKP2>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<n4;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="TK2" || status=="tk2"){
			if(PKP3>0 && PKP3<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<o1;}
				else if(PKP3>50000000 && PKP3<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<o2;
				}
				else if(PKP3>250000000 && PKP3<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<o3;
				}
				else if (PKP3>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<o4;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
}
	else if (status=="TK3" || status=="tk3"){
			if(PKP4>0 && PKP4<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<p1;}
				else if(PKP4>50000000 && PKP4<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<p2;
				}
				else if(PKP4>250000000 && PKP4<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<p3;
				}
				else if (PKP4>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<p4;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="K0" || status=="k0"){
			if(PKP5>0 && PKP5<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<q1;}
				else if(PKP5>50000000 && PKP5<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<q2;
				}
				else if(PKP5>250000000 && PKP5<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<q3;
				}
				else if (PKP5>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<q4;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="K1" || status=="k1"){
			if(PKP6>0 && PKP6<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<r1;}
				else if(PKP6>50000000 && PKP6<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<r2;
				}
				else if(PKP6>250000000 && PKP6<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<r3;
				}
				else if (PKP6>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<r4;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="K2" || status=="k2"){
			if(PKP7>0 && PKP7<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<s1;}
				else if(PKP7>50000000 && PKP7<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<s2;
				}
				else if(PKP7>250000000 && PKP7<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<s3;
				}
				else if (PKP7>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<s4;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="K3" || status=="k3"){
			if(PKP8>0 && PKP7<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<t1;}
				else if(PKP8>50000000 && PKP8<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<t2;
				}
				else if(PKP8>250000000 && PKP8<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<t3;
				}
				else if (PKP8>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<t4;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="KI0" || status=="ki0"){
			if(PKP9>0 && PKP9<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<u1;}
				else if(PKP9>50000000 && PKP9<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<u2;
				}
				else if(PKP9>250000000 && PKP9<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<u2;
				}
				else if (PKP9>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<u4;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="KI1" || status=="ki1"){
			if(PKP10>0 && PKP10<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<v1;}
				else if(PKP10>50000000 && PKP10<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<v2;
				}
				else if(PKP10>250000000 && PKP10<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<v3;
				}
				else if (PKP10>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<v4;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="KI2" || status=="ki2"){
			if(PKP11>0 && PKP11<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<w1;}
				else if(PKP11>50000000 && PKP11<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<w2;
				}
				else if(PKP1>250000000 && PKP11<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<w3;
				}
				else if (PKP11>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<w4;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="KI3" || status=="ki3"){
			if(PKP12>0 && PKP12<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<x1;}
				else if(PKP12>50000000 && PKP12<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<x2;
				}
				else if(PKP12>250000000 && PKP12<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<x3;
				}
				else if (PKP12>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<x4;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
}
	else if (npwp=="T" || npwp=="t"){
		if (status=="TK0" || status=="tk0"){
			if(PKP1>0 && PKP1<=50000000){
			cout<<"\n"<<nonpwp<<"PPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<a5;}
				else if(PKP1>50000000 && PKP1<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<a6;
				}
				else if(PKP1>250000000 && PKP1<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<a7;
				}
				else if (PKP1>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<a8;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="TK1" || status=="tk1"){
			if(PKP2>0 && PKP2<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<b5;}
				else if(PKP2>50000000 && PKP2<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<b6;
				}
				else if(PKP2>250000000 && PKP2<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<b7;
				}
				else if (PKP2>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<b8;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="TK2" || status=="tk2"){
			if(PKP3>0 && PKP3<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<c5;}
				else if(PKP3>50000000 && PKP3<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<c6;
				}
				else if(PKP3>250000000 && PKP3<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<c7;
				}
				else if (PKP3>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<c8;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="TK3" || status=="tk3"){
			if(PKP4>0 && PKP4<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<d5;}
				else if(PKP4>50000000 && PKP4<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<d6;
				}
				else if(PKP4>250000000 && PKP4<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<d7;
				}
				else if (PKP4>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<d8;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="K0" || status=="k0"){
			if(PKP5>0 && PKP5<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<e5;}
				else if(PKP5>50000000 && PKP5<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<e6;
				}
				else if(PKP5>250000000 && PKP5<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<e7;
				}
				else if (PKP5>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<e8;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="K1" || status=="k1"){
			if(PKP6>0 && PKP6<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<f5;}
				else if(PKP6>50000000 && PKP6<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<f6;
				}
				else if(PKP6>250000000 && PKP6<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<f7;
				}
				else if (PKP6>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<f8;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="K2" || status=="k2"){
			if(PKP7>0 && PKP7<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<g5;}
				else if(PKP7>50000000 && PKP7<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<g6;
				}
				else if(PKP7>250000000 && PKP7<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<g7;
				}
				else if (PKP7>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<g8;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="K3" || status=="k3"){
			if(PKP8>0 && PKP8<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<h5;}
				else if(PKP8>50000000 && PKP8<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<h6;
				}
				else if(PKP8>250000000 && PKP8<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<h7;
				}
				else if (PKP8>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<h8;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="KI0" || status=="ki0"){
			if(PKP9>0 && PKP9<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<i5;}
				else if(PKP9>50000000 && PKP9<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<i6;
				}
				else if(PKP9>250000000 && PKP9<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<i7;
				}
				else if (PKP9>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<i8;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="KI1" || status=="ki1"){
			if(PKP10>0 && PKP10<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<j6;}
				else if(PKP10>50000000 && PKP10<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<j7;
				}
				else if(PKP10>250000000 && PKP10<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<j8;
				}
				else if (PKP10>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<j9;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="KI2" || status=="ki2"){
			if(PKP11>0 && PKP11<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<k5;}
				else if(PKP11>50000000 && PKP11<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<k6;
				}
				else if(PKP11>250000000 && PKP11<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<k7;
				}
				else if (PKP11>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<k8;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="KI3" || status=="ki3"){
			if(PKP12>0 && PKP12<=50000000){
			cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<l5;}
				else if(PKP12>50000000 && PKP12<=250000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<l6;
				}
				else if(PKP12>250000000 && PKP12<=500000000){
				cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<l7;
				}
				else if (PKP12>500000000){
                cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<l8;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				cout<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
	}
}
void tampilan()
{
	cout<<setw(20)<<"|"<<setw(10)<<"Welcome to"<<setw(10)<<"|"<<endl;
	cout<<setw(20)<<"|"<<setw(20)<<"PPH 21"<<setw(20)<<"|"<<endl;
	cout<<setw(20)<<"|"<<setw(30)<<"Program"<<setw(30)<<"|"<<endl;
	cout<<setw(60)<<"=========================================";
	cout<<endl;
	cout<<endl;
}
void tampilan2()
{
	cout<<endl<<endl;
	for (int a=0; a<=76; a++){
		cout<<"=";
	}
	cout<<endl;
	cout<<setw(51)<<"HASIL PERHITUNGAN PPh 21";
	cout<<endl;
	for (int a=0; a<=76; a++){
		cout<<"=";
	}
	cout<<endl;
}
void database()
{
ofstream hasil;
hasil.open("hasil.txt",ios_base::app);
 hasil << "\n========================================================================================================\n";
 hasil <<setw(50)<< "Hasil"<<endl;
 hasil << "========================================================================================================\n";
 hasil<<"\nNama Pegawai"<<setw(29)<<" = "<<nama;
	if (npwp=="Y" || npwp=="y"){
		hasil<<"\nNPWP"<<setw(37)<<" = "<<nonpwp;
	}
	else if (npwp=="T" || npwp=="t"){
		hasil<<"\nNPWP"<<setw(57)<<" = Tidak Memiliki NPWP ";
	}
	hasil<<"\nGaji(/bulan)"<<setw(33)<<" = Rp. "<<gaji;
	hasil<<"\nTunjangan(/bulan)"<<setw(28)<<" = Rp. "<<tunjangan;
	hasil<<"\nStatus Kawin"<<setw(29)<<" = "<<status;
	hasil<<"\nPenghasilan Bruto(Kotor)"<<setw(21)<<" = Rp. " << PB ;
	hasil<<"\nPenghasilan Neto(Bersih)"<<setw(21)<<" = Rp. "<<Neto;
	hasil<<"\nPenghasilan Neto(Bersih) Setahun"<<setw(13)<<" = Rp. "<<Netto;
 	if (status=="TK0" || status=="tk0"){
		hasil<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<a;
	}
	else if (status=="TK1" || status=="tk1"){
		hasil<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<b;
	}
	else if (status=="TK2" || status=="tk2"){
		hasil<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<c;
	}
	else if (status=="TK3" || status=="tk3"){
		hasil<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<d;
	}
	else if (status=="K0" || status=="k0"){
		hasil<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<e;
	}
	else if (status=="K1 "|| status=="k1"){
		hasil<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<f;
	}
	else if (status=="K2" || status=="k2"){
		hasil<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<g;
	}
	else if (status=="K3" || status=="k3"){
		hasil<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<h;
	}
	else if (status=="KI0" || status=="ki0"){
		hasil<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<i;
	}
	else if (status=="KI1" || status=="ki1"){
		hasil<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<j;
	}
	else if (status=="KI2" || status=="ki2"){
		hasil<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<k;
	}
	else if (status=="KI3" || status=="ki3"){
		hasil<<"\nPenghasilan Tidak Kena Pajak (PTKP)"<<setw(10)<<" = Rp. "<<l;
	}
	if (status=="TK0" || status=="tk0"){
	hasil<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP1;}
	else if (status=="TK1"|| status=="tk1"){
	hasil<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP2;}
	else if (status=="TK2" || status=="tk2"){
	hasil<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP3;}
	else if (status=="TK3" ||status=="tk3"){
	hasil<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP4;}
	else if (status=="K0" || status=="k0"){
	hasil<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP5;}
	else if (status=="K1" || status=="k1"){
	hasil<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP6;}	
	else if (status=="K2" || status=="k2"){
	hasil<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP7;}
	else if (status=="K3" || status=="k3"){
	hasil<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP8;}
	else if (status=="KI0" || status=="ki0"){
	hasil<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP9;}
	else if (status=="KI1" || status=="ki1"){
	hasil<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP10;}
	else if (status=="KI2" || status=="ki2"){
	hasil<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP11;}
	else if (status=="KI3" || status=="ki3"){
	hasil<<"\nPenghasilan Kena Pajak (PKP)"<<setw(17)<<" = Rp. "<<PKP12;}
	//pkp
	if (status=="TK0" || status=="tk0"){
	if(PKP1>0 && PKP1<=50000000){
			hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<a1;}
			else if(PKP1>50000000 && PKP1<=250000000){
			hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<a2;
			}
			else if(PKP1>25000000 && PKP1<=500000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<a3;
			}
			else if (PKP1>500000000){
                 hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<a4;}
        	else {hasil<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="TK1"|| status=="tk1"){
		if(PKP2>0 && PKP2<=50000000){
			hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<b1;}
			else if(PKP2>50000000 && PKP2<=250000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<b2;
			}
			else if(PKP2>25000000 && PKP2<=500000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<b3;
			}
			else if (PKP2>500000000){
                 hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<b4;}
            else {hasil<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="TK2" || status=="tk2"){
		if(PKP3>0 && PKP3<=50000000){
			hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<c1;}
			else if(PKP3>50000000 && PKP3<=250000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<c2;
			}
			else if(PKP3>25000000 && PKP3<=500000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<c3;
			}
			else if (PKP3>500000000){
                 hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<c4;}
            else {hasil<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="TK3" || status=="tk3"){
		if(PKP4>0 && PKP4<=50000000){
			hasil<<"\nPPH Terutang"<<setw(33)<<" = "<<d1;}
			else if(PKP4>50000000 && PKP4<=250000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<d2;
			}
			else if(PKP4>25000000 && PKP4<=500000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<d3;
			}
			else if (PKP4>500000000){
                 hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<d4;}
            else {hasil<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="K0" || status=="k0"){
		if(PKP5>0 && PKP5<=50000000){
			hasil<<"\nPPH Terutang"<<setw(33)<<" = "<<e1;}
			else if(PKP5>50000000 && PKP5<=250000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<e2;
			}
			else if(PKP5>25000000 && PKP5<=500000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<e3;
			}
			else if (PKP5>500000000){
                 hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<e4;}
            else {hasil<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="K1" || status=="k1"){
		if(PKP6>0 && PKP6<=50000000){
			hasil<<"\nPPH Terutang"<<setw(33)<<" = "<<f1;}
			else if(PKP6>50000000 && PKP6<=250000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<f2;
			}
			else if(PKP6>25000000 && PKP6<=500000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<f3;
			}
			else if (PKP6>500000000){
                 hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<f4;}
            else {cout<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="K2" || status=="k2"){
		if(PKP7>0 && PKP7<=50000000){
			hasil<<"\nPPH Terutang"<<setw(33)<<" = "<<g1;}
			else if(PKP7>50000000 && PKP7<=250000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<g2;
			}
			else if(PKP7>25000000 && PKP7<=500000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<g3;
			}
			else if (PKP7>500000000){
                 hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<g4;}
            else {hasil<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="K3" || status=="k3"){
		if(PKP8>0 && PKP8<=50000000){
			hasil<<"\nPPH Terutang"<<setw(33)<<" = "<<h1;}
			else if(PKP8>50000000 && PKP8<=250000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<h2;
			}
			else if(PKP8>25000000 && PKP8<=500000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<h3;
			}
			else if (PKP8>500000000){
                 hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<h4;}
            else {hasil<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="KI0" || status=="ki0"){
		if(PKP9>0 && PKP9<=50000000){
			hasil<<"\nPPH Terutang"<<setw(33)<<" = "<<i1;}
			else if(PKP9>50000000 && PKP9<=250000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<i2;
			}
			else if(PKP9>25000000 && PKP9<=500000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<i3;
			}
			else if (PKP9>500000000){
                 hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<i4;}
            else {hasil<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="KI1" || status=="ki1"){
		if(PKP10>0 && PKP10<=50000000){
			hasil<<"\nPPH Terutang"<<setw(33)<<" = "<<j5;}
			else if(PKP10>50000000 && PKP10<=250000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<j2;
			}
			else if(PKP10>25000000 && PKP10<=500000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<j3;
			}
			else if (PKP10>500000000){
                 hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<j4;}
            else {hasil<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="KI2" || status=="ki2"){
		if(PKP11>0 && PKP11<=50000000){
			hasil<<"\nPPH Terutang"<<setw(33)<<" = "<<k1;}
			else if(PKP11>50000000 && PKP11<=250000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<k2;
			}
			else if(PKP11>25000000 && PKP11<=500000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<k3;
			}
			else if (PKP11>500000000){
                 hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<k4;}
            else {hasil<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
	}
	else if (status=="KI3" || status=="ki3"){
		if(PKP12>0 && PKP12<=50000000){
			hasil<<"\nPPH Terutang"<<setw(33)<<" = "<<l1;}
			else if(PKP12>50000000 && PKP12<=250000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<l2;
			}
			else if(PKP12>25000000 && PKP12<=500000000){
				hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<l3;
			}
			else if (PKP12>500000000){
                 hasil<<"\nPPH Terutang"<<setw(33)<<" = Rp. "<<l4;}
            else {hasil<<"\nPPH Terutang"<<setw(34)<<" = Rp. 0";
			}
		}
		
		//pph21
		if (npwp=="Y" || npwp=="y"){
		if (status=="TK0" || status=="tk0"){
			if(PKP1>0 && PKP1<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<m1;}
				else if(PKP1>50000000 && PKP1<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<m2;
				}
				else if(PKP1>250000000 && PKP1<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<m3;
				}
				else if (PKP1>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<m4;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="TK1" || status=="tk1"){
			if(PKP2>0 && PKP2<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<n1;}
				else if(PKP2>50000000 && PKP2<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<n2;
				}
				else if(PKP2>250000000 && PKP2<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<n3;
				}
				else if (PKP2>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<n4;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="TK2" || status=="tk2"){
			if(PKP3>0 && PKP3<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<o1;}
				else if(PKP3>50000000 && PKP3<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<o2;
				}
				else if(PKP3>250000000 && PKP3<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<o3;
				}
				else if (PKP3>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<o4;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
}
	else if (status=="TK3" || status=="tk3"){
			if(PKP4>0 && PKP4<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<p1;}
				else if(PKP4>50000000 && PKP4<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<p2;
				}
				else if(PKP4>250000000 && PKP4<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<p3;
				}
				else if (PKP4>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<p4;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="K0" || status=="k0"){
			if(PKP5>0 && PKP5<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<q1;}
				else if(PKP5>50000000 && PKP5<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<q2;
				}
				else if(PKP5>250000000 && PKP5<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<q3;
				}
				else if (PKP5>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<q4;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="K1" || status=="k1"){
			if(PKP6>0 && PKP6<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<r1;}
				else if(PKP6>50000000 && PKP6<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<r2;
				}
				else if(PKP6>250000000 && PKP6<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<r3;
				}
				else if (PKP6>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<r4;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="K2" || status=="k2"){
			if(PKP7>0 && PKP7<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<s1;}
				else if(PKP7>50000000 && PKP7<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<s2;
				}
				else if(PKP7>250000000 && PKP7<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<s3;
				}
				else if (PKP7>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<s4;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="K3" || status=="k3"){
			if(PKP8>0 && PKP7<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<t1;}
				else if(PKP8>50000000 && PKP8<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<t2;
				}
				else if(PKP8>250000000 && PKP8<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<t3;
				}
				else if (PKP8>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<t4;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="KI0" || status=="ki0"){
			if(PKP9>0 && PKP9<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<u1;}
				else if(PKP9>50000000 && PKP9<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<u2;
				}
				else if(PKP9>250000000 && PKP9<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<u2;
				}
				else if (PKP9>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<u4;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="KI1" || status=="ki1"){
			if(PKP10>0 && PKP10<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<v1;}
				else if(PKP10>50000000 && PKP10<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<v2;
				}
				else if(PKP10>250000000 && PKP10<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<v3;
				}
				else if (PKP10>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<v4;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="KI2" || status=="ki2"){
			if(PKP11>0 && PKP11<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<w1;}
				else if(PKP11>50000000 && PKP11<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<w2;
				}
				else if(PKP1>250000000 && PKP11<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<w3;
				}
				else if (PKP11>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<w4;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
	else if (status=="KI3" || status=="ki3"){
			if(PKP12>0 && PKP12<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<x1;}
				else if(PKP12>50000000 && PKP12<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<x2;
				}
				else if(PKP12>250000000 && PKP12<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<x3;
				}
				else if (PKP12>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<x4;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
	}
}
	else if (npwp=="T" || npwp=="t"){
		if (status=="TK0" || status=="tk0"){
			if(PKP1>0 && PKP1<=50000000){
			hasil<<"\n"<<nonpwp<<"PPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<a5;}
				else if(PKP1>50000000 && PKP1<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<a6;
				}
				else if(PKP1>250000000 && PKP1<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<a7;
				}
				else if (PKP1>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<a8;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="TK1" || status=="tk1"){
			if(PKP2>0 && PKP2<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<b5;}
				else if(PKP2>50000000 && PKP2<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<b6;
				}
				else if(PKP2>250000000 && PKP2<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<b7;
				}
				else if (PKP2>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<b8;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="TK2" || status=="tk2"){
			if(PKP3>0 && PKP3<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<c5;}
				else if(PKP3>50000000 && PKP3<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<c6;
				}
				else if(PKP3>250000000 && PKP3<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<c7;
				}
				else if (PKP3>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<c8;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="TK3" || status=="tk3"){
			if(PKP4>0 && PKP4<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<d5;}
				else if(PKP4>50000000 && PKP4<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<d6;
				}
				else if(PKP4>250000000 && PKP4<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<d7;
				}
				else if (PKP4>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<d8;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="K0" || status=="k0"){
			if(PKP5>0 && PKP5<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<e5;}
				else if(PKP5>50000000 && PKP5<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<e6;
				}
				else if(PKP5>250000000 && PKP5<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<e7;
				}
				else if (PKP5>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<e8;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="K1" || status=="k1"){
			if(PKP6>0 && PKP6<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<f5;}
				else if(PKP6>50000000 && PKP6<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<f6;
				}
				else if(PKP6>250000000 && PKP6<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<f7;
				}
				else if (PKP6>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<f8;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="K2" || status=="k2"){
			if(PKP7>0 && PKP7<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<g5;}
				else if(PKP7>50000000 && PKP7<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<g6;
				}
				else if(PKP7>250000000 && PKP7<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<g7;
				}
				else if (PKP7>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<g8;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="K3" || status=="k3"){
			if(PKP8>0 && PKP8<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<h5;}
				else if(PKP8>50000000 && PKP8<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<h6;
				}
				else if(PKP8>250000000 && PKP8<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<h7;
				}
				else if (PKP8>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<h8;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="KI0" || status=="ki0"){
			if(PKP9>0 && PKP9<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<i5;}
				else if(PKP9>50000000 && PKP9<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<i6;
				}
				else if(PKP9>250000000 && PKP9<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<i7;
				}
				else if (PKP9>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<i8;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="KI1" || status=="ki1"){
			if(PKP10>0 && PKP10<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<j6;}
				else if(PKP10>50000000 && PKP10<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<j7;
				}
				else if(PKP10>250000000 && PKP10<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<j8;
				}
				else if (PKP10>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<j9;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="KI2" || status=="ki2"){
			if(PKP11>0 && PKP11<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<k5;}
				else if(PKP11>50000000 && PKP11<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<k6;
				}
				else if(PKP11>250000000 && PKP11<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<k7;
				}
				else if (PKP11>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<k8;}
                else { hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
		else if (status=="KI3" || status=="ki3"){
			if(PKP12>0 && PKP12<=50000000){
			hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<l5;}
				else if(PKP12>50000000 && PKP12<=250000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<l6;
				}
				else if(PKP12>250000000 && PKP12<=500000000){
				hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<l7;
				}
				else if (PKP12>500000000){
                hasil<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. "<<l8;}
                else { cout<<"\nPPH Pasal 21 Bulan "<<bulan<<" = Rp. 0";
				hasil<<"\nTidak Perlu Membayar Pajak Hanya Perlu Laporan Ke Kantor Pajak";
				}
			}
	}
 hasil.close();
}
main()
{
	awal:
	tampilan();
	input();
	if (npwp=="Y" || npwp=="y"){
		cout<<"Masukan Nomor NPWP"<<setw(33)<<" = ";
		cin>>nonpwp;
	}
	else if (npwp=="T" || npwp=="t"){
	}
	rumus();
	sk();
	system("cls");
	tampilan();
	output();
	PTKP();
	pkp();	
	pph();
	tampilan2();
	pasal21();
	database();
	getch();
	system ("cls");
	cout<<"\nApakah Anda Ingin Menggunakan Program Kembali = ";
	cin>>ulang;
	if (ulang=="Y" || ulang=="y"){
		system("cls");
		getline(cin,nama);
		goto awal;
	}
	else if (ulang=="T" || ulang=="t"){
		system("cls");
		tampilan();
		cout<<"\nTerima Kasih Telah Menggunakan Program :)";
	}
	getch();	
}

