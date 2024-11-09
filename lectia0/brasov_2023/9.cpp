9. Pentru declararea de mai jos indicaţi care dintre instrucţiunile de atribuire nu este corectă:
struct candidat {
    char nume[26];
    struct {
        int nota1,nota2,nota3;
    } punctaj;
}s1,s2;

a. s1.punctaj.nota1=s2.punctaj.nota2+1; e corecta (deci nu e buna)

b. s1=s2+1; // nu e corect (deci e buna)

c. s1=s2; // se poate

d. s1.nume[2]='s'; // se poate

// int, float, bool

// struct Animal {
//     char[20] nume;
//     int varsta;
// }

// int main() {
//     Animal a;
//     a.nume = "marcel";
//     a.varsta = 10;
// }

Raspuns final: b)