#include <iostream>
using namespace std;

class persegiPanjang
{
    public:
    int panjang, lebar;

    public:

        void input()
        {
            cout << "Masukkan panjang : ";
            cin >> panjang;
            cout << "Masukkan lebar : ";
            cin >> lebar; 

        }

        int luasPp(int a, int b)
        {
            return a * b;
        }
        
        lingkaran ol;
        
};

class lingkaran
{ 
    int jarijari;

    void input()
    {
        cout << "Masukkan jari-jari lingkaran : ";
        cin >> jarijari;

    }

    int luaslingkaran(int r)
    {
        return 3.14 * r * r;
    }
};

int main()
{
    persegiPanjang objekPP; //membuat objek
    lingkaran ol;

    cout << "Masukkan panjang : ";
    cin >> objekPP.panjang;
    cout << "masukkan lebar : " ;
    cin >> objekPP.lebar;
    cout << "Luas Persegi Panjang : " << objekPP.luasPp(objekPP.panjang, objekPP.lebar) << endl;

    
}