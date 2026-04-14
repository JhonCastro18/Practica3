#include <iostream>
#include "RLE.h"
using namespace std;

string rleCompress(const string& input) {
    string result = "";
    int count = 1;
    for (int i = 0; i < input.length(); i++) {
        if (i + 1 < input.length() && input[i] == input[i + 1]) {
            count++;
        } else {
            result += input[i];
            result += to_string(count);
            count = 1;
        }
    }
    return result;
}

string rleCompressPtr(const char* input) {
    string result = "";
    int count = 1;

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == input[i + 1]) {
            count++;
        } else {
            result += input[i];
            result += to_string(count);
            count = 1;
        }
    }
    return result;
}
string rleDecompress(const string& input){
    string result = "";

    for(int i = 0; i < input.length(); i += 2){
        char c = input[i];
        int count = input[i+1] - '0';

        for(int j = 0; j < count; j++){
            result += c;
        }
    }

    return result;
}