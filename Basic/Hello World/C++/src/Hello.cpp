#include <iostream>

using namespace std;

class Hello {
    private:
        string message;
    public:
        string sayHello();
};


string Hello::sayHello(){
    this->message = "Hello World";
    return message;
}