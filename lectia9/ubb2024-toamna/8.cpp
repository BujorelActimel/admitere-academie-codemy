Algorithm prelucrare(n, m, x):
    k ← 1; i ← k
    While i ≤ n execute
        j ← k + 1
        While j ≤ m execute
            If k MOD 2 = 0 then
                x[i][j] ← k * k
            EndIf
            Write x[i][j], " "
            k ← k + 1; j ← j + 1
        EndWhile
        i ← i + 1
    EndWhile
EndAlgorithm

n = 3
m = 8

k = 8
i = 1
j = 9

0 4 0 16 0 36 0 

Raspuns: BC