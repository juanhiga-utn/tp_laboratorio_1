/**
 * \brief Funcion para pedir un numero del 1 al 5
 * \param int opcion es la opcion
 * \param char mensaje[] es el menu de opciones
 * \param char error[] es el mensaje de error
 * \param int numMin es el numero minimo
 * \param int numMax es el numero maximo
 * \return int, retorna la opcion elegida
 */
int getOpcion(int* opcion, char mensaje[], char error[], int numMin, int numMax);

/**
 * \brief Funcion para pedir un operando
 * \param int a es el primer operando
 * \param int val1 es la validacion del primer operando
 * \param char mensaje[] es el mensaje
 * \param char error[] es el mensaje de error
 * \param int numMax es el numero maximo
 * \param int numMin es el numero minimo
 * \return int, retorna la opcion elegida
 */
int getNum1(int* a, int* val1, char mensaje[],char error[],int numMin, int numMax);

/**
 * \brief Funcion para pedir un operando
 * \param int a es el primer operando
 * \param int val2 es la validacion del segundo operando
 * \param char mensaje[] es el mensaje
 * \param char error[] es el mensaje de error
 * \param int numMax es el numero maximo
 * \param int numMin es el numero minimo
 * \return int, retorna la opcion elegida
 */
int getNum2(int* b, int* val2, char mensaje[],char error[],int numMin, int numMax);

/**
 * \brief Funcion para la suma
 * \param int a es el primer operando
 * \param int b es el segundo operando
 * \return int, retorna la respuesta
 */
int suma(int a,int b);

/**
 * \brief Funcion para la resta
 * \param int a es el primer operando
 * \param int b es el segundo operando
 * \return int, retorna la respuesta
 */
int resta(int a,int b);

/**
 * \brief Funcion para la division
 * \param int a es el primer operando
 * \param int b es el segundo operando
 * \return int, retorna la respuesta
 */
int divir(int a,int b);

/**
 * \brief Funcion para la multiplicacion
 * \param int a es el primer operando
 * \param int b es el segundo operando
 * \return int, retorna la respuesta
 */
int multiplicar(int a,int b);

/**
 * \brief Funcion para el factorial
 * \param int a es el primer operando
 * \param int b es el segundo operando
 * \return int, retorna la respuesta
 */
int factorial(int fact,char errorFactorial[]);