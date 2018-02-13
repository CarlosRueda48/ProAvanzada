#Kata 3: 657. Judge Route Circle

Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L(Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

'Example 1:

Input: "UD"  Output: true  ''


'Example 2:

Input: "LL"  Output: false'


Para este problema se me ocurrió una solución sencilla, a partir de dos variables, una para movimientos verticales y otra para horizontales se podía
verificar fácilmente si el Robot regresa al mismo lugar. Para cada movimiento hacia arriba se le sumaba 1 a 'vertical', si se movía hacia abajo se le restaba 1,
lo mismo para horizontal, hacia la derecha +1, hacia la izquierda -1. Si al final las dos variables eran iguales a 0, se puede decir que el Robot regresó a su
posición original. Implementación lista en C en judgeRouteCircle.c.
