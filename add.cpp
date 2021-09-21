#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream MyFile;
    MyFile.open("/Users/abhimanyukunal/Downloads/sum.txt",ios::in);
    int diff=0;
    string line;
    while(getline(MyFile,line))
    {
        diff-=stoi(line);
    }
    MyFile.close();
    cout<<"Sum is : "<<diff;
    cin.get();
    return 0;
}