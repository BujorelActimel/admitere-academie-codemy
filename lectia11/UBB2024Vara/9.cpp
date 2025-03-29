While (p AND (NOT r)) OR (NOT q) execute
    Write (q AND (p OR r))
    p ← NOT p
    r ← q OR p
EndWhile


p = true
q = false
r = true


afiseze: 0 0 .... 0 0

Raspuns: A