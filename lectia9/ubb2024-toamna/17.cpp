A
f(12, 15) -> "start: ", *, *, *
f(14, 16) -> "start: ", *, *
f(16, 17) -> "start: ", *
f(18, 18) -> "start: "

f(12, 15) = "start: * * *"

f(8, 12) -> f(10, 13), *
f(10, 13) -> f(12, 14), *
f(12, 14) -> f(14, 15), *
f(14, 15) -> f(16, 16), *
f(16, 16) -> "start: "


B
f(15, 12) -> f(14, 13), #
f(14, 13) -> f(13, 14), #
f(13, 14) -> f(15, 15), *
f(15, 15) -> "start"


f(12, 8) -> f(11, 9), #
f(11, 9) -> (10, 10), # 
f(10, 10) -> "start"

Raspuns: ACD
