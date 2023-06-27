#include<iostream>
using namespace std;

class base_15{

public:
    virtual void func() {

        cout << "\nbase_15" << endl;
    }
};

class derive_15 : public base_15 {
public :
    void func(base_15 *a) {
        cout << "derive_15" << endl;
    }
};

    void printout(base_15 *x) {
        x->func();
    }

int main()
{
    derive_15 d;
    printout(&d);
    derive_15 c;
    func(&c);
    return 0;
}
