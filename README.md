# v1.0 

Optimizuoja studentų rūšiavimo į dvi kategorijas ("vargšiukų" ir "kietiakų") realizaciją: t.y. visiems trims konteinerių tipams (vector ir list) išmatuoja programos veikimo spartą priklausomai nuo studentų dalijimo į dvi kategorijas strategijos:

* 1 strategija: Bendro studentai konteinerio (vector ir list tipų) skaidymas (rūšiavimas) į du naujus to paties tipo konteinerius: "vargšiukų" ir "kietiakų". Tokiu būdu tas pats studentas yra dvejuose konteineriuose: bendrame studentai ir viename iš suskaidytų (vargšiukai arba kietiakai). 

* 2 strategija: Bendro studentų konteinerio (vector ir list) skaidymas (rūšiavimas) panaudojant tik vieną naują konteinerį: "vargšiukai". Tokiu būdu, jei studentas yra vargšiukas, jį turime įkelti į naująjį "vargšiukų" konteinerį ir ištrinti iš bendro studentai konteinerio. Po šio žingsnio studentai konteineryje liks vien tik kietiakai. Atminties atveju tai efektyviau

Naudotas algoritmas: 
Rūšiavimo laikai:

**1 strategija**

|               | Rūšiavimas 'vector'  | Rūšiavimas 'list'   |
| ------------- | -------------        | -------------       |
| 1 000         | 4.36e-05 s           | 0.0002464 s         |
| 10 000        | 0.0010357 s          | 0.0025794 s         |
| 100 000       | 0.0081072 s          | 0.0545146 s         |
| 1 000 000     | 0.102605 s           | 0.345809 s          |
| 10 000 000    | 6.26013 s            | 8.96787 s           |


**2 strategija**

|               | Rūšiavimas 'vector'  | Rūšiavimas 'list'   |
| ------------- | -------------        | -------------       |
| 1 000         | 8.13e-05 s           | 0.0001993 s         |
| 10 000        | 0.0016487 s          | 0.0015196 s         |
| 100 000       | 0.0082672 s          | 0.0315691 s         |
| 1 000 000     | 0.0516942 s          | 0.333509 s          |
| 10 000 000    | 0.58994 s            | 3.46819 s           |

