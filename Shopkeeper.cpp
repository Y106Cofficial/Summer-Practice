#include <iostream>
#include <fstream>

using namespace std;

struct Shopkeeper{
    string name;
    string secondname;
    int SaleTime;
    string specialization;
    string product1, product2, product3;
    int countP1, countP2, countP3;
    float price1, price2, price3;

    float Buy_Sell();
}FirstShopkeeper, SecondShopkeeper, ThirdShopkeeper, FourthShopkeeper, FifthShopkeeper;

void FindFullInfo(Shopkeeper *exmpl, string TextFile){
    string newinfo;
    int pos1, pos2;
    pos1 = TextFile.find("Name:");              //Find name of Shopkeeper +
    pos1 = pos1 + 5;
    pos2 = TextFile.find(",SecondName");
    pos2 = pos2 - pos1;                          
    newinfo = TextFile.substr(pos1,pos2);
    exmpl->name = newinfo;

    pos1 = TextFile.find(",SecondName:");          //Find SecondName of Shopkeeper +
    pos1 = pos1 + 12;
    pos2 = TextFile.find(",Saletime:");
    pos2 = pos2 - pos1;
    newinfo = TextFile.substr(pos1,pos2);
    exmpl->secondname = newinfo;

    pos1 = TextFile.find(",Saletime:");          //Find Saletime of Shopkeeper +
    pos1 = pos1 + 10;
    pos2 = TextFile.find(",Speacialization:");
    pos2 = pos2 - pos1;
    newinfo = TextFile.substr(pos1,pos2);
    exmpl->SaleTime = stoi(newinfo);

    pos1 = TextFile.find(",Speacialization:");          //Find specizlization of Shopkeeper +
    pos1 = pos1 + 17;
    pos2 = TextFile.find(",NProduct1:");
    pos2 = pos2 - pos1;
    newinfo = TextFile.substr(pos1,pos2);
    exmpl->specialization = newinfo;

    pos1 = TextFile.find(",NProduct1:");          //Find 1 NProduct of Shopkeeper +
    pos1 = pos1 + 11;
    pos2 = TextFile.find(",NProduct2:");
    pos2 = pos2 - pos1;
    newinfo = TextFile.substr(pos1,pos2);
    exmpl->product1 = newinfo;

    pos1 = TextFile.find(",NProduct2:");          //Find 2 NProduct of Shopkeeper +
    pos1 = pos1 + 11;
    pos2 = TextFile.find(",NProduct3:");
    pos2 = pos2 - pos1;
    newinfo = TextFile.substr(pos1,pos2);
    exmpl->product2 = newinfo;

    pos1 = TextFile.find(",NProduct3:");          //Find 3 NProduct of Shopkeeper +
    pos1 = pos1 + 11;
    pos2 = TextFile.find(",CProduct1:");
    pos2 = pos2 - pos1;
    newinfo = TextFile.substr(pos1,pos2);
    exmpl->product3 = newinfo;

    pos1 = TextFile.find(",CProduct1:");        //Find 1 CProduct of Shopkeeper +
    pos1 = pos1 + 11;
    pos2 = TextFile.find(",CProduct2:");
    pos2 = pos2 - pos1;
    newinfo = TextFile.substr(pos1,pos2);
    exmpl->countP1 = stoi(newinfo);

    pos1 = TextFile.find(",CProduct2:");        //Find 2 CProduct of Shopkeeper +
    pos1 = pos1 + 11;
    pos2 = TextFile.find(",CProduct3:");
    pos2 = pos2 - pos1;
    newinfo = TextFile.substr(pos1,pos2);
    exmpl->countP2 = stoi(newinfo);

    pos1 = TextFile.find(",CProduct3:");        //Find 3 CProduct of Shopkeeper +
    pos1 = pos1 + 11;
    pos2 = TextFile.find(",PProduct1:");
    pos2 = pos2 - pos1;
    newinfo = TextFile.substr(pos1,pos2);
    exmpl->countP3 = stoi(newinfo);

    pos1 = TextFile.find(",PProduct1:");        //Find 1 PProduct of Shopkeeper +
    pos1 = pos1 + 11;
    pos2 = TextFile.find(",PProduct2:");
    pos2 = pos2 - pos1;
    newinfo = TextFile.substr(pos1,pos2);
    exmpl->price1 = stof(newinfo);

    pos1 = TextFile.find(",PProduct2:");        //Find 2 PProduct of Shopkeeper +
    pos1 = pos1 + 11;
    pos2 = TextFile.find(",PProduct3:");
    pos2 = pos2 - pos1;
    newinfo = TextFile.substr(pos1,pos2);
    exmpl->price2 = stof(newinfo);

    pos1 = TextFile.find(",PProduct3:");        //Find 3 PProduct of Shopkeeper +
    pos1 = pos1 + 11;
    newinfo = TextFile.substr(pos1);
    exmpl->price3 = stof(newinfo);
}

void FillInfo(){
    ifstream IFile;
    IFile.open("Shopkeeper_Info.txt");
    string infoFile;
    for (int i = 0; i < 5; i++)
    {
        getline(IFile,infoFile);
        switch (i)
        {
        case 0:
        FindFullInfo(&FirstShopkeeper,infoFile);
        cout<<"Имя: "<<FirstShopkeeper.name<<endl;
        cout<<"Фамилия: "<<FirstShopkeeper.secondname<<endl;
        cout<<"Время скидки: "<<FirstShopkeeper.SaleTime<<endl;
        cout<<"Специализация: "<<FirstShopkeeper.specialization<<endl;
        cout<<"Продукт 1: "<<FirstShopkeeper.product1<<endl;
        cout<<"Продукт 2: "<<FirstShopkeeper.product2<<endl;
        cout<<"Продукт 3: "<<FirstShopkeeper.product3<<endl;
        cout<<"Количество 1 продукта: "<<FirstShopkeeper.countP1<<endl;
        cout<<"Количество 2 продукта: "<<FirstShopkeeper.countP2<<endl;
        cout<<"Количество 3 продукта: "<<FirstShopkeeper.countP3<<endl;
        cout<<"Цена 1 продукта: "<<FirstShopkeeper.price1<<endl;
        cout<<"Цена 2 продукта: "<<FirstShopkeeper.price2<<endl;
        cout<<"Цена 3 продукта: "<<FirstShopkeeper.price3<<endl;
        break;

        case 1:
        FindFullInfo(&SecondShopkeeper,infoFile);
        cout<<"Имя: "<<SecondShopkeeper.name<<endl;
        cout<<"Фамилия: "<<SecondShopkeeper.secondname<<endl;
        cout<<"Время скидки: "<<SecondShopkeeper.SaleTime<<endl;
        cout<<"Специализация: "<<SecondShopkeeper.specialization<<endl;
        cout<<"Продукт 1: "<<SecondShopkeeper.product1<<endl;
        cout<<"Продукт 2: "<<SecondShopkeeper.product2<<endl;
        cout<<"Продукт 3: "<<SecondShopkeeper.product3<<endl;
        cout<<"Количество 1 продукта: "<<SecondShopkeeper.countP1<<endl;
        cout<<"Количество 2 продукта: "<<SecondShopkeeper.countP2<<endl;
        cout<<"Количество 3 продукта: "<<SecondShopkeeper.countP3<<endl;
        cout<<"Цена 1 продукта: "<<SecondShopkeeper.price1<<endl;
        cout<<"Цена 2 продукта: "<<SecondShopkeeper.price2<<endl;
        cout<<"Цена 3 продукта: "<<SecondShopkeeper.price3<<endl;
        break;

        case 2:
        FindFullInfo(&ThirdShopkeeper,infoFile);
        cout<<"Имя: "<<ThirdShopkeeper.name<<endl;
        cout<<"Фамилия: "<<ThirdShopkeeper.secondname<<endl;
        cout<<"Время скидки: "<<ThirdShopkeeper.SaleTime<<endl;
        cout<<"Специализация: "<<ThirdShopkeeper.specialization<<endl;
        cout<<"Продукт 1: "<<ThirdShopkeeper.product1<<endl;
        cout<<"Продукт 2: "<<ThirdShopkeeper.product2<<endl;
        cout<<"Продукт 3: "<<ThirdShopkeeper.product3<<endl;
        cout<<"Количество 1 продукта: "<<ThirdShopkeeper.countP1<<endl;
        cout<<"Количество 2 продукта: "<<ThirdShopkeeper.countP2<<endl;
        cout<<"Количество 3 продукта: "<<ThirdShopkeeper.countP3<<endl;
        cout<<"Цена 1 продукта: "<<ThirdShopkeeper.price1<<endl;
        cout<<"Цена 2 продукта: "<<ThirdShopkeeper.price2<<endl;
        cout<<"Цена 3 продукта: "<<ThirdShopkeeper.price3<<endl;
        break;

        case 3:
        FindFullInfo(&FourthShopkeeper,infoFile);
        cout<<"Имя: "<<FourthShopkeeper.name<<endl;
        cout<<"Фамилия: "<<FourthShopkeeper.secondname<<endl;
        cout<<"Время скидки: "<<FourthShopkeeper.SaleTime<<endl;
        cout<<"Специализация: "<<FourthShopkeeper.specialization<<endl;
        cout<<"Продукт 1: "<<FourthShopkeeper.product1<<endl;
        cout<<"Продукт 2: "<<FourthShopkeeper.product2<<endl;
        cout<<"Продукт 3: "<<FourthShopkeeper.product3<<endl;
        cout<<"Количество 1 продукта: "<<FourthShopkeeper.countP1<<endl;
        cout<<"Количество 2 продукта: "<<FourthShopkeeper.countP2<<endl;
        cout<<"Количество 3 продукта: "<<FourthShopkeeper.countP3<<endl;
        cout<<"Цена 1 продукта: "<<FourthShopkeeper.price1<<endl;
        cout<<"Цена 2 продукта: "<<FourthShopkeeper.price2<<endl;
        cout<<"Цена 3 продукта: "<<FourthShopkeeper.price3<<endl;
        break;

        case 4:
        FindFullInfo(&FifthShopkeeper,infoFile);
        cout<<"Имя: "<<FifthShopkeeper.name<<endl;
        cout<<"Фамилия: "<<FifthShopkeeper.secondname<<endl;
        cout<<"Время скидки: "<<FifthShopkeeper.SaleTime<<endl;
        cout<<"Специализация: "<<FifthShopkeeper.specialization<<endl;
        cout<<"Продукт 1: "<<FifthShopkeeper.product1<<endl;
        cout<<"Продукт 2: "<<FifthShopkeeper.product2<<endl;
        cout<<"Продукт 3: "<<FifthShopkeeper.product3<<endl;
        cout<<"Количество 1 продукта: "<<FifthShopkeeper.countP1<<endl;
        cout<<"Количество 2 продукта: "<<FifthShopkeeper.countP2<<endl;
        cout<<"Количество 3 продукта: "<<FifthShopkeeper.countP3<<endl;
        cout<<"Цена 1 продукта: "<<FifthShopkeeper.price1<<endl;
        cout<<"Цена 2 продукта: "<<FifthShopkeeper.price2<<endl;
        cout<<"Цена 3 продукта: "<<FifthShopkeeper.price3<<endl;
        break;
        }
    }
    IFile.close();
}

int main(){
    FillInfo();
}