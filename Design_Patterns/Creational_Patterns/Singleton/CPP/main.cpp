#include <iostream>

using namespace std;

class singleton 
{
private:
    static singleton* instance;
    singleton();
public:
    static singleton* getInstance();
};

singleton* singleton::instance = 0;

singleton* singleton::getInstance()
{
    if(instance == 0)
    {
        instance = new singleton();
    }
    return instance;
}

singleton::singleton(){};

int main()
{
    singleton* a = singleton::getInstance();
    singleton* b = singleton::getInstance();

    cout << a << " " << b << endl;
    return 0;
}