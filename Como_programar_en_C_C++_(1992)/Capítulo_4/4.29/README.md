# 4.29

(Leyes de Morgan). En este capítulo, hemos analizado los operadores lógicos &&, ||, !. Las leyes de Morgan a veces pueden hacer que sea más conveniente para nosotros expresar una expresión lógica. Estas leyes dicen que la expresión !(condición 1 && condición 2) es lógicamente equivalente a la expresión (!condición 1 || !condición 2). También, la expresión !(condición 1 || condición 2) es lógicamente equivalente a la expresión (!condición 1 && !condición 2). Utilice las leyes De Morgan para escribir expresiones equivalentes para cada uno de los siguientes, y a continuación escriba un programa para mostrar que tanto la expresión original como la nueva, en cada caso, son equivalente:
		a) !(x < 5) && !(y >= 7)
		b) !(a == b) || !(g != 5)
		c) !((x <= 8) && (y > 4))
		d) !((i > 4) || (j <= 6))
