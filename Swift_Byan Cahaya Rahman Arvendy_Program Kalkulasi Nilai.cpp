#include <iostream>
using namespace std;

int main(){
     int n_tugas, nilai_tugas, sum_tugas, avr_tugas;
     cout<<endl<<"Masukkan jumlah penugasan yang diberikan: ";
     cin>>n_tugas;
          for(int i=0; i<n_tugas; i++){
               cout<<"Masukkan nilai penugasan yang diberikan : ";
               cin>>nilai_tugas;
          }
     sum_tugas=sum_tugas+nilai_tugas;
     avr_tugas=sum_tugas/n_tugas;

     int n_kuis, nilai_kuis, sum_kuis, avr_kuis;
     cout<<endl<<"Masukkan jumlah penugasan yang diberikan: ";
     cin>>n_kuis;
          for(int i=0; i<n_kuis; i++){
               cout<<"Masukkan nilai penugasan yang diberikan : ";
               cin>>nilai_kuis;
          }
     sum_kuis=sum_kuis+nilai_kuis;
     avr_kuis=sum_kuis/n_kuis;

     int nilai_UTS, nilai_UAS;
     cout<<endl<<"Masukkan nilai UTS mahasiswa: ";
     cin>>nilai_UTS;
     cout<<"Masukkan nilai UAS mahasiswa: ";
     cin>>nilai_UAS;

     int Tugas_Kuis, UTS_UAS, total_nilai;
     Tugas_Kuis=(avr_kuis+avr_tugas)/2*0.4;
     cout<<Tugas_Kuis;
     UTS_UAS=(nilai_UTS+nilai_UAS)/2*0.6;
     cout<<endl<<UTS_UAS;
     total_nilai=(Tugas_Kuis+UTS_UAS)/2;

     cout<<endl<<endl<<"==KALKULASI NILAI MAHASISWA==";
     cout<<endl<<"Total nilai Tugas: "<<avr_tugas;
     cout<<endl<<"Total nilai Kuis: "<<avr_kuis;
     cout<<endl<<"Nilai UTS mahasiswa: "<<nilai_UTS;
     cout<<endl<<"Nilai UAS mahasiswa: "<<nilai_UAS;
     cout<<endl<<"Total nilai keseluruhan: "<<total_nilai;

     if(total_nilai>=92){
          cout<<endl<<"Nilai anda adalah A"<<endl<<"Pertahankan!"<<endl;
     }
     else if(total_nilai>=84){
          cout<<endl<<"Nilai anda adalah B"<<endl<<"Nilai anda cukup baik :D"<<endl;
     }
     else if(total_nilai>=76){
          cout<<endl<<"Nilai anda adalah C"<<endl<<"Lebih semangat belajar lagi :)"<<endl;
     }
     else if(total_nilai>=70){
          cout<<endl<<"Nilai anda adalah D"<<endl<<"Tingkatkan belajar anda!"<<endl;
     }
     else if(total_nilai<70){
          cout<<endl<<"Nilai anda adalah E"<<endl<<"Maaf anda harus mengulang :("<<endl;
     }

return 0; 
}