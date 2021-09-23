## Parallel max
Potrebno je napraviti funkciju **parallel_max** koja pronalazi najveći član u nizu realnih brojeva (tipa double) na način koji je pogodan za paralelno izvršavanje (no pošto nismo radili paralelno programiranje, taj dio nećemo uraditi).

Funkcija parallel_max radi na sljedeći način: funkcija prima dva pokazivača, na prvi član niza i iza posljednjeg . Ovaj pokazivač iza posljednjeg se ne smije dereferencirati. Ako pokazivači pokazuju na dva susjedna člana niza, vraća se vrijednost na adresi prvog pokazivača. U suprotnom funkcija se poziva od prvog člana do člana koji se nalazi u sredini, te od tog srednjeg do kraja, od ove dvije vrijednosti vraća se veća.

**Napomena**: U funkciji je *strogo zabranjeno* koristiti indeksiranje (uglaste zagrade) ili njegovu simulaciju tipa *(p+i). Funkcija *mora* raditi kako je opisano u zadatku u suprotnom zadatak dobija 0 bodova bez obzira na broj testova koji prolaze. 

**Pojašnjenje**: U funkciji (ili pomoćnim funkcijama koje se pozivaju iz nje) ne smije se nalaziti petlja - for, while niti do-while.
