a = 123
b = 861
|
v
a = 861
b = 123

a *= 1000       -> a = 123000
a += b          -> a = 123861
b = (a-b)/1000  -> b = 123000/1000 -> 123
a -= b * 1000   -> a = 123861 - 123000 -> 861

raspuns: B