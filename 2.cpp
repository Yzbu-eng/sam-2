#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{ 
  string s,s1;
  int n,k;
  if (argc<=2){
    cout<<"Не заданы имена файлов"<<endl;
    return 0;
  }
  ifstream f(argv[1]);
  ofstream f1(argv[2]);
  if (!f.is_open()&f1.is_open()){
    cout<<"Ошибка открытия файлов"<<endl;
    return 0;
  }
  f>>s;
  cout<<"Введите N"<<endl;
  cin>>n;
  if (s.length()>n){
    for (int i=s.length()-n;i<s.length();i++)
      f1<<s[i];

  }
  if (s.length()<n){
    cout<<"Введите подстроку длиной N"<<endl;
    cin>>s1;
    f1<<s1<<s;
  }
  
}