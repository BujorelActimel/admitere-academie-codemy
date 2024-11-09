strcpy(s,"planor"+3); // -> s = "nor"
                                 012
// "planor"

// addresa lui planor: 0x173213+3

cout<<strchr(s,'o')-s<<' '; // -> afiseaza 1

// 0x173216+1 - 0x173216 = 1

strncat(s,"platou",4);

// s = "norplat"

s[4]=0; // s = "norp0at" -> s = "norp"

for(int i=0;i<4;i++) {
    if(i%2) 
        s[i]=s[0]+4*(2*i/3-1);
    else 
        s[i]=s[0]+i-1;
}

// i = 0
s[0] = n+0-1 (din 'n' se face 'm') // "norp" -> "morp"
s[1] = "i"; // morp -> mirp
s[2] = "m" + 1 -> n // mirp -> minp
s[3] = "m"+4 // minp -> minq

// abcdefghijklmnopqr

cout<<s; // minq

Raspuns: a. 1 minq 

