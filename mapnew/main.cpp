#include <iostream>
#include <map>
#include <vector>

using namespace std; 
int main() {
    
    vector<string> codes = {
        ".-- .-. ---",
        "           ",
        "fredwFDcwEF",
        "--- --- erfref",
        "f-- cxx --- .-- adde ---",
        ".-- .-. --- .-- .-. --- .-- .-. --- .-- .-. ---",
        "",
        "------------------------------------------------"
    };

   
    map<string, char> Alphabet;
    Alphabet[".--"] = 'A';
    Alphabet[".-."] = 'B';
    Alphabet["---"] = 'C';

    
    for (int i = 0; i < codes.size(); i++) {
        string currentCode = codes[i]; 
        string currentSymbol = "";    
        vector<char> decodedLetters;   

        for (char c : currentCode) {
            if (c != ' ') {
                
                currentSymbol += c;
            } else {
                
                if (Alphabet.count(currentSymbol) > 0) {
              
                    decodedLetters.push_back(Alphabet[currentSymbol]);
                }
                currentSymbol = ""; 
            }
        }


        if (!currentSymbol.empty() && Alphabet.count(currentSymbol) > 0) {
            decodedLetters.push_back(Alphabet[currentSymbol]);
        }

        
        cout <<(i + 1) << " ";
        for (char letter : decodedLetters) {
            cout << letter << " ";
        }
        cout << endl;
    }

    return 0;
}