# Valores y Operaciones de Tipos de Datos

## Información del Estudiante
- **Apellido:** Imeroni
- **Nombre:** Francisco
- **Legajo:** 209.030-2
- **Curso:** K1053
- **Año de cursada:** 2026

## Compilador Seleccionado
- **Compilador**: GCC 13.3.0
- **Estándar**: C++23

### Modelo IPO
| Entrada | Proceso | Salida |
| :--- | :--- | :--- |
| Literales (hardcoded) | Evaluación de expresiones con `assert` | Ninguna (éxito) o aborto (falla) |

### Léxico del Algoritmo
- `int`: `2`, `4`.
- `bool`: `true`, `false`, `1`, `0`.
- `char`: `'A'`, `'a'`, `32`.
- `unsigned`: `10u`, `5u`, `0u`, `1u`.
- `double`: `3.5`, `0.25`, `3.75`.
- `string`: `"hola "s`, `"mundo"s`, `"hola mundo"s`.



### Representación textual
1. Inicio.
2. Incluir `<cassert>` y `<string>`.
3. Usar el espacio de nombres `std::string_literals`.
4. Verificar operaciones aritméticas con literales `int`.
5. Verificar equivalencias lógicas con literales `bool`.
6. Verificar relación entre `char` y valores numéricos (ASCII).
7. Verificar comportamiento de resta y wraparound en `unsigned`.
8. Verificar adición exacta en `double` (usando fracciones de potencia de 2).
9. Verificar concatenación de `string` usando sufijo `s`.

## Respuestas

### ¿Son todos los tipos vistos en clase?
No, existen otrod tipos como `short`, `long`, `long long` (variantes de precisión de enteros), `float` y `long double` 


### El problema de la suma de 0.1
La prueba falla. Esto ocurre porque `0.1` no tiene representación exacta en el sistema binario usado por `double`, hace pequeños errores de redondeo que se acumulan y hacen que la suma sea distinta de `1.0`.
