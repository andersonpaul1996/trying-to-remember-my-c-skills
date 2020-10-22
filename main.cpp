#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <any>
#include <map>
using namespace std;

class Json {
public:
    Json(const std::string& s){
        mapa[string("hello")] = s;
    }
    std::any& operator[](const std::string& key){
        if (mapa[key].type() == typeid(string))
    {
        return mapa[key];
        //any_cast<const std::string&>(_parsed_json[key]);
    }
    }


public:
    std::map <std::string, std::any> mapa;
};

int main()
{
    Json JSON(string("Dolly"));
    cout << std::any_cast<string>(JSON[string("hello")]);
    //EXPECT_EQ(std::any_cast<std::string>(object["lastname"]), "Ivanov");
    return 0;
}
