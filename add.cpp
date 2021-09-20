#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream MyFile;
    MyFile.open("/Users/abhimanyukunal/Downloads/sum.txt",ios::in);
    int sum=0;
    string line;
    while(getline(MyFile,line))
    {
        sum+=stoi(line);
    }
    MyFile.close();
    cout<<"Sum is : "<<sum;
    cin.get();
    return 0;
}