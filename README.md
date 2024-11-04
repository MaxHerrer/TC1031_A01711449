# Programa para calcular los gastos mensuales
Este programa funcionara para poder calcular los gastos mensuales de una personas, esto se basa principalmente en los problemas que puede llegar a tener la gente a la hora de gestionar los gastos, ya que a veces estos exceden los limites, por lo que este programa se encargara de ordenar todos los gastos dependiendo en que sector fueron si de entretenimiento, transporte, comida y demás para asi poder ver detalladamente de donde vienen todo esos gastos.

# Como usar el programa
Este programa esta diseñado especialmente para poder ordenar todos los gastos que el usuario tenga durante todo el mes y asi poder este mismo irlos guardando y especificando de donde salen. Asi se puede ayudar a encontrar en que sector se pueden rebajar la cantidad de gastos.

Usando un archivo de texto el usuario podra poner cuales son sus gastos base del mes, con la opcion de ir agregando más gastos durante el mes y asi poder sacar un calculo final. Asi mismo, se le mostrara el siguiente menu:
1. Agregar gasto
2. Mostrar gastos ordenados
3. Mostrar total de gastos
4. Salir

# Avances

## Avance 1
En este primer avance se tuvo que poder formalizar la idea del programa hacia que lo queremos enfocar y que poder resolver con los temas antes vistos en clase, por lo que considero que el poder organizar tus gastos y no solo eso, sino tambien se organicen de mayor a menor y tambien por categorias ayudaria mucho al usuario al entender sus gastos mensuales.

# Sub-competencias a evaluar

## SICT0301 Evalúa los componentes

### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa
En este avance esta sub-competencia se cumple gracias que al estar usando el algoritmo de ordenamiento de la libreria <algorithm>, el cual según lo investigado este hace uso del Introsort, usando el std::sort, el cual es un algoritmo híbrido que combina Quicksort, Heapsort, e Insertion Sort. El algoritmo fue diseñado para ser eficiente tanto en el caso promedio como en el peor de los casos, adaptándose automáticamente al conjunto de datos de entrada.

- Mejor caso: O(n \log n)

En el mejor caso, Invest operará con un tiempo O(n log⁡ n) tiempo. El mejor caso se da cuando el conjunto de datos está prácticamente ordenado, o cuando la forma en que están ordenados favorece a Quicksort.

- Caso promedio: O(n \log n)

En promedio, sorte mantiene un rendimiento de O(n log⁡ n) tiempo con la combinación de Quicksort y Heapsort. Quick sort se utiliza para rangos pequeños en recursión, lo que asegura un rendimiento promedio eficiente.

- Peor caso: O(n \log n)

En casos en los que quicksort puede volverse ineficiente, rápido, o alcanzar O(n2) tiempo, como cuando uno se encuentra con un conjunto de datos que está desbalanceado o casi ordenado, Introsort se autoconmutará a Heapsort ambos garantizan un comportamiento de O(n log ⁡n) tiempo en el peor de los casos.

Si los datos de entrada están en un vector o en una lista dinámica, como una lista sencillamente enlazada, std::sort requiere acceso aleatorio para ser eficiente. std::sort solo es aplicable a estructuras con acceso aleatorio, como std::vector. El ordenamiento tendrá una complejidad de O(n log n) siempre que la estructura de datos sea compatible con un iterador de acceso aleatorio, como en el caso de un vector.
#

### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usaos en el programa

### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa

## SICT0302 Toma decisiones

### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente
En este avance esta sub-competencia se cumple gracias a que después de evaluar todos los algoritmos que se podian llegar a utilizar, el IntroSort presenta lo siguiente:
- Nivel de eficacia: A std::sort se le conoce como un algoritmo con la complejidad máximo de O (n log n); es decir, será ideal para organizar eficazmente los gastos y hacerlo rápidamente.
- Facilidad de implementacion: std::sort es parte de la biblioteca estándar que garantiza una reducción del tiempo de desarrollo y mínima probabilidad de errores.
- Adaptabilidad: Como se basa en Introsort, el std::sort ajustará su estrategia de organizar de manera automática, en función de las características de los datos. Por lo tanto, no es necesario realizar ninguna operación adicional.

### Selecciona una estructura de datos adecuada al problema y la usa correctamente

## SICT0303 Implementa acciones científicas

### Implementa mecanismos para consultar información de las estructuras correctos

### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta

### Implementa mecanismos de escritura de archivos para guardar los datos de las estructuras de manera correcta
