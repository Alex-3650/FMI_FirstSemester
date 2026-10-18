
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char *argv[]) {
    constexpr double pi=numbers::pi;
     double d{};

    cout<<"Input: "<<endl;
    cin>>d;
    cout<<"Output: "<<endl;
     double area = (d/2)*(d/2)*pi;
     double circumference = 2*pi*(d/2);
    cout<<"Area: "<<fixed<<setprecision(1)<<area<<endl;
    cout<<"Circumference: "<<fixed<<setprecision(1)<<circumference<<endl;



}