#include <iostream>
#include <string>

using namespace std;

class JJClass {
    private:
        string name;
    public:
        JJClass(string y) {
            cout << "This runs first" << endl;
            name = y;
        }
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }
};

int main() {
    JJClass ob("Name1");
    cout << "Name: " << ob.getName() << endl;
    ob.setName("Jamie Jarrett");
    cout << "Name: " << ob.getName() << endl;
    return 0;
}
