#include <iostream>
using namespace std;

int main(){
    // method 1
    string str="Bharat Mata ki Jai";
    int vowels=0,consonants=0,spaces=0;
    for (int i=0; str[i]!='\0';i++){
        if (str[i] =='A'  || str[i] =='E' || str[i] =='I' || str[i] =='U'
        || str[i] =='O' || str[i] =='o' || str[i] =='a' || str[i] =='i' || str[i] =='e' || str[i] =='u'){
            vowels++;
        }
        else if (str[i]==' '){
            spaces++;
        
        }
        else {
            consonants++;
        }
    } cout<<vowels<<endl<<spaces<<endl<<consonants<<endl;
    //method 2
    /*std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Array to store vowels
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    int vowelCount = 0, consonantCount = 0, spaceCount = 0;

    for (char ch : inputString) {
        if (isalpha(ch)) {
            // Check if the character is a vowel
            bool isVowel = false;
            for (char vowel : vowels) {
                if (ch == vowel) {
                    isVowel = true;
                    break;
                }
            }

            if (isVowel) {
                ++vowelCount;
            } else {
                ++consonantCount;
            }
        } else if (isspace(ch)) {
            // Check if the character is a space
            ++spaceCount;
        }
    }

    std::cout << "Vowels: " << vowelCount << std::endl;
    std::cout << "Consonants: " << consonantCount << std::endl;
    std::cout << "Spaces: " << spaceCount << std::endl;*/
    return 0;
}