#include <iostream>
using namespace std;
class Product {
    public:
    string name;
    double price;
    void input() {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter price: ";
        cin>>price;
    }
    void display() {
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
Product higherprice(Product p1,Product p2) {
    if (p1.price>p2.price) {
        return p1;
    }
    else return p2;
}
int main () {
    Product p1,p2,result;
    cout<<"Enter details of product 1:"<<endl;
    p1.input();
    cout<<"Enter details of product 2:"<<endl;
    p2.input();
    result = higherprice(p1,p2);
    cout<<"Product with higher price:"<<endl;
    result.display();
}