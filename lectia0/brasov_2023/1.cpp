// 1. Variabilele x, y, z, w și v sunt de tip întreg, iar v memorează 
// inițial valoarea 0. Indicați o secvență echivalentă cu
// secvența de mai jos.
// if (x==y && z==w) v=4; else if(x==y && z!=w) v=6; else v=8;
// a. if (x!=y || z==w) v=8; else if(x==y || z!=w) v=6; else v=4;
// b. if (x==y || z==w) v=4; else if(x==y || z!=w) v=6; else if(x!=y || z!=w) v=8;
// c. if (x==y && z==w) v=4; else if(x==y && z!=w) v=6; else if(x!=y && z!=w) v=8;
// d. if(x!=y) v=8; else if(z==w) v=4; else v=6; 

a)
if (x!=y || z==w) 
    v=8; 
else if(x==y || z!=w) 
    v=6; 
else 
    v=4;

!(x!=y || z==w) && !(x==y || z!=w) -> x==y && z != w && x!=y && z==w FALS (se contrazic)

b)
if (x==y || z==w) 
    v=4; 
else if(x==y || z!=w) 
    v=6; 
else if(x!=y || z!=w) v=8;

x==y || z==, NU PETRU CA PRIMA CONDITIE E DIFERITA

c)
if (x==y && z==w) 
    v=4; 
else if(x==y && z!=w) 
    v=6; 
else if(x!=y && z!=w) v=8;

x != y || z != w && x != y || z == w
(Contra exemplu)

d)
if(x!=y) 
    v=8; 
else if(z==w) 
    v=4; 
else 
    v=6;

!(x != y) && !(z == w) -> x == y && z != w


!(x == y && z == w) && !(x == y && z != w) -> (x != y || z != w) && (x!= y || z == w)

Raspuns: D e echvalenta la toate
if (x==y && z==w) 
    v=4; 
else if(x==y && z!=w) 
    v=6; 
else 
    v=8;

v devine 4 cand x==y si z==w