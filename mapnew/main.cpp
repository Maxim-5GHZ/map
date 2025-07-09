#include "Classes/codes.h"
#include "Classes/decoder.h"
 


int main() {

    for (size_t i = 0; i < codes.size(); i++) {

        std::cout << std::endl << i + 1 << " ";

        std::vector<char> decode = decoder(codes[i]);

        
        for (size_t j = 0; j < decode.size(); j++) { 

            std::cout << decode[j] << ' ';

        }
    }

    return 0;
}