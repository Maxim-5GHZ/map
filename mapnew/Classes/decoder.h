#include"Alfabet.h"

std::vector<char> decoder(std::string line) {
    std::vector<char> decode;
    
    size_t i = 0;
    
    while (i < line.size()) {

        if (line[i] == ' ') {

            i++;

            continue;
        }

        if (i + 3 <= line.size()) {

            bool valid = true;

            for (size_t j = i; j < i + 3; j++) {

                if (line[j] != '.' && line[j] != '-') {

                    valid = false;

                    break;

                }
            }

            if (valid) {

                std::string symbl = line.substr(i, 3);

                if (Alphabet.count(symbl)) {

                    decode.push_back(Alphabet[symbl]);

                    i += 3;

                    continue;
                }
            }
        }

        while (i < line.size() && line[i] != ' ') {
            i++;
        }
    }
    return decode;
}

