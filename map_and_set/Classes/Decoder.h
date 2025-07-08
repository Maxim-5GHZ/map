#include<iostream>
#include<map>
#include<vector>
#pragma once
class Decoder{
    std::map<std::string,char> Key;
    std::string Code;
    std::vector<std::string> diferencialCode;
    std::vector<char> decode;

    std::vector<std::string> splitCode(std::string code);
    std::vector<char> decoding(std::vector<std::string> diferencialCode);

public:
   
    void get(std::string code,std::map<std::string,char> key);
    void print();
    
};