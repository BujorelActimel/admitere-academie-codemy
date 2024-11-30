int i = 0, c = 23, d = 51;
d = i || c;
i = d && c;
c = !(d && i);
printf("%d", c); 


d = False || True == True == 1

i = 1 && 23 == True && True == True == 1

c = not (1 && 1) == not (True && True) == not True = False = 0

Raspuns: b) Corect