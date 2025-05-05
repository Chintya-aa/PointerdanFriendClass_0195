#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"No Induk = "<<nim<<endl;
    }
};

int main (){

    mahasiswa mhs; // object mhs
    mhs.nim = 5;
    mhs.showNim(); // Number Access Operator

    mahasiswa &refmhs = mhs; //pointer Refrence refmhs
    refmhs. nim = 2; //member access operator
    mhs.showNim();

    mahasiswa *pmhs = &mhs; // pointer dereference pmhs
    pmhs->nim = 3; //arrow operator
    pmhs->showNim();
    return 0;
}


  



