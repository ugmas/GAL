# GAL
OP užduotėlės

-->   Papildyta programos versija (v0.1 su vector) taip, kad duomenis ne tik įvesti bet ir nuskaityti iš failo. Sukuria ir užpildo failą kursiokai.txt;

-->   studentai surūšiuoti pagal vardus;

-->   minimaliai panaudotas išimčių valdymas

- Konteinerių testavimas: Išmatuoju patobulintos v0.3 realizacijos veikimo spartą priklausomai nuo naudojamo vieno iš dvejų konteinerių (matavimo taisyklės išlieka tos pačios): 

std::vector
std::list

Šioje užduotyje reiktų matuoti tik šiuos programoje atliekamus žingsnius:

- duomenų nuskaitymą iš failų;
- studentų rūšiavimą į dvi grupes/kategorijas;
Testavimas atliekamas su tais pačiais failais iš 1000, 10000, 100000, 1000000, 10000000 įrašų. (be to šią programą tai patobulintą pagal jau turimą v0.3 paskutinę realizaciją)

Testavimo sistemos parametrai: M1 3.2 GHz | 16GB | RETINA M1 256GB SSD | (CPU, RAM, HDD (magnetinis, SSD))

### <LIST> ###

Veiksmas/Failo dydis|         1000  |         10 000|       100 000|        1 000 000|    10 000 000
-------------              | -------------| -------------| -------------| -------------| -------------
Duomenų nuskaitymą iš failų| 0.0069| 0.065|0.83| 9.15| 30.7
Rūšiavimą į dvi grupes  | 0.016| 0.23|3.09 | 36.14| 101.67

### <VECTOR> ###

Veiksmas/Failo dydis       |  1000        |10 000        | 100 000      | 1 000 000    |10 000 000
-------------              | -------------| -------------| -------------| -------------| -------------
Duomenų nuskaitymą iš failų| 0.009| 0.068  | 0.88 | 9.11 | 31.13
Rūšiavimą į dvi grupes  | 0.02  | 0.285  | 3.62 | 44.89| 125.7

