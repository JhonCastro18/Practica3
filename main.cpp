#include "RLE.h"
#include "rotacionbits.h"
#include "XOR.h"
#include <iostream>
#include <bitset>


using namespace std;

int main(){

    // -------- RLE --------
    string texto = "AAAAAAAAAAAA";

    cout << "Original: " << texto << endl;

    string comprimido = rleCompress(texto);
    cout << "Comprimido: " << comprimido << endl;

    string descomprimido = rleDecompress(comprimido);
    cout << "Descomprimido: " << descomprimido << endl;


    // -------- ROTACION --------
    cout<<"---------------Rotacion Bits---------"<<endl;

    unsigned char c = 'A'; // 65 → 01000001
    unsigned char result;

    result = rotateLeft(c, 2);

    cout << "Original: " << bitset<8>(c) << endl;
    cout << "Rotado:   " << bitset<8>(result) << endl;

    cout << "Recuperado: " << bitset<8>(rotateRight(result, 2)) << endl;

    // -------- XOR --------

    cout<<"---------------XOR------------"<<endl;

    char text[] = "HOLA";

    cout << "Original: " << text << endl;

    // Encriptar
    xorCipherPtr(text, 'K');
    cout << "Encriptado: " << text << endl;

    // Desencriptar
    xorCipherPtr(text, 'K');
    cout << "Desencriptado: " << text << endl;

    return 0;
}