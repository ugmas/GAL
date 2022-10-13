#ifndef FUNKCIJOS_H
#define FUNKCIJOS_H

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <numeric>
#include <fstream>
#include <stdio.h>
#include <ctype.h>
#include <sstream>
#include <string.h>
//#include <bits/stdc++.h>
#include <ctime>
#include <chrono>
#include <string>
#include <random>

 


using std::vector;
using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::left;
using std::right;
using std::setw;
using std::setprecision;
using std::fixed;
using std::ifstream;
using std::streamsize;
using std::sort;
using std::numeric_limits;

struct Irasas {
	string Vardas, Pavarde;
	vector<int> paz ;
	int egzas;
	float galut = 0;
};

int generate_random();
float Ivertinimas(vector<int> skaiciai);
int writeLines(vector<int> pazymiai);
void readFromFile(vector<Irasas>& Eil, int n);
void createFile(int, int);
#endif