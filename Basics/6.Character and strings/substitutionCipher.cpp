#include<iostream>
#include<string>
using namespace std;

int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr "};

    // string alphabet;
    // for (size_t i = 32; i<128 ; i++){
        // alphabet += static_cast<char>(i);
    // }

    cout << "Enter a secret message ";
    string message;
    getline(cin,message);

    string encryptedMessage;
    for(auto letter : message){
        encryptedMessage += key.at(alphabet.find(letter));
    }
    cout << "Encrypted Message is " << encryptedMessage << endl;

    string orignalMessage;
    for(auto letter : encryptedMessage){
        orignalMessage += alphabet.at(key.find(letter));
    }
    cout << "Orignal Message is " << orignalMessage << endl;
    return 0;
}