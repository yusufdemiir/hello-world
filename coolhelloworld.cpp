#include<iostream>
#include<windows.h>
using namespace std;

int main() {
    while(1) {
    
    string alfabe[] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","r","s","t","u","v","w","y","z"};
    string hw[] = {"h","e","l","l","o","w","o","r","l","d"};
    string coutw[] = {"","","","","","","","","",""};
    int alfabesayi = 0;
    int hwsayi = 0;
    int coutwsayi = 0;
    int sayi = 0;
    
    while(sayi<500) {
        
        coutw[coutwsayi] = alfabe[alfabesayi];
        for (int i = 0; i <= 10; i++)
        {
            cout << coutw[i];
            
        }
        Sleep(1);
        cout << "\n";
        if(coutw[coutwsayi]==hw[hwsayi]) {
            coutwsayi++;
            hwsayi++;
            alfabesayi = 0;
            
        }
        sayi++;
        alfabesayi++;
        if (coutw[9] == "d") {
            cout << "\n\n\n";
            Sleep(1000);
            break;
            
       
        }
    }
    }
}
        

    
    