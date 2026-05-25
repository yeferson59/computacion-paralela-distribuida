# Taller — Entrenamiento de Redes Neuronales en GPU
## CUDA con PyTorch en Google Colab

> **Materia:** Programación Paralela y Computación Distribuida
> **Docente:** Prf. Juan Alejandro Carrillo Jaimes
> **Semestre:** 2026-I

---

## Equipo

|    | Integrante | GitHub |
|----|------------|--------|
| 👩🏻‍💻 | Silvana | [@inana20](https://github.com/inana20) |
| 👨🏻‍💻 | Yeferson | [@yeferson59](https://github.com/yeferson59) |

---

## Descripción

Taller práctico de entrenamiento de una red neuronal densa (MLP) para clasificar dígitos escritos a mano del dataset MNIST, usando PyTorch sobre GPU NVIDIA en Google Colab. Se compara el tiempo de entrenamiento entre CPU y GPU, se evalúa la precisión del modelo y se prueba con un dígito dibujado a mano. El taller conecta los conceptos de CUDA en C (kernels, transferencia de memoria, hilos/bloques) con su equivalente en alto nivel en PyTorch.

---

## Estructura del repositorio

```
taller-cuda-pytorch/
│
├── README.md
│
├── notebook/
│   └── taller_cuda_pytorch.ipynb
│
├── reporte/
│   └── reporte_taller.md
│
└── img/
    ├── s1_gpu_disponible.png
    ├── s1_nvidia_smi.png
    ├── s2_tensores.png
    ├── s3_conteo.png
    ├── s3_cuadricula.png
    ├── s4_arquitectura.png
    ├── s5_cpu.png
    ├── s5_gpu.png
    ├── s5_comparacion.png
    ├── s5_curva.png
    ├── s6_precision.png
    ├── s6_predicciones.png
    ├── s7_digito.png
    └── s7_probabilidades.png
```

---

*Programación Paralela y Computación Distribuida · Juan Alejandro Carrillo Jaimes · 2026-I*
