#include "funkcijos.h"

int generate_random(){
	return rand() % 10 + 1;
}

float Ivertinimas(vector<int> skaiciai) {
	Irasas Eil;
	Eil.galut = 0.4 * accumulate(skaiciai.begin(), skaiciai.end(), 0) / skaiciai.size() + 0.6 * generate_random();
	return Eil.galut;
}

int writeLines(vector<int> pazymiai){
	int n = 100;//stud skaicius tas pats kaip ir m
  vector<int> skaiciai;
	Irasas Eil;
  
	//cout << "iveskite studentu skaiciu: " << endl;
	//cin >> n;
	string pavadinimas = "Studentai_" +  to_string(n) + ".txt";
  
	auto start = chrono::high_resolution_clock::now();
	auto st = start;
  
	ofstream out_data(pavadinimas);
	out_data <<  setw(20) <<  left << "Vardas"<<
              setw(20) <<  left << "Pavarde"<<
              setw(20) <<  left << "Galutinis(vid.)"<<endl;

  for (int s = 1; s <= n; s = s + 1){
		for (int i = 0; i < 5; i++)
	{
		skaiciai.push_back(generate_random());
	}
		out_data <<setw(20) << "Vardas" + to_string(s) <<
			        setw(20) << "Pavarde" + std::to_string(s) <<
			        setw(18) << Ivertinimas(skaiciai) << endl;
		skaiciai.clear();
	}
	auto end = chrono::high_resolution_clock::now();
	chrono::duration<double> diff = end - start;
  
	cout<<"Failo kurimas uztruko: "<< diff.count()<< " s\n";

	return n;
}

void readFromFile( vector<Irasas>& Eil, int n)
{
	int student_counter = 0;
	ifstream fileRead;
	string pavadinimas = "Studentai_" +  to_string(n) + ".txt";
	string buff;
	fileRead.open(pavadinimas);
  
	if (fileRead.is_open()) {

		auto start = chrono::high_resolution_clock::now();
		auto st = start;
    
		getline(fileRead >> ws, buff);
		while (student_counter < n)
		{

			Eil.resize(Eil.size() + 1);
			fileRead >> Eil.at(student_counter).Vardas;
			fileRead >> Eil.at(student_counter).Pavarde;
			fileRead >> Eil.at(student_counter).galut;
			student_counter++;
		}
		auto end = chrono::high_resolution_clock::now();
		chrono::duration<double> diff = end - start;
    
		cout << "Failo nuskaitymas uztruko: "<< diff.count() << " s\n";

	}


}
void createFile(int lines, int ND){//pvz 1000 eil ir 5 pazymiai
  using hrClock = std::chrono::high_resolution_clock;
  mt19937 mt(static_cast<long unsigned int>(hrClock::now().time_since_epoch().count()));
  std::uniform_int_distribution<int> random10(0, 10);
  std::ostringstream fileName;
  fileName << "kursiokai" << lines << ".txt";
  std::ofstream fr(fileName.str());
  
//isspausdina pirma 'antrastine' failo eilute
    fr << setw(20) << left << "Vardas" << setw(20) << "Pavarde";
    for (int i = 1; i <= ND; i++)
        fr << "ND" << std::setw(8) << std::left << i;
    fr << "Egz." << endl;
    fr << endl;
  

    int last = 0, mark;
    for (int i = 1; i <= lines; i++) {
        fr << "Vardas" << setw(14) << left << i << "Pavarde" << setw(14) << left << i;
        for (int j = 0; j <= ND; j++) {
          mark = random10(mt);
          fr << setw(10) << left << mark;
          last = mark;
          
        }
        if (lines != i)
            fr << endl;
    }
}
