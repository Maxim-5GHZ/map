#include"Decoder.h"


std::vector<std::string> Decoder::splitCode(std::string code){
    std::vector<std::string> split;
    size_t start = 0;
    size_t end = code.find(' ');
    
    while (end != std::string::npos) {
        split.push_back(code.substr(start, end - start));
        start = end + 1;
        end = code.find(' ', start);
    }

    split.push_back(code.substr(start));
    
    return split;
    
};

void Decoder::get(std::string code,std::map<std::string,char> key){
    try {
        Code = code;
        Key = key;
    } catch (...) {
        std::cerr<<"Do not correct Data for class Decoder"<<std::endl;
    }
    
};

std::vector<char> Decoder::decoding(std::vector<std::string> diferencialCode){
    std::vector<char> dec;
    for(int i=0;i<diferencialCode.size();i++){
        for (const auto& [k, s] : Key){
            if (k == diferencialCode[i]){
                dec.push_back(s);
            }
        }
    }
    return dec;
}

void Decoder::print(){
    diferencialCode = splitCode(Code);
    decode = decoding(diferencialCode);
    
    for(int i = 0;i<decode.size();i++){
        std::cout<< decode[i]<<' ';
    }
}