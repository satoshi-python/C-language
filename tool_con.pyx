
from cython import boundscheck, wraparound
from libc.math cimport sqrt

cdef contact(list x, list y):
  cdef double S = 0
  with boundscheck(False), wraparound(False):
    for i in range(3):
      S += (x[i] - y[i]) ** 2
  return sqrt(S)


def con(list x,list y):
  return contact(x, y)

  
