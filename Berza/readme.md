Robe (eng. commodities) kojima se najviše trguje na berzi su zlato, srebro i nafta. Trenutne približne cijene ovih roba su: zlato $1200 po unci, srebro $15 po unci i nafta $70 po barelu. Svakog radnog dana cijena svake od ovih roba raste ili pada za određeni procenat. Npr. ako je cijena bila $1000 i porasla je za 0.1%, ona sada iznosi $1001. Procenat porasta (ili pada) cijene se ne može drastično promijeniti: u našoj igri ovaj procenat se svaki dan može povećati ili smanjiti za 0.1. Koristite funkciju rand() koju smo radili na tutorijalu tako da budu podjednake šanse da će procenat porasti ili pasti za 0.1.

Na kraju sedmice imate priliku da trgujete ovim robama. Igru počinjete po isteku prve sedmice sa $100000 u kešu. Možete kupiti ili prodati određenu robu po trenutnoj cijeni. Naravno, ne možete kupiti više robe nego što imate novca, niti prodati više nego što imate. Kada završite trgovinu možete preći na sljedeću sedmicu ili prekinuti igru.

Svake sedmice treba vam se ispisati koliko imate zlata, srebra i nafte (te vrijednost ove robe po trenutnim cijenama) i koliko imate novca u gotovini. U sljedećem redu treba ispisati ukupno koliko imate vrijednosti (zbir četiri iznosa iz prethodnog reda), a u zagradi razliku u odnosu na početno stanje od $100.000 (koliko ste zaradili tj. izgubili novca).

Primjer ulaza i izlaza je dat ispod. Svi novčani iznosi se ispisuju na dvije decimale, osim procenta porasta (pada) iskazanog u zagradi koji se uvijek mijenja za 0.1, tako da uvijek ima jednu decimalu, te se treba prikazati predznak + kako bi se jasno označilo da li je cijena porasla ili pala, a količinu roba koje imate treba ispisivati koristeći format %g.

**Napomena:** Za vrijeme isprobavanja možete staviti srand(time(NULL)); kako ste radili na tutorijalu 4, ali prilikom slanja zadaće stavite **srand(0)** jer će se na taj način uvijek pojavljivati isti brojevi kao na našim testovima.

```
PON: Zlato $1201.20 (+0.1) Srebro $14.98 (-0.1) Nafta $70.07 (+0.1)
UTO: Zlato $1203.60 (+0.2) Srebro $14.98 (+0.0) Nafta $70.07 (+0.0)
SRI: Zlato $1204.81 (+0.1) Srebro $15.00 (+0.1) Nafta $70.00 (-0.1)
CET: Zlato $1207.22 (+0.2) Srebro $15.00 (+0.0) Nafta $70.00 (+0.0)
PET: Zlato $1208.42 (+0.1) Srebro $15.01 (+0.1) Nafta $70.07 (+0.1)
Imate:
Zlata: 0 ($0.00) Srebra: 0 ($0.00) Nafte: 0 ($0.00) Novca: $100000.00
UKUPNO: $100000.00 ($+0.00)
Unesite izbor (1 - Kupi, 2 - Prodaj, 3 - Sljedeca sedmica, 0 - Kraj
igre): 6
Pogresan izbor!
Imate:
Zlata: 0 ($0.00) Srebra: 0 ($0.00) Nafte: 0 ($0.00) Novca: $100000.00
UKUPNO: $100000.00 ($+0.00)
Unesite izbor (1 - Kupi, 2 - Prodaj, 3 - Sljedeca sedmica, 0 - Kraj
igre): 1
Sta kupujete (1 - Zlato, 2 - Srebro, 3 - Naftu): 1
Koliko? 82
Imate:
Zlata: 82 ($99090.67) Srebra: 0 ($0.00) Nafte: 0 ($0.00) Novca: $909.33
UKUPNO: $100000.00 ($+0.00)
Unesite izbor (1 - Kupi, 2 - Prodaj, 3 - Sljedeca sedmica, 0 - Kraj
igre): 3
PON: Zlato $1210.84 (+0.2) Srebro $15.05 (+0.2) Nafta $70.21 (+0.2)
UTO: Zlato $1212.05 (+0.1) Srebro $15.09 (+0.3) Nafta $70.28 (+0.1)
SRI: Zlato $1212.05 (+0.0) Srebro $15.12 (+0.2) Nafta $70.42 (+0.2)
CET: Zlato $1210.84 (-0.1) Srebro $15.14 (+0.1) Nafta $70.49 (+0.1)
PET: Zlato $1208.42 (-0.2) Srebro $15.17 (+0.2) Nafta $70.49 (+0.0)
Imate:
Zlata: 82 ($99090.18) Srebra: 0 ($0.00) Nafte: 0 ($0.00) Novca: $909.33
UKUPNO: $99999.50 ($-0.50)
Unesite izbor (1 - Kupi, 2 - Prodaj, 3 - Sljedeca sedmica, 0 - Kraj
igre): 1
Sta kupujete (1 - Zlato, 2 - Srebro, 3 - Naftu): 2
Koliko? 50
Imate:
Zlata: 82 ($99090.18) Srebra: 50 ($758.29) Nafte: 0 ($0.00) Novca:
$151.04
UKUPNO: $99999.50 ($-0.50)
```