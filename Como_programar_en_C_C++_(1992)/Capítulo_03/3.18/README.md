# 3.18 

Desarrolle un programa en C que determine si un cliente de una tienda departamental ha excedido el límite de crédito en una cuenta de cargo. Para cada uno de los clientes, estan disponibles los siguientes hechos:
  1. Número de la cuenta.

  2. Saldo al principio del mes.

  3. Total de todos los elementos cargados por el cliente este mes.

  4. Total de todos los créditos aplicados este mes a la cuenta de este cliente.
     
  5. Límite permitido de crédito.

El programa deberá introducir cada uno de estos hechos, calcular el nuevo saldo (= saldo inicial + cargos - créditos), y determinar si el nuevo saldo excede el límite de crédito del cliente. Para aquellos clientes cuyo límite de crédito esté excedido, el programa deberá desplegar el número de cuenta del cliente, el límite de crédito, el nuevo saldo y el mensaje "límite de crédito excedido".

```c
	Enter account number (-1 to end): 100
	Enter beginning balance: 5394.78
	Enter total charges: 1000.00
	Enter total credits: 500.00
	Enter credit limit: 5500.00
	Account:      100
	Credit limit: 5500.00
	Balance:      5894.78 
	Credit Limit Exceeded.
	
	Enter account number (-1 to end): 200
	Enter beginning balance: 1000.00
	Enter total charges: 123.25
	Enter total credits: 321.00
	Enter credit limit: 1500.00
	
	Enter account number (-1 to end): 300
	Enter beginning balance: 500.00
	Enter total charges: 274.73
	Enter total credits: 100.00
	Enter credit limit: 800.00
	
	Enter account number (-1 to end): -1
```

