#include <iostream>
#include <fstream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    string branch;
    friend ofstream & operator <<(ofstream &ofs,Student &s);
    friend ifstream & operator >>(ifstream &ifs,Student &s);

};
//overloading cout operator
ofstream & operator<<(ofstream &ofs,Student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}
ifstream & operator>>(ifstream &ifs,Student &s){
    ifs>>s.name>>s.roll>>s.branch;
    return ifs;
}
int main(){
    Student s1;
    s1.name="Sarthak Yadav";s1.roll=136;s1.branch="MCE";
    ofstream ofs("Student.txt",ios::trunc);
    /*ofs<<s1.name<<endl;
    ofs<<s1.roll<<endl;
    ofs<<s1.branch<<endl;*/
    /*ofs<<s1;
    ofs.close();*/
    ifstream ifs("Student.txt");
    ifs>>s1;
    cout<<s1.name<<endl;
    cout<<s1.roll<<endl;
    cout<<s1.branch<<endl;
    ifs.close();

}