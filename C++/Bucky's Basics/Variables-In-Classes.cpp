#include <iostream>
#include <string>

using namespace std;

class JJClass {
    private:
        string name = "Test";
    public:
        void setName(string x) {
            name = x;
        }

        string getName() {
            return name;
        }
};

int main() {
    JJClass ob;
    cout << "Name: " << ob.getName() << endl;
    ob.setName("Jamie Jarrett");
    cout << "Name: " << ob.getName() << endl;
    return 0;
}