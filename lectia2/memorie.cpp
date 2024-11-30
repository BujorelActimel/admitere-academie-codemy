#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char sir[] = "un text";
    return 0;
}

adresa sir |
           u n _ t e x t 0


sir[0] == sir + 0 == 0xAb01 + 0

sir[1] == sir + 1

char s

sir = "un text";
sir_nou = sir + 1

sir_nout = "n text"


// strlen() - lungimea sirului

strlen("text") = 4
strlen("Ma numesc Victor") = 16

// strcpy() - copiaza in primul sir al doilea sir
sir1 = "Victor"
sir2 = "Radu"

strcpy(sir1, sir2);
sir1 = "Radu"


// strncpy() - la fel ca strcpy, dar ii spui cate carctere sa copieze
sir1 = "Victor"
sir2 = "Radu"

strncpy(sir1, sir2, 3);

sir1 = "Radtor"

// strcat() - concateneaza cele 2 siruri
sir1 = "Victor"
sir2 = "Radu"

strcat(sir1, " ") = "Victor "
strcat(sir1, sir2) = "Victor Radu"

strcat(sir1, strcat(" ", sir2));

// strchr() - iti da adresa la care gaseste caracterul

strchr("Radu", "a") = adresa lui "Radu" + 1


// strstr() - cauta prima aparitite al lui sir2 in sir1

strchr("mama", "ma") = 0


// strcmp()

strcmp("mama", "mama") = 0

"mama" < "tata"
"mama" < "mata"
"mama" > "Mamt"


strcmp("mama", "mata") = -n

strcmp("")

nume = ""
prenume = ""

cout << nume << ' ' << prenume << "este jmeker";

printf("%s %s este jmeker", nume, prenume);