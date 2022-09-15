#include <iostream>
#include <string>
#include <cstdio>
#include <vector>

struct irasas {
std::string vardas;
std::string pavarde;
int paz[10];
int egzas;
double galut;
};

 
int main() {
  irasas temp;
  int n, sum = 0;
  std::cout << "Ivesk varda:"; std::cin>>temp.vardas;
  std::cout << "Ivesk pavarde:"; std::cin>>temp.pavarde;
  std::cout << "Ivesk egz. paz.:"; std::cin>>temp.egzas;
  std::cout << "Kiek turi paz. (1-10)? "; std::cin>>n;

  for (int i = 0; i < n; i++){
    std::cout<<"Ivesk"<<i+1<<"-aji paz.";
    std::cin>>temp.paz[i];
    sum += temp.paz[i];
  }

temp.galut = double(sum) / double(n)* 0.4 + temp.egzas * 0.6;

  std::cout<std::endl<std::endl;
  std::cout<<"Vardas\t"<<"Pavarde\t"<<"Galutinis balas"<<std::endl;
  std::cout<<temp.vardas<<"\t"<<temp.pavarde<<"\t"<<temp.galut<<std::endl;
  
  printf("%10s %10s %5s\n", "Vardas\t", "Pavarde\t", "Galutinis balas");
  printf("%10s %10s %5s\n", temp.vardas.c_str(), temp.pavarde.c_str(), temp.galut);
 
}
*/
