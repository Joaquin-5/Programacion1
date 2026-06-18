Algoritmo controlar_acceso_boliche
	Definir capMaxima, cantPersonas, diaEvento, mesEvento, anioEvento, diaNacimiento, mesNacimiento, anioNacimiento Como Entero;
	diaNacimiento = -1;
	cantPersonas = 0;
	Escribir 'Ingrese la capacidad maxima del establecimiento';
	Leer capMaxima;
	Escribir 'Ingrese el día del evento, ej: 8 o 31';
	Leer diaEvento;
	Escribir 'Ingrese el mes del evento, ej: 5 o 12';
	Leer mesEvento;
	Escribir 'Ingrese el año del evento, ej: 2026';
	Leer anioEvento;
	Mientras (diaNacimiento <> 0) Y (cantPersonas <= capMaxima) Hacer
		Escribir 'Ingrese el día de nacimiento de la persona, ej: 8 o 31';
		Leer diaNacimiento;
		Escribir 'Ingrese el mes de nacimiento de la persona, ej: 5 o 12';
		Leer mesNacimiento;
		Escribir 'Ingrese el año de nacimiento de la persona, ej: 2003';
		Leer anioNacimiento;
			Si (anioEvento - anioNacimiento) > 18 Entonces
				cantPersonas <- cantPersonas + 1;
			SiNo
				Si (anioEvento - anioNacimiento) == 18 Entonces
					Si (mesNacimiento < mesEvento) Entonces
						cantPersonas <- cantPersonas + 1;
					SiNo
						si mesNacimiento == mesEvento Entonces
							Si diaNacimiento <= diaEvento Entonces
								cantPersonas <- cantPersonas + 1;
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
	FinMientras
FinAlgoritmo
