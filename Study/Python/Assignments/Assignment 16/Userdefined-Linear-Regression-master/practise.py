import numpy as np
import pandas as pd

def MarvellousPredictor():

	# Load data

	data = pd.read_csv('Advertising.csv')

	feature_cols = ['TV', 'radio', 'newspaper']

	X = np.array(data[feature_cols].values)
	Y = np.array(data['sales'].values)
	one = np.ones((len(X),1))
	

	X = np.c_[ one,X ]   


	# m = (X`X)^-1 X`Y

	X_transpose = np.transpose(X)

	m = (np.linalg.inv(X_transpose.dot(X))).dot(X_transpose.dot(Y)) 

	print(m)

	y = m[0] + (m[1] * 214.7) + (m[2] * 24) + (m[3]* 4) 

	print(y)

	 
if __name__ == "__main__":
	MarvellousPredictor()
	# 214.7,24,4