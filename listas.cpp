 #include "funkcijos.h"

int main()  //atspausdina rezultatus
{
	list<int> skaiciai;
  int ND = 5;
  int n = writeLines(skaiciai);
	list<Irasas> studentai;
	readFromFile(studentai, n);
 	vector<Irasas> neislaike;
  list<Irasas> islaike;
	int neislaik = 0, islaik = 0;
  int m = 1000;

  using hrClock = std::chrono::high_resolution_clock;
  hrClock::time_point startas, endas;
  std::chrono::duration<double> time;
  //visopradzia = hrClock::now();
  
  
  for (int i = 0; i < ND; i++) { //5
      createFile(m, ND);
    };

 //rusiavimas
  auto start = std::chrono::high_resolution_clock::now();
	auto st = start;
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
	
  auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> diff = end - start;
	std::cout << "Failo rusiavimas i dvi grupes uztruko : " << diff.count() << " s\n";
	
	

//isvedimas
	string failo_pav;
	failo_pav = "Neislaike.txt";
	ofstream vargs_failas(failo_pav);
  auto start1 = std::chrono::high_resolution_clock::now();
	auto st1 = start1;
	for (int i = 0; i < n; i++) {
		if (studentai.at(i).galut < 5) {
			vargs_failas << studentai.at(i).Vardas << setw(20) << studentai.at(i).Pavarde << setw(18) << studentai.at(i).galut << endl;
		}
		
	}
  auto end1 = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> diff1 = end1 - start1;
	std::cout << "Failo isvedimas i Neislaike.txt uztruko : " << diff1.count() << " s\n";
    
	failo_pav = "Islaike.txt";
	ofstream prot_failas(failo_pav);

  auto start2= std::chrono::high_resolution_clock::now();
	auto st2 = start2;

  
	for (int j = 0; j < n; j++) {
		if (studentai.at(j).galut >= 5) {
			prot_failas << studentai.at(j).Vardas << setw(20) << studentai.at(j).Pavarde << setw(18) << studentai.at(j).galut << endl;
		}
	}
  auto end2 = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> diff2 = end2 - start2;
	std::cout << "Failo isvedimas i Islaike.txt uztruko : " << diff2.count() << " s\n";

	
	return 0;
}
  