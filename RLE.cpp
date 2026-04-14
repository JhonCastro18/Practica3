#include "RLE.h"

string rleCompress(const string& input){
    string result = "";

    for(int i = 0; i < input.length(); i++){
        result += input[i];
        result += "1";
    }

    return result;
}