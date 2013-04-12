#include <iostream>
using namespace std;

class A {
public:
    string getAStr() const {return *aStr;};
    void setAStr(string &str) {aStr = &str;};
private:
    string *aStr;
};

class HelloCPP {
public:
    HelloCPP();
    ~HelloCPP();
    string getHStr() const {return hStr;};
    void setHStr(string str) {hStr = str;cout<<a->getAStr()<<endl;};    
    
private:
    string hStr;
    A* a;
};

HelloCPP::HelloCPP() {
    a = new A();
    hStr = "content";
    a->setAStr(hStr);
}

HelloCPP::~HelloCPP() {
    delete a;
}

int main() {
    HelloCPP h;
    char con[256];
    do {
        gets(con);
        h.setHStr(string(con));
        memset(con, 0, 256);
    } while (strlen(con) == 0);
    return 0;
}
