1150. Page Numbers

John Smith has decided to number the pages in his notebook from 1 to N. Please, figure out the number of zeros, ones, twos, …, nines he might need.

Input
One number N (1 ≤ N < 109).


Output
Output 10 lines. The first line should contain the number of zeros needed, the second line should contain the number of ones needed, …, the tenth line should contain the number of nines needed.

Para este problema el método más sencillo de implementar es obviamente el brute-force, para cada número ir contando cuáles digitos ocupa e irlos sumando a la suma total de cada dígito. Intenté pensar alguna forma de hacerlo de otra manera y aunque detecté algunos patrones para ir verificando cuantos se necesitarán sin ir de uno en uno, al final no pude implementar una versión funcional que fuera más eficiente.
