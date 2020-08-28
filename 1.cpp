#include<bits/stdc++.h>
using namespace std ;
struct NhanVien
{
    string MNV;
    string hoTen;
    string TTGD;
    int soCon;
    string TDVH;
    float LCB;
    int NCP;
    int NKP;
    int NLT;
    string KQCV;
};
typedef NhanVien NV;
int n;
NV a[50];
void NhapNv(NV &nv)
{
    cout<<"nhap so ma nv: ";
    cin>>nv.MNV;
    cout<<"nhap so ho ten nv: ";
    fflush(stdin);
    getline(cin,nv.hoTen);
    cout<<"nhap tinh trang gia dinh: ";
    cin>>nv.TTGD;
    cout<<"nhap so con: ";
    cin>>nv.soCon;
    cout<<"nhap trinh do van hoa: ";
    cin>>nv.TDVH;
    cout<<"nhap luong co ban: ";
    cin>>nv.LCB;
    cout<<"nhap so ngay nghi khong phep, co phep va lam them: ";
    cin>>nv.NKP>>nv.NCP>>nv.NLT;
    cout<<"nhap ket qua cong viec: ";
    cin>>nv.KQCV;
}

void NhapTT()
{
    cout<<"nhap so nhan vien: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"\nnhap nhan vien thu "<<(i+1)<<": \n";
        NhapNv(a[i]);
    }
}
int Luong(NV nv)
{
    int phutroi=0;
    if(nv.soCon>2)
    {
        phutroi+=4;
    }
    if("CH"==nv.TDVH)
    {
        phutroi+=10;
    }
    if(nv.NKP)
    {
        phutroi-=nv.NKP*5;
    }
    if(nv.NLT)
    {
        phutroi+=nv.NLT*4;
    }
    return nv.LCB*(100+phutroi)/100;

}
void HienNV(NV nv)
{
    cout<<left<<setw(9)<<nv.MNV<<left<<setw(20)<<nv.hoTen<<left<<setw(7)<<nv.TTGD<<left<<setw(9)<<nv.soCon<<left<<setw(8)<<nv.TDVH<<left<<setw(12)<<Luong(nv)<<nv.KQCV<<endl;
}
void HienTT()
{
    cout<<"\nMNV     Ten nhan vien        TTGD   So con   TDVH    Luong       KQ\n";
    for(int i=0; i<n; i++)
    {
        HienNV(a[i]);
    }
}
void Them(){
    cout<<"Nhap thong tin nhan vien can them\n";
    NhapNv(a[n]);
    n++;
}
void Sua(){
    string mod;
    NV x;
    int  tmp=-1;
    cout<<"Nhap ma nhan vien can sua:";
    cin>>mod;
    for(int i=0;i<n;i++){
        if(a[i].MNV==mod){
            tmp=i;
            break;
        }
    }
    if(tmp!=-1){
        NhapNv(x);
        a[tmp]=x;
        cout<<"Da sua thong tin xong!!";
    }
    else{
        cout<<"Khong tim thay!!";
    }
}
void Xoa(){
    string del;
    int  tmp=-1;
    cout<<"Nhap ma nhan vien can xoa:";
    cin>>del;
    for(int i=0;i<n;i++){
        if(a[i].MNV==del){
            tmp=i;
            break;
        }
    }
    if(tmp!=-1){
        for(int i=tmp;i<n;i++){
             a[i] = a[i+1];
            }
            n--;
        cout<<"Da xoa xong!!";
    }
    else{
        cout<<"Khong tim thay!!";
    }
}
void Tim(){
    int  tmp=-1;
    string fin;
    cout<<"Nhap ma nhan vien can tim:";
    cin>>fin;
    for(int i=0;i<n;i++){
        if(a[i].MNV==fin){
            tmp=i;
            break;
        }
    }
    if(tmp!=-1){
        cout<<"Nhan vien vua tim duoc la\n";
        cout<<"\nMNV     Ten nhan vien        TTGD   So con   TDVH    Luong       KQ\n";
        HienNV(a[tmp]);
    }
    else{
        cout<<"Khong tim thay!!";
    }
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
        cout<<"**      3. Them 1 nhan vien                **\n";
        cout<<"**      4. Sua 1 nhan vien theo maNV       **\n";
        cout<<"**      5. Xoa 1 nhan vien theo maNV       **\n";
        cout<<"**      6. Tim nhan vien theo maNV         **\n";
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
            HienTT();
            cout<<endl;
            system("pause");
            break;
        case 3:
            system("cls");
            cout<<"Ban da chon them 1 tin nhan vien\n";
            Them();
            cout<<endl;
            system("pause");
            break;
        case 4:
            system("cls");
            cout<<"Ban da chon sua 1 nhan vien theo maNV\n";
            Sua();
            cout<<endl;
            system("pause");
            break;
        case 5:
            system("cls");
            cout<<"Ban da chon xoa 1 nhan vien theo maNV \n";
            Xoa();
            cout<<endl;
            system("pause");
            break;
        case 6:
            system("cls");
            cout<<"Ban da chon tim nhan vien theo maNV \n";
            Tim();
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
