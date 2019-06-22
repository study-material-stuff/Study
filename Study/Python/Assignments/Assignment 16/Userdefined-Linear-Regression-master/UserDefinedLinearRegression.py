import numpy as np
import pandas as pd
import matplotlib.pyplot as plt


class LinearRegression():
	
	
	def fit(self,data_train,data_test):
		self.data_train = data_train
		self.data_test = data_test

	
	def predict(self,TestData):

		one = np.ones((len(self.data_train),1))
		self.data_train = np.c_[ one , self.data_train ] # prepend 1 in matrix
		
		one = np.ones((len(TestData),1))
		TestData = np.c_[ one , TestData ] # prepend 1 in matrix

		X_transpose = np.transpose(self.data_train)  		# m = (X`X)^-1 X`Y

		self.coef_ = (np.linalg.inv(X_transpose.dot(self.data_train))).dot(X_transpose.dot(self.data_test))
		self.intercept_ = self.coef_[0]		
		ypred = [];
		for i in range(len(TestData)):			
			ypred.append(self.coef_.dot(TestData[i])) # y = c + (m1*x1) + (m2*x2) + (mn*xn)

		return ypred

def main():

	data = pd.read_csv('Advertising.csv')

	feature_cols = ['TV', 'radio', 'newspaper']

	X = np.array(data[feature_cols].values)
	Y = np.array(data['sales'].values)

	reg = LinearRegression()
	reg.fit(X,Y)
	y_pred = reg.predict([[214.7,24,4],[8.6,2.1,1]])

	print("Prediction = ",y_pred)
	print("Coefficient =",reg.coef_)
	print("Intercept = ",reg.intercept_)

if __name__ == "__main__":
	main()