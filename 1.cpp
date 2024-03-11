#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    /*
    bool a = false;
    int b = 5;
    cout << "Bool = " << a << endl;
    cout << "Int = " << b << endl;
   

    float c = 0.999999; //окргуляет только если больше 6 знаков после точки
    double d = 0.999999; //окргуляет только если больше 6 знаков после точки ( в принципе разницы нет особой)
    cout << "Float = " << c << endl;
    cout << "Double = " << d << endl;
   

    char e = 'I'; //может хранить в себе символ или букву; на самом деле в нем закодировано число таблицой ASCII (American Standart Code For Information Intillegence)
    string f = "nomorefearnomorepain";
    cout << "Char = " << e << endl;
    cout << "String = " << f << endl;
    */
    
    char str[100] = "greater than one";
    short old = 99;
    double weight = 65.75;

    cin >> old;
    cin >> weight;

    cout << str << "\n" << old << '\n' << weight << endl;

    return 0;
}