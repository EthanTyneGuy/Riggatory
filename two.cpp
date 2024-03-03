#include <iostream>

using namespace std;

int main(){

// establishes and assigns values
int sup;
int fup;
int nup;

sup = -50;
fup = 53;
nup = 78;

//ok, now the part that'll take 30 minutes
if (sup > fup && sup > nup){
    cout << sup << " is the most." << endl;
    if (fup > nup){
        cout << nup << " is the least.";
    }
    else {
        cout << fup << " is the least.";
    }
}
if (fup > sup && fup > nup){
    cout << fup << " is the most." << endl;
    if (sup > nup){
        cout << nup << " is the least.";
    }
    else {
        cout << sup << " is the least.";
    }
}
if (nup > fup && nup > sup){
    cout << nup << " is the most." << endl;
    if (fup > sup){
        cout << sup << " is the least.";
    }
    else {
        cout << fup << " is the least.";
    }
}
return 0;
}