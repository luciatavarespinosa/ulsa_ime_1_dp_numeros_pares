## 1. Descripción del problema (Fase 1)
Mi programa pide 5 números al usuario, revisa cuáles son pares, y muestra cuántos son, cuáles son y su suma.

## 2. Entradas y salidas (Fase 1)

**Entradas:**
1. 5 números enteros que escribe el usuario.

**Salidas:**
1. Cuántos números pares hay.
2. Cuáles son esos números pares.

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- Solo se cuentan/guardan los números pares, los impares se ignoran.
- Siempre deben ser exactamente 5 números.

**Tamaño del arreglo y por qué** (piensa en el peor caso):
Tamaño 5, porque en el peor caso los 5 números podrían ser pares.

**¿El 0 y los negativos son pares? ¿Por qué?**
Sí. El 0 es par porque 0 entre 2 no deja residuo. Los negativos también pueden ser pares, por ejemplo -4.

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
`totalPares` siempre indica cuántos pares se han encontrado hasta ese momento, y el arreglo tiene guardados solo esos pares.

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Pares guardados | Posición de cada par |
|---|---|---|---|
| 1 | 3, 8, 5, 2, 7 | 8, 2 | pares[0]=8, pares[1]=2 |
| 2 | 4, 4, 1, 9, 6 | 4, 4, 6 | pares[0]=4, pares[1]=4, pares[2]=6 |
| 3 | 1, 3, 5, 7, 9 | (ninguno) | no hay pares |

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué apareció al imprimir las 5 posiciones del arreglo? ¿Por qué?**
Salen números raros/basura en las posiciones que no se llenaron, porque el arreglo no empieza en cero automáticamente.

**Experimento B: ¿qué pasó al usar la variable del ciclo como posición del arreglo? ¿Por qué?**
Quedan espacios vacíos en el arreglo, porque esa variable avanza siempre, sin importar si el número era par o no.

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
A usar una variable para contar cuántas veces