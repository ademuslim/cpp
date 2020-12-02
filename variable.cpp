/*Latihan 
membuat variable, 
deklarasi typedata,                               Ade Muslim 312010147
input data & 
menampilkan data input*/

#include <iostream>
using namespace std;
int main()
{
    //deklarasi type data variable (membuat variable)
    string nama;
    int umur;
    char jenis_kelamin;

    //--proses input--menyimpan data ke variable dengan cin--
    cout<<"=====Input Data====="<<endl;
    cout<<"Siapa nama anda?"<<endl;
    cout<<" Jawab: ";
    getline(cin,nama); //getline khusus untuk variable string
    
    cout<<"Berapa umur anda?"<<endl;
    cout<<" Jawab: ";
    cin>>umur;

    cout<<"Jenis kelamin?"<<endl;
    cout<<" Jawab (L/P):";
    cin>>jenis_kelamin;

    //--proses output--
    cout<<"--------------------"<<endl;
    cout<<"======Biodata======="<<endl
    <<"Nama: "<<nama<<endl
    <<"umur: "<<umur<<" Tahun"<<endl
    <<"L/P : "<<jenis_kelamin;

}