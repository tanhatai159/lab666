#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    string name;
    getline(cin,name);
    cout << "Fahsai: Wow!!! "<< name <<" is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << ""<< name <<": ";
    int gear;
    cin >> gear;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << int(gear/pow(10,7)) - 12 << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << ""<< name <<": ";
    string movie;
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << ""<< name <<": ";
    string day;
    getline(cin,day);
    cout << "Fahsai: "<< day <<"....that is OK!!! I'm looking forward to watching "<< movie <<" with you." << endl;
    cout << ""<< name <<": ";
    string word;
    getline(cin,word);
    cout << "Fahsai: 555+ see you "<< day <<". Bye Bye \\(^ ^)/";
    return 0;
    
}
