#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <bits/stdc++.h>

using std::cout;
using std::cin;
using std::string;
using namespace std;
using std::vector;
using std::endl;


struct irasas {
string vardas;
string pavarde;
int paz[10];
int egzas;
 
//int sk; - sudentu skaicius
double galut;
double galut2;
};

//masyvas su n ir 
//n skaicius - masyvo dydis -1
int main() {
  irasas temp;
  vector<int> x;//
  int n = 0, sum = 0;
  
  cout << "Ivesk varda: "; cin>>temp.vardas;
  cout << "Ivesk pavarde: "; cin>>temp.pavarde;
  cout << "Ivesk egz. paz.: "; cin>>temp.egzas;
 // cout << "Iveskite studentu skaiciu : "; cin>>temp.sk;//
   cout<<std::endl<<std::endl;

 // cout<<"Iveskite endl, kai neturesite ka ivesti"<<endl;
  cout << "Ivedus visus ND pazymius iveskite bet kokia raide"<<endl;
  cout<<std::endl<<std::endl;
  cout << "Ieskite paz ";

   
 
  
    while ( cin>>temp.paz[n]) 
   {
     if (isdigit(temp.paz[n]) == false ){
      cout<<"Ivesk paz.";
      x.push_back(temp.paz[n]);// prideada nauja elementa vektoriaus X gale
      sum +=temp.paz[n];
      n +=1;}
     else
      {cout<< "Ivede "<<endl;
       break;}
    }
  
   
temp.galut = double(sum) / double(n) * 0.4 + temp.egzas*0.6;
//temp.galut2 = mediana * 0.4 + temp.egzas * 0.6;
  

    double mediana;
  sort(temp.paz, temp.paz + n);
  if(n % 2 != 0)
    mediana = temp.paz[n / 2]; 
  else
    mediana = (temp.paz[(n - 1) / 2] + temp.paz[n / 2]) / 2;

//cout<<"Vardas\t"<<"Pavarde\t"<<"Galutinis balas\t"<<"Mediana"<<endl;
//cout<<temp.vardas<<"\t"<<temp.pavarde<<"\t"<<temp.galut<<"2\t"<<mediana<<endl;

  cout << setw(10)<< left << "Vardas"
  << setw(10)<< left << "Pavarde"
  << setw(19)<< left << "Galutinis (Vid.) / "
  << setw(10)<< left << "Mediana \n"
  //<< setw(19)<< left << "Galutinis (Med.) / "
  << "------------------------------------------------"<< endl;

  {cout << fixed << setprecision(2)<< left
    << setw(10)<< temp.vardas<< left
    << setw(10)<< temp.pavarde<< left
    << setw(19)<< temp.galut<< left
    << setw(10)<< mediana;}
   // << setw(10)<< temp.galut2;}
  cout << "\n\n";
}
