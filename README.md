# v1.0 

Optimizuoja studentų rūšiavimo į dvi kategorijas ("vargšiukų" ir "kietiakų") realizaciją: t.y. visiems trims konteinerių tipams (vector ir list) išmatuoja programos veikimo spartą priklausomai nuo studentų dalijimo į dvi kategorijas strategijos:

* 1 strategija: Bendro studentai konteinerio (vector ir list tipų) skaidymas (rūšiavimas) į du naujus to paties tipo konteinerius: "vargšiukų" ir "kietiakų". Tokiu būdu tas pats studentas yra dvejuose konteineriuose: bendrame studentai ir viename iš suskaidytų (vargšiukai arba kietiakai). 

* 2 strategija: Bendro studentų konteinerio (vector ir list) skaidymas (rūšiavimas) panaudojant tik vieną naują konteinerį: "vargšiukai". Tokiu būdu, jei studentas yra vargšiukas, jį turime įkelti į naująjį "vargšiukų" konteinerį ir ištrinti iš bendro studentai konteinerio. Po šio žingsnio studentai konteineryje liks vien tik kietiakai. Atminties atveju tai efektyviau

Naudotas algoritmas: 
Rūšiavimo laikai:

**1 strategija**

|               | Rūšiavimas 'vector'  | Rūšiavimas 'list'   |
| ------------- | -------------        | -------------       |
| 1 000         | 8.76e-05 s           | 0.0001556 s         |
| 10 000        | 0.00084 s          | 0.0024 s         |
| 100 000       | 0.0144 s          | 0.0229 s         |
| 1 000 000     | 0.08745 s           | 0.27381 s          |



**2 strategija**

|               | Rūšiavimas 'vector'  | Rūšiavimas 'list'   |
| ------------- | -------------        | -------------       |
| 1 000         | 5.47e-05 s           | 6.6998e-05 s        |
| 10 000        | 0.0006 s          | 0.0008 s         |
| 100 000       | 0.00492 s          | 0.02693 s         |
| 1 000 000     | 0.09452 s          | 0.611 s          |

