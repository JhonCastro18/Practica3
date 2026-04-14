#include "RLE.h"
#include <iostream>
using namespace std;

int main(){

    string texto = "AAAAAAAAAAAA";

    cout << "Original: " << texto << endl;

    string comprimido = rleCompress(texto);
    cout << "Comprimido: " << comprimido << endl;

    string descomprimido = rleDecompress(comprimido);
    cout << "Descomprimido: " << descomprimido << endl;

    return 0;
}