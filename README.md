# Programa para calcular los gastos mensuales
Este programa funcionara para poder calcular los gastos mensuales de una personas, esto se basa principalmente en los problemas que puede llegar a tener la gente a la hora de gestionar los gastos, ya que a veces estos exceden los limites, por lo que este programa se encargara de ordenar todos los gastos dependiendo en que sector fueron si de entretenimiento, transporte, comida y demás para asi poder ver detalladamente de donde vienen todo esos gastos.

# Como usar el programa
Este programa esta diseñado especialmente para poder ordenar todos los gastos que el usuario tenga durante todo el mes y asi poder este mismo irlos guardando y especificando de donde salen. Asi se puede ayudar a encontrar en que sector se pueden rebajar la cantidad de gastos.

Usando un archivo de texto el usuario podra poner cuales son sus gastos base del mes, con la opcion de ir agregando más gastos durante el mes y asi poder sacar un calculo final. Asi mismo, se le mostrara el siguiente menu:
1. Agregar gasto
2. Mostrar gastos ordenados
3. Mostrar total de gastos
4. Salir

# Compilar el programa
- Descargar los Archivos: Asegúrate de tener todos los archivos del programa en un solo repositorio. (es recomendable usar replit)

- Compilar el Programa: Usa el siguiente comando para compilar el archivo main.cpp:
#### g++ main.cpp

- Ejecutar el Programa: Una vez compilado, ejecuta el programa con el siguiente comando:
#### ./a.out

# Avances

## Avance 1
En este primer avance se tuvo que poder formalizar la idea del programa hacia que lo queremos enfocar y que poder resolver con los temas antes vistos en clase, por lo que considero que el poder organizar tus gastos y no solo eso, sino tambien se organicen de mayor a menor y tambien por categorias ayudaria mucho al usuario al entender sus gastos mensuales.

## Avance 2
En este segundo avance se siguio trabajando con este codigo pero ahora se debe agregar una estrutura de datos el cual se adecuado para nuestro programa.

## Avance 3
En este ultimo avance del proyecto se implementa la escritura de archivos para asi tener la posibilidad de tener gastos base que se tengan y asi poder ir agregando mas gastos y asi calcular el total, despues de esto poderlos guardar en el archivo.

# Correciones de avances

## Avance 1
Despues de los comentarios acerca de este primer avance, se corrigieron la siguientes competencias:

- #### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa:

Se realiza un analisis e investigacion mas complejas acerca del algoritmo de ordenamiento utilizado (IntroSort).

- #### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente:

Se realiza una argumentacion mas objetiva y formal, dejando de lado los juicios de valor mostrados.

## Avance 2
Entrega tardia de este avance

# Sub-competencias a evaluar

## SICT0301 Evalúa los componentes

### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa
Esta sub-competencia se cumple gracias que al estar usando el algoritmo de ordenamiento de la libreria <algorithm>, el cual según lo investigado este hace uso del IntroSort, usando el std::sort, el cual es un algoritmo híbrido que combina Quicksort, Heapsort, e Insertion Sort. El algoritmo fue diseñado para ser eficiente tanto en el caso promedio como en el peor de los casos, adaptándose automáticamente al conjunto de datos de entrada.

- Mejor caso: O(n \log n)

En el mejor caso, Invest operará con un tiempo O(n log⁡ n) tiempo. El mejor caso se da cuando el conjunto de datos está prácticamente ordenado, o cuando la forma en que están ordenados favorece a Quicksort.

- Caso promedio: O(n \log n)

En promedio, sorte mantiene un rendimiento de O(n log⁡ n) tiempo con la combinación de Quicksort y Heapsort. Quick sort se utiliza para rangos pequeños en recursión, lo que asegura un rendimiento promedio eficiente.

- Peor caso: O(n \log n)

En casos en los que quicksort puede volverse ineficiente, rápido, o alcanzar O(n2) tiempo, como cuando uno se encuentra con un conjunto de datos que está desbalanceado o casi ordenado, Introsort se autoconmutará a Heapsort ambos garantizan un comportamiento de O(n log ⁡n) tiempo en el peor de los casos.
#

### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usaos en el programa
Esta sub-competencia se cumple mediante el uso de la lista ligada como estructura de datos para manejar los gastos en el programa. La lista ligada es una estructura de datos dinámica que permite la inserción y eliminación eficiente de nodos, lo que se traduce en un manejo efectivo de los gastos mensuales registrados. Se presentara como se utiliza esta lista ligada en el codigo, junto a su analisis de cada funcion:

#### Agregar Gasto (agregarGasto)
- Mejor Caso: O(1)

Por qué: Si la lista está vacía, el nuevo nodo se agrega directamente como la cabeza de la lista, lo que requiere una operación constante.

- Caso Promedio: O(n)

Por qué: En promedio, se debe recorrer aproximadamente la mitad de la lista para encontrar el final donde se añadirá el nuevo nodo.

- Peor Caso: O(n)

Por qué: Se necesita recorrer toda la lista hasta llegar al final para agregar el nuevo nodo, lo que implica un tiempo lineal.

#### Mostrar Gastos (mostrarGastos)
- Mejor Caso: O(1)

Por qué: Si la lista contiene solo un nodo, la operación se reduce a imprimir ese único nodo, lo que es una operación constante.

- Caso Promedio: O(n)

Por qué: Se debe recorrer toda la lista para imprimir todos los gastos, lo que implica una operación lineal en función de la cantidad de nodos.

- Peor Caso: O(n)

Por qué: Siempre es necesario recorrer toda la lista para mostrar todos los nodos, lo que resulta en una complejidad lineal.

#### Calcular Total (calcularTotal)
- Mejor Caso: O(1)

Por qué: Si la lista tiene un solo nodo, simplemente se retorna el monto de ese nodo, lo que es una operación constante.

- Caso Promedio: O(n)

Por qué: Para calcular el total de los montos, se necesita recorrer toda la lista y sumar los valores, resultando en una complejidad lineal.

- Peor Caso: O(n)

Por qué: Al igual que en el caso promedio, se requiere recorrer toda la lista para sumar los montos de todos los nodos.

#### Ordenar Gastos (ordenarGastos)
- Mejor Caso: O(n)

Por qué: Si la lista contiene solo un nodo, no se requiere ninguna operación de ordenamiento, por lo que el tiempo es lineal en función de la cantidad de nodos.

- Caso Promedio: O(n log n)

Por qué: La operación de ordenamiento mediante std::sort tiene una complejidad promedio de O(n log n). Esto incluye el tiempo necesario para contar los nodos y reconstruir la lista.

- Peor Caso: O(n log n)

Por qué: Al igual que en el caso promedio, la complejidad del algoritmo de ordenamiento se mantiene en O(n log n), sin importar la disposición inicial de los nodos.

### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa
Esta sub-competencia se cumple mediante los demás componentes del programa y en este caso esta el de la escritura de archivos como ultimo componente del programa sin contar las funciones de la estructura de datos, el analisis de la escritura de archivos es la siguiente:

#### Cargar Gastos Base (cargarGastosBase)
- Mejor Caso: O(1)

Por qué: Cuando el archivo de entrada es vacío o contiene solo una línea, ya que la función lee y procesa solo una línea, lo que se traduce en una operación constante.

- Caso Promedio: O(n)

Por qué: Si el archivo tiene varias líneas, se debe leer cada línea y procesarla, lo que implica una operación lineal en función del número de líneas.

- Peor Caso: O(n)

Por qué: Incluso en el peor de los casos, la función debe recorrer todas las líneas del archivo para cargar los gastos en la lista, lo que también resulta en una operación lineal en función del número de líneas.

## SICT0302 Toma decisiones

### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente
Esta sub-competencia se cumple gracias a que después de evaluar todos los algoritmos que se podian llegar a utilizar, el IntroSort presenta lo siguiente:
- Nivel de eficacia: A std::sort se le conoce como un algoritmo con la complejidad máximo de O (n log n); es decir, será ideal para organizar eficazmente los gastos y hacerlo rápidamente.
- Facilidad de implementacion: std::sort es parte de la biblioteca estándar que garantiza una reducción del tiempo de desarrollo y mínima probabilidad de errores.
- Adaptabilidad: Como se basa en Introsort, el std::sort ajustará su estrategia de organizar de manera automática, en función de las características de los datos. Por lo tanto, no es necesario realizar ninguna operación adicional.

### Selecciona una estructura de datos adecuada al problema y la usa correctamente
Esta sub-competencia se cumple gracias a que después de evaludar todas las estructuras de datos lineales y no lineales, llegue a una lista ligada gracias a lo siguiente:
- Dinámica: otra ventaja de la lista ligada es que puede agregar y eliminar nodos en ella sin necesidad de redimensionar; un vector haría que cada inserción o eliminación sea una operación de tiempo lineal. Esta propiedad de datos es útil si el tamaño de la información a almacenar es dinámico y cambiante. Por ejemplo, los gastos al mes rara vez son constantes.
- Eficiente en la inserción: si bien algunas operaciones de inserción pueden ser O(n) si la lista ligada no se maneja correctamente, las inserciones en la parte superior o inferior de la lista serían O(1). Por lo tanto, los datos tienen un rendimiento mejor que un vector si hay varias inserciones, como en un programa para registrar gastos.
- Uso de memoria: un vector requeriría una cantidad fija de memoria; en cambio, las listas ligadas utilizan solo tanto como sea necesario para los nodos actuales. La ventaja de esta propiedad de datos es si la cantidad de gastos que va a almacenar en el programa no es siempre predecible.

## SICT0303 Implementa acciones científicas

### Implementa mecanismos para consultar información de las estructuras correctos
Esta sub-competencia se cumple gracias a los siguientes métodos que exiten en el programa para poder consultar la información de las estructura de datos usados, como lo son los siguientes:

- Método: mostrarGastos()

Descripción: Este método permite al usuario visualizar todos los gastos registrados en la lista ligada. Al recorrer cada nodo de la lista, el método imprime la categoría del gasto y su monto asociado. Esta funcionalidad es esencial para que el usuario tenga una visión clara de sus gastos y pueda hacer un seguimiento efectivo de su presupuesto. Al mostrar la información de manera estructurada, el usuario puede identificar rápidamente en qué áreas está gastando más y ajustar sus hábitos de consumo en consecuencia.

- Método: calcularTotal()

Descripción: Esta función calcula el total acumulado de todos los gastos en la lista. Al recorrer la lista ligada y sumar los montos de cada nodo, se obtiene un total que permite al usuario conocer cuánto ha gastado en total hasta el momento. Este mecanismo es vital para la gestión financiera personal, ya que proporciona al usuario una cifra clara que puede utilizar para evaluar su situación financiera y tomar decisiones informadas sobre su presupuesto.

### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta
Esta sub-competencia se cumple gracias al siguiente método que exite en el programa para poder cargar datos a traves de la lectura de archivos, como lo es el siguiente método:

- Método: cargarGastosBase()

Descripción: Este método permite cargar automáticamente los gastos desde un archivo de texto a la lista ligada. Cada línea del archivo contiene una categoría y un monto, facilitando la incorporación de datos sin necesidad de introducirlos manualmente. Este mecanismo mejora la eficiencia al permitir que el usuario cargue grandes volúmenes de datos de forma rápida y conveniente. Además, al utilizar archivos, se puede mantener un historial de gastos que el usuario puede actualizar fácilmente y revisar en cualquier momento. Esto fomenta una gestión más organizada y estructurada de las finanzas personales.

### Implementa mecanismos de escritura de archivos para guardar los datos de las estructuras de manera correcta


