#include <iostream>
using namespace std;

int main(){
    /*
    jika nilai >= 90 lulus sangat memuaskan
    jika nilai >= 80 lulus memuaskan
    jika nilai >= 75 cukup
    < 75 tidak lulus
    tidak boleh > 100
    tidak boleh < 0
    */
    int nilai;
    cout<<"Masukkan Nilai = "; cin>>nilai;
    if (nilai > 100 || nilai < 0){
        cout<<"diluar jangkauan";
    }
    else if (nilai >= 90){
        cout<<"lulus sangat memuaskan";
    }
    else if (nilai >= 80){
        cout<<"lulus memuaskan";
    }
    else if (nilai >= 75){
        cout<<"cukup";
    }
    else if (nilai < 0){
        cout<<"diluar jangkauan";
    }
    else {
        cout<<"tidak lulus";
    }
    
    
    return 0;
}
