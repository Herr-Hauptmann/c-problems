# Pogodi broj
Na tutorijalu smo radili "igru pogađanja brojeva" kod koje je računar zamislio broj, a vi ste pogađali koji je to broj. Sada su uloge zamijenjene! Trebamo napraviti igru kod koje ste vi zamislili broj između 0 i 100 (ne uključujući ta dva), a računar treba pogoditi koji je to broj!

Računar za pogađanje broja treba koristiti metodu sredine intervala. Na početku interval je (0,100) pa računar treba ponuditi broj 50. Vi odgovarate sa "jednako", "manje" ili "veće". Ako ste rekli "jednako", igra je gotova. Ako kažete "manje", interval postaje (0,50) pa će računar ponuditi broj na sredini tog intervala a to je 25. Ako sada kažete "veće", interval je (25,50), pa će računar ponuditi broj 37 (trebao bi biti 37,5, ali pošto su u pitanju cijeli brojevi, zaokružujemo broj na manji cijeli broj) itd. dok broj ne bude jednak. Da se ne bismo gnjavili sa stringovima, korisnik unosi jedno slovo: M za manje, V za veće ili J za jednako.

Za realizaciju ovog programa obavezno koristiti funkciju daj_sljedeci_broj koja prima jedan parametar tipa int. Ovaj parametar ima vrijednost -1 ako je korisnik odgovorio "manje", a +1 ako je odgovorio "veće", dok 0 vraća sredinu intervala ali ne mijenja interval. Funkcija "pamti" koji je broj prošli put vraćen i na osnovu toga prilagođava interval. U rješavanju zadatka nije dozvoljeno koristiti globalne promjenljive.

## Primjer ulaza i izlaza:

    Zamislite neki broj...
    Da li je taj broj 50? M
    Da li je taj broj 25? K
    Pogresan unos, probajte ponovo.
    Da li je taj broj 25? V
    Da li je taj broj 37? V
    Da li je taj broj 43? J
    Pogodio sam!

