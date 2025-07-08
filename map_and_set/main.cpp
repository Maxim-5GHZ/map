#include"Classes/Alfabet.h"
#include "Classes/Decoder.h"

int main(){

    std::string Code;

    std::vector<std::string> codearray = {
        ".-- .-. ---",
        "           ",
        "fredwFDcwEF",
        "--- --- erfref",
        "f-- cxx --- .-- adde ---",
        ".-- .-. --- .-- .-. --- .-- .-. --- .-- .-. ---",
        "",
        "------------------------------------------------"
    };

    Decoder* decoder = new Decoder;

    for(int i = 0;i < codearray.size();i++){

        std::cout<< i+1<<'.';

        Code = codearray[i];
        decoder->get(Code,Alfabet);
        decoder->print();
        
    }

    delete decoder;

    return 0;
}                                                      