#include <iostream>
using namespace std;
class Marks {
    private:
    int marks[5];
    public:
    void input() {
        cout<<"Enter marks of 5 students: ";
        for (int i=0;i<5;i++) {
            cin>>marks[5];
        }
    }
    void display() {
        cout<<"Marks of 5 students: ";
        for (auto mark:marks) {
            cout<<" "<<mark;
        }
        cout<<endl;
    }
    friend int total(Marks m);
};
int total(Marks m) {
    int tot=0;
    for (auto mark:m.marks) {
        tot+=mark;
    }
    return tot;
}
int main () {
    Marks m;
    m.input();
    m.display();
    cout<<"Total marks: "<<total(m);
}