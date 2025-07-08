#include <iostream>
#include <map>
#include <vector>

using namespace std; 

std::vector<std::string> codes = {
    ".-- .-. ---",
    "           ",
    "fredwFDcwEF",
    "--- --- erfref",
    "f-- cxx --- .-- adde ---",
    ".-- .-. --- .-- .-. --- .-- .-. --- .-- .-. ---",
    ""
};

vector<char> decoder(string line) {
    vector<char> decode;
    map<string, char> Alphabet;
    Alphabet[".--"] = 'A';
    Alphabet[".-."] = 'B';
    Alphabet["---"] = 'C';
    
    string symbl;
    for (size_t i = 0; i < line.size(); ) {
        if (line[i] == ' ') {
            i++;
            continue;
        }
        
       
        if (i + 3 > line.size()) {
            break; 
        }
        
        symbl = line[i]+line[i+1]+line[i+2];
        if (Alphabet.count(symbl)) {
            decode.push_back(Alphabet[symbl]);
            i += 3;
        } else {
           
            while (i < line.size() && line[i] != ' ') {
                i++;
            }
        }
    }
    return decode;
}

int main() {
    for (size_t i = 0; i < codes.size(); i++) {
        cout << endl << i + 1 << " ";
        vector<char> decode = decoder(codes[i]);
        for (size_t j = 0; j < decode.size(); j++) { 
            cout << decode[j] << ' ';
        }
    }
    return 0;
}