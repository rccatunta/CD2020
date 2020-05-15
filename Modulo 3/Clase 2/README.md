# Clase 2 
## Estructuras de Datos 
### ¿Qué es una estructura de datos?
- Es una forma de organizar un conjunto de datos.
- Una estructura de datos nos facilita la manipulación de datos.
- Cada estructura tiene sus propias ventajas y desventajas
- Elegir una estructura adecuadamente puede ser un parte crucial de la resolucion de un problema.

### Clasificación de las Estructuras de Datos
#### Estructuras de Datos Estáticas
+ Se caracterizan por no poder cambiar su tamaño a lo largo del programa.
+ El tamaño se define una vez y este no puede cambiar.
+ Los ejemplos mas usuales son:
    + Arreglos
    + Matrices

#### Estructuras de Datos Dinámicas
+ Se caracterizan por poder cambiar su tamaño a lo largo del programa.
+ Son comunmente implementadas mediante librerias STL.
+ Los ejemplos mas usuales son:
    + Vectores
    + Mapas
    + Conjuntos
    + Colas
    + Pilas
__________

### Problema de Motivación
El profesor Angel ha decidido medir las estaturas de sus estudiantes, el tiene *N* estudiantes en su curso. Al profesor Angel le gusta mucho la estadística y quiere saber cuantos de sus estudiantes tienen alturas por encima del promedio de todos los estudiantes. <br>
**ENTRADA** <br>
La primera linea de entrada contiene *N*  que representa el número de estudiantes que tiene el profesor Angel. Le siguen *N* números reales positivos que representan las estaturas de los estudiantes en metros. <br>
**SALIDA** <br>
Debes imprimir un número entero que representa la cantidad de alumnos que tienen estaturas por encima del promedio.<br>
**EJEMPLO**<br>

Entrada  | Salida
------------- | -------------
5 <br> 1.74 1.84 1.69 1.70 1.54  | 2
7 <br> 1.65 1.74 1.89 1.91 1.57 1.80 1.68  | 3

__________
Como habrás notado en el ejercicio anterior se requiere una nueva estructura de datos que sea capaz de guardar varios datos. Para eso es lo que se usan los **Arreglos**.