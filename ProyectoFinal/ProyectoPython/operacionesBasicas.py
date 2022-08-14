import cv2 
import numpy as np

image1 =cv2.imread("img1.jpg")
image2 =cv2.imread("img2.jpg")
print(image1)
print(image2)

print("Operaciones de imagenes")
print("1. suma de imagenes")
print("2. resta de imagenes")
print("3. multiplicacion de imagenes")
opcion = int(input("Por favor introduzca su opcion:"))
if opcion == 1:
    #cargamos imagenes
    imagen1 = cv2.imread('img1.jpg')
    imagen2 = cv2.imread('img2.jpg')

    #suma de imagenes
    suma = cv2.add(imagen1, imagen2)
    print(suma)

    #mostra imagen sumada
    cv2.imshow('suma',suma)
    cv2.waitKey(0)
    cv.destroyAllWindows()

elif opcion == 2:
    #cargamos imagenes
    imagen3 = cv2.imread('img3.png')
    imagen4 = cv2.imread('img4.png')
    #resta de imagenes
    resta = cv2.subtract(imagen3, imagen4)
    print(resta)

    #mostrar imagen restada
    cv2.imshow('resta',resta)
    cv2.waitKey(0)
    cv.destroyAllWindows()

elif opcion == 3:
    #cargamos imagenes
    imagen1 = cv2.imread('img1.jpg')
    imagen2 = cv2.imread('img2.jpg')
    #multiplicacion de imagenes
    multiplicacion = cv2.multiply(imagen1, imagen2)
    print(multiplicacion)

    #mostrar imagen multiplicada
    cv2.imshow('multiplicacion',multiplicacion)
    cv2.waitKey(0)
    cv.destroyAllWindows()
