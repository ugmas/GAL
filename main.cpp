#include "funkcijos.h"

int main()  //atspausdina rezultatus
{
	vector<int> skaiciai;
  int ND = 5;
  int n = writeLines(skaiciai);
	vector<Irasas> studentai;
	readFromFile(studentai, n);
 	vector<Irasas> neislaike;
  vector<Irasas> islaike;
	int neislaik = 0, islaik = 0;
  int m = 100;

  using hrClock = std::chrono::high_resolution_clock;
  hrClock::time_point start, end, visopradzia, visopabaiga;
  std::chrono::duration<double> time;
  visopradzia = hrClock::now();
  for (int i = 0; i < ND; i++) { //5
      createFile(m, ND);
    };

 //rusiavimas 
	for (int i = 0; i < n; i++) {
		if (studentai.at(i).galut < 5) {
			neislaike.push_back(studentai.at(i));
			neislaik++;
		}
	}
	for (int j = 0; j < n; j++) {
		if (studentai.at(j).galut >= 5) {
      islaike.push_back(studentai.at(j));
			islaik++;}
	}
	

//isvedimas
	string failo_pav;
	failo_pav = "Neislaike.txt";
	ofstream vargs_failas(failo_pav);
	for (int i = 0; i < n; i++) {
		if (studentai.at(i).galut < 5) {
			vargs_failas << studentai.at(i).Vardas << setw(20) << studentai.at(i).Pavarde << setw(18) << studentai.at(i).galut << endl;
		}
		
	}
	failo_pav = "Islaike.txt";
	ofstream prot_failas(failo_pav);

	for (int j = 0; j < n; j++) {
		if (studentai.at(j).galut >= 5) {
			prot_failas << studentai.at(j).Vardas << setw(20) << studentai.at(j).Pavarde << setw(18) << studentai.at(j).galut << endl;
		}
	}
	
	return 0;
}






