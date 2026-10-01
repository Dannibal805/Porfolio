import threading
import time

def hola_mundo(nombre):
     print("Hola Mundo"+ nombre)
     time.sleep(5)

     if __nombre__ == '__main__':
         thread =threading.Thread(tarjet= hola_mundo, args=("Codi",))
         thread.start()
         thread.join()

         print("Hola mundo desde el hilo principal")