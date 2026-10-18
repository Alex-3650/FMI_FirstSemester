 #include <iostream>

using namespace std;


int main() {
 cout<<"Input"<<endl;
 int totalSeconds;
 cin>>totalSeconds;
 cout<<"Output"<<endl;

 int days =   totalSeconds/86400;
 int hours = (totalSeconds%86400)/3600;
 int minutes = ((totalSeconds)%3600)/60;
 int seconds =((totalSeconds))%60;

 cout<<days<<" days,"<<hours<<" hours,"<<minutes<<" minutes,"<<seconds<<" seconds"<<endl;

}