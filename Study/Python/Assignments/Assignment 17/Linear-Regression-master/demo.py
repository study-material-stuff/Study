import numpy as np
import pandas as pd
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error
from sklearn.model_selection import train_test_split

def MarvellousHeadBrainPredictor():
	data = pd.read_csv('Advertising.csv')

	#print('Size of data set : ',data.shape)
	
	feature_cols = ['TV', 'radio', 'newspaper']

	X = np.array(data[feature_cols].values)
	Y = data['sales'].values
	
	#data_train , data_test , target_train ,target_test = train_test_split(X,Y)

	reg = LinearRegression()

	reg = reg.fit(X,Y)

	print("y inertcept ",reg.intercept_)

	y_pred = reg.predict(np.array([[214.7,24,4]]))
	print("m ",reg.coef_)
	
	print(y_pred)
	
	#r2 = reg.score(data_train,target_train)

	#print(r2)
def main():
	MarvellousHeadBrainPredictor()


if __name__ == "__main__":
	main()