# XOR niza
Dat je neki niz prirodnih brojeva. Ako na svaki član tog niza primijenimo operaciju binarni XOR (ekskluzivna disjunkcija) sa nekim prirodnim brojem X dobićemo neki drugi niz prirodnih brojeva.
Recimo da niz glasi 4 2 3 1. Ako je X=6 dobićemo niz 2 4 5 7. 

## Objašnjenje

|Decimalni zapis|4|2|3|1|
|--|--|--|--|--|
|Binarni zapis|100|010|011|001|
|Broj X = 6|110|110|110|110|
|Nakon XOR-a|010|100|101|111|
|Decimalni zapis|2|4|5|7|

Vaš zadatak je da napravite program koji za uneseni niz provjerava da li postoji X takvu da se nakon primjene XOR dobije niz koji je sortiran u rastućem poretku (ali ne strogo rastućem, dakle dozvoljeno je da dva susjedna člana budu jednaka). U prethodnom primjeru za niz 4 2 3 1 postoji takvo X i ono iznosi 6.

Najprije treba unijeti broj članova niza N (ne veći od 100), a zatim unijeti N prirodnih brojeva (nije potrebno provjeravati). Program treba ispisati najmanje X ako postoji, a ako X ne postoji, treba ispisati -1.

## Primjer ulaza i izlaza:
    Unesite N: 4
    4 2 3 1
    X=6

