#include <iostream>
using namespace std;
class mahasiswa 
{
    public : 
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;

    }
};

int main()
{
    mahasiswa mhs{1}; //objek mhs
    mhs.showNim(); // memberi akses operator 

    mahasiswa &refMhs = mhs; //pointer referensi mhs 
    refMhs.nim = 2; //member akses operator
    mhs.showNim(); 

    mahasiswa *pMhs = &mhs; //pointer dereference pMhs
    pMhs->nim = 3 ; //arrow operator 
    pMhs->showNim();
    return 0;
}