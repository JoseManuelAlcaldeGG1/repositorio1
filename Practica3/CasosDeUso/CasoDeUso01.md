# Caso de uso

## Insertar alumno

**ID:** 01

**Breve descripcion:** El usuario introduce un nuevo alumno a la base de datos.

**Actores principales:** Profesor

**Actores secundarios:** Alumnos

**Precondiciones:**
1. Para poder insertar un nuevo alumno, el total de alumnos no debe exceder el numero 149.

**Flujo principal:**
1. El caso de uso empieza cuando el usuario necesita introducir un alumno.
2. Se introducen los campos con un determinado orden:
    1. DNI(Se comprueba el DNI y se comprueba que no este ya en la agenda)
    2. Nombre
    3. Apellido1
    4. Apellido2
    5. Telefono
    6. E-mail corporativo(Se comprueba que no este ya en la agenda)
    7. Direccion postal
    8. Curso más alto matriculado
    9. Equipo del que forma parte
    10. Lider/ No Líder
3. Se muestra por pantalla un mensaje informando del proceso correcto.    

**Postcondiciones:**
1. Los datos se escriben en la agenda.
2. Los únicos campos que se pueden quedar en blanco son equipo y lider.

**Flujos alternativos**
1. Si el DNI no es correcto, se muestra un mensaje de error, y se vuelve a pedir el DNI.
2. Si el DNI o el e-mail se repiten con los de otro alumno, se para el proceso y se muestra un mensaje de error, volviendo al menú de opciones.
3. En el caso de que ya haya 150 alumnos, se mandará un mensaje de error y se volverá al menú de opciones.
