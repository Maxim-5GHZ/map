#include"Classes/Alfabet.h"
#include "Classes/Decoder.h"

int main(){
    std::string Code;
    getline(std::cin,Code);
    Decoder* decoder = new Decoder;
    decoder->get(Code,Alfabet);
    decoder->print();
    return 0;
}                                                      