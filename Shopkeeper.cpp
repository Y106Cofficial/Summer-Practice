#include <iostream>
#include <fstream>

using namespace std;

struct Shopkeeper{
    string name;
    string secondname;
    int SaleTime;
    string specialization;

    float Buy_Sell();
};

float Shopkeeper::Buy_Sell(){
    ofstream Ofile;
    ifstream Ifile;
    string infoFile;
    float price;
    int pos;
    Ifile.open("Shopkeeper_Info.txt");
    getline(Ifile,infoFile);
    pos = infoFile.find("Appels:");
    infoFile = infoFile.substr(pos,6);
    cout<<infoFile;
};

int main(){
    Shopkeeper person1;
    person1.name="Ivan";
    person1.secondname = "Petrov";
    person1.SaleTime = 13;
    person1.specialization = "Fishman";
    person1.Buy_Sell();
}