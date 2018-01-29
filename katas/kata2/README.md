Strong Password Checker

A password is considered strong if below conditions are all met:

It has at least 6 characters and at most 20 characters.
It must contain at least one lowercase letter, at least one uppercase letter, and at least one digit.

It must NOT contain three repeating characters in a row ("...aaa..." is weak, but "...aa...a..." is strong, assuming other conditions are met).
Write a function strongPasswordChecker(s), that takes a string s as input, and return the MINIMUM change required to make s a strong password. If s is already strong, return 0.

Insertion, deletion or replace of any one character are all considered as one change.

Para comenzar, se me ocurrió verificar los primeros aspectos, el tamaño de la contraseña. Dependiendo del tamaño del string, se utiliza una variable para ir agregando el número de cambios que se necesitarán en caso de ocuparse.

Para verificar que hay por lo menos una letra minúscula, una mayúscula y un número se me ocurrió utilizar flags que inician "prendidas" con el valor en 1, después se itera por el string buscando cada uno de estos elementos, si se encuentra por lo menos uno se "apaga" el flag, cambiando el valor a 0. Al finalizar la iteración se suman estos flags a la variable de cambios, cada una de las flags prendidas sumarán un cambio necesario a la variable.


Para checar lo último, los caracteres repetidos, se me ocurre utilizar un contador de 'repetidos', además de variables que guarden caracteres, el anterior y el actual para poder compararlos.
