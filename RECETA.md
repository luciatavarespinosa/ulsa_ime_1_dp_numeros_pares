# Receta: Guardar los números pares

1. Mostrar mensaje de bienvenida
2. totalPares ← 0
3. sumaPares ← 0

4. Pedir al usuario 5 números
5. i ← 0
6. MIENTRAS i < CANTIDAD HACER
       Leer numeros[i]
       i ← i + 1
   FIN MIENTRAS

7. i ← 0
8. MIENTRAS i < CANTIDAD HACER
       SI numeros[i] MOD 2 = 0 ENTONCES
           pares[totalPares] ← numeros[i]
           sumaPares ← sumaPares + numeros[i]
           totalPares ← totalPares + 1
       FIN SI
       i ← i + 1
   FIN MIENTRAS

9. Mostrar "Pares encontrados: " y totalPares

10. SI totalPares = 0 ENTONCES
        Mostrar "No hay numeros pares"
    SINO
        Mostrar "Los pares son: "
        i ← 0
        MIENTRAS i < totalPares HACER
            Mostrar pares[i]
            i ← i + 1
        FIN MIENTRAS
        Mostrar "Suma de los pares: " y sumaPares
    FIN SI