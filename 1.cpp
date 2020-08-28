#include<bits/stdc++.h>
using namespace std ;
struct NhanVien
{
	char MNV[8];
	char hoTen[30];
	char TTGD[1];
	int soCon;
	char TDVH[2];
	float LCB;
	int NCP;
	int NKP;
	int NLT;
	char KQCV[2];
};
typedef NhanVien NV;
int n;
NV a[50];
void NhapNv(NV nv){
    cout<<"nhap so ma nv: ";
    cin>>nv.MNV;
    cout<<"nhap so ho ten nv: ";
    cin>>nv.hoTen;
    cout<<"nhap tinh trang gia dinh: ";
    cin>>nv.TTGD;
    cout<<"nhap so con: ";
    cin>>nv.soCon;
    cout<<"nhap so con: ";
    cin>>nv.soCon;
}

void NhapTT(){
    cout<<"nhap so nhan vien: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\nnhap nhan vien thu "<<(i+1)<<": \n";
        NhapNv(a[i]);
    }
}
int luong(NV nv){
    int phutroi=0;
    if(nv.soCon>2){
        phutroi+=4;
    }
    if("CH"==nv.TDVH){
        phutroi+=10;
    }
    if(nv.NKP){
        phutroi-=nv.NKP*5;
    }
    if(nv.NLT){
         phutroi+=nv.NLT*4;
    }
    return nv.LCB*(100+phutroi)/100;

}


int main()
{
	int luachon;
	while(1)
	{
		fflush(stdin);
		system("cls");
		cout<<"*********************************************\n";
		cout<<"**     CHUONG TRINH QUAN LY NHAN VIEN      **\n";
		cout<<"**      1. Nhap danh sach nhan vien        **\n";
		cout<<"**      2. Hien danh sach nhan vien        **\n";
		cout<<"**      3. Sap xep, xuat thong tin vao tep **\n";
		cout<<"**      0. Thoat                           **\n";
		cout<<"*********************************************\n";
		cout<<"**         Hay chon chuc nang              **\n";
		cin>>luachon;
		switch(luachon)
		{
			case 1:
				system("cls");
				cout<<"Ban da chon nhap danh sach nhan vien\n";
                NhapTT();
                cout<<endl;
				system("pause");
				break;
			case 2:
				system("cls");
				cout<<"Ban da chon hien danh sach danh sach nhan vien\n";
				cout<<"\nMNV   Ten nhan vien        TTGD   So con   TDVH    Luong       KQ\n";

                cout<<endl;
				system("pause");
				break;
			case 3:
				system("cls");
				cout<<"Ban da chon sap xep va xuat thong tin vao tep\n";

				cout<<endl;
				system("pause");
				break;
			case 0:
				system("cls");
				cout<<"Ban da chon thoat chuong trinh!";
                return 0;
            default:
            	system("cls");
                cout<<"Khong co chuc nang nay!";
                cout<<endl;
               	system("pause");
			    break;
		}
	}
}
