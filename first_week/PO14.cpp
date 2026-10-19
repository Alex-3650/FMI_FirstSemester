#include <iostream>
#include <cmath>


using namespace std;

bool isGeometryProgression(int a,int b,int c,int d) {

    if (pow(b,2) == a * c && pow(c,2) == b * d) return true;
    return false;

}


int main() {

    int a,b,c,d;
    cout<<"Input "<<endl;
    cin>>a>>b>>c>>d;
    bool isProgression=isGeometryProgression(a,b,c,d);
    cout<<"Output "<<endl;
    cout<<isProgression<<endl;

    return 0;
}