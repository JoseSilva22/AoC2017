import numpy as np
from numpy import genfromtxt

data = genfromtxt('input', dtype=int, delimiter='\t')

print(sum( np.amax(data, axis=1) - np.amin(data, axis=1) ))
