#include "mylib.hpp"

struct irasas {
int paz[10];
int egzas;
double galut;
double galut2;
};

int main() {
  irasas temp;
  vector<irasas> studentai;//saugo visus stud
  vector<int> x;
  fstream inFile;
  double galut = 0, galut2 = 0, mediana;
  string var, pav;
 
cout << setw(10)<< left << "Vardas"
  << setw(10)<< left << "Pavarde"
  << setw(19)<< left << "Galutinis (Vid.) / "
  << setw(10)<< left << "Mediana \n"
  //<< setw(19)<< left << "Galutinis (Med.) / "
  << "------------------------------------------------"<< endl;
 
  inFile.open("kursiokai.txt");
  while (inFile)
    { 
      int  sum = 0;
      inFile >> var>>pav>>temp.paz[0]>>temp.paz[1]>>temp.paz[2]>>
      temp.paz[3]>>temp.paz[4]>>temp.egzas;
      for (int i = 0; i < 5; i++)
        sum += temp.paz[i];
      
      temp.galut = double(sum) / double(5) * 0.4 + temp.egzas *0.6;
      sort(temp.paz, temp.paz + 5);
        mediana = (temp.paz[(4) / 2] + temp.paz[5 / 2]) / 2;
       
      galut2 = mediana * 0.4 + temp.egzas * 0.6;
      
      cout << fixed << setprecision(2)<< left
      << setw(10)<< var<< left
      << setw(10)<< pav<< left
      << setw(10)<< temp.galut<< left
      << setw(10)<< galut2<< endl;

    }
  inFile.close();
  
//isrusiuoja
  vector<string> input;
    ifstream MyReadFile("kursiokai.txt");
    if(!MyReadFile)  {
        cout << "Error opening file" << endl;
        return 0;
    }
    string y;
    while(getline(MyReadFile, y)) {
        input.push_back(y);
    }
    sort(input.begin(), input.end());
    for(const auto& s: input)
      cout << s << '\n';


  // Išimčių valdymas
std::ifstream readFile;
readFile.exceptions (std::ifstream::failbit | std::ifstream::badbit);
  
try{
    readFile.open("kursiokai.txt");
    readFile.close();
}
catch(std::ifstream::failure &readErr) {
    std::cerr << "\n\nException occured when reading a file\n"
              << readErr.what()
              << std::endl;

  return 0;
  }

  }