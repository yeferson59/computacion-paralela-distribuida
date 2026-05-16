# LAB-CUDA | Silvana & Yeferson

> **Asignatura:** Fundamentos de Programación Concurrente y Distribuida

> **Docente:** Prf. Juan Alejandro Carrillo Jaimes

> **Semestre:** 2026-I

> **Repositorio:** [computacion-paralela-distribuida](https://github.com/yeferson59/computacion-paralela-distribuida)

---

## Descripción del taller

Este laboratorio es una introducción práctica a **CUDA** (Compute Unified Device Architecture), la plataforma de computación paralela de NVIDIA. Por medio de 9 ejercicios donde se trabajaron los conceptos fundamentales del modelo de programación en GPU: transferencia de datos entre CPU y GPU, escritura y lanzamiento de kernels, indexación 1D y 2D de hilos, uso de shared memory, reducción paralela y medición de rendimiento. Los ejercicios están organizados en tres categorías de dificultad creciente — transferencia de datos, kernels básicos y nivel intermedio — y fueron ejecutados en **Google Colab** aprovechando su acceso gratuito a GPU NVIDIA.

---

## Equipo

|    | Colaborador | GitHub |
|----|-------------|--------|
| 👩🏻‍💻 | Silvana     | [@inana20](https://github.com/inana20) |
| 👨🏻‍💻 | Yeferson    | [@yeferson59](https://github.com/yeferson59) |

---

## Estructura del laboratorio

```
lab_cuda_basic_intermediate/
│
├── README.md
│
├── ejercicio1_hola_gpu/
│   ├── ejercicio1_hola_gpu.cu
│   └── README.md
│
├── ejercicio2_matriz/
│   ├── ejercicio2_matriz.cu
│   └── README.md
│
├── ejercicio3_device_info/
│   ├── ejercicio3_device_info.cu
│   └── README.md
│
├── ejercicio4_suma_vectores/
│   ├── ejercicio4_suma_vectores.cu
│   └── README.md
│
├── ejercicio5_cuadrado/
│   ├── ejercicio5_cuadrado.cu
│   └── README.md
│
├── ejercicio6_kernel2d/
│   ├── ejercicio6_kernel2d.cu
│   └── README.md
│
├── ejercicio7_reduccion/
│   ├── ejercicio7_reduccion.cu
│   └── README.md
│
├── ejercicio8_tiempo/
│   ├── ejercicio8_tiempo.cu
│   └── README.md
│
└── ejercicio9_producto_punto/
    ├── ejercicio9_producto_punto.cu
    └── README.md
```

---

## Resumen de ejercicios

| # | Ejercicio | Categoría | Autor |
|---|-----------|-----------|-------|
| 1 | Hola GPU: transferencia CPU↔GPU | Básico - Transferencia | Silvana |
| 2 | Copia de Matriz 2D CPU↔GPU | Básico - Transferencia 2D | Yeferson |
| 3 | Información del Device | Consulta de propiedades | Silvana |
| 4 | Suma de Vectores Paralela | Kernels Básicos | Yeferson |
| 5 | Cuadrado de Elementos In-place | Kernels Básicos | Silvana |
| 6 | Kernel 2D: Inicialización de Matriz | Kernels Básicos 2D | Yeferson |
| 7 | Reducción Paralela con Shared Memory | Intermedio | Silvana |
| 8 | Multiplicación Escalar y Medición de Tiempo | Intermedio - Rendimiento | Yeferson |
| 9 | Producto Punto de Vectores | Intermedio - Combinación | Silvana |

---

*Fundamentos de Programación Concurrente y Distribuida · Juan Alejandro Carrillo Jaimes · 2026-I*
