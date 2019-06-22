import os.path
from sys import *;
import numpy as np 
import pandas as pd 
#from sklearn import preprocessing
from sklearn.metrics import accuracy_score
from sklearn.neighbors import KNeighborsClassifier
from sklearn.model_selection import train_test_split


def CheckAccuracy(data,target):
	
	data_train , data_test , target_train ,target_test = train_test_split(data,target,test_size=0.2)
		
	classifier = KNeighborsClassifier(n_neighbors=3)
	classifier.fit(data_train,target_train)
	prediction = classifier.predict(data_test);
	
	return accuracy_score(target_test,prediction)

def Predictor():
	filename = 'WinePredictor.csv'
	exists = os.path.exists(filename)
	
	if exists:
		dataframe = pd.read_csv(filename)
		#print(dataframe)

		data = dataframe.drop(['Class'],axis=1)
		#data = data.drop(['Unnamed: 0'],axis=1)
		target = dataframe.Class 

		#print(data)
		data_train , data_test , target_train ,target_test = train_test_split(data,target,test_size=0.3)
		print(data_test,"\n\n\n\n")
		print(data_train)
		
		classifier = KNeighborsClassifier(n_neighbors=7)
		classifier.fit(data,target)
		prediction = classifier.predict(data_test);

		#print("OUTPUT : ",prediction)
		#print("TEST : ",target_test)

		for predict in prediction:
			if(predict == 1):
				print("Class 1")
			elif predict == 2:
				print("Class 2")
			else:
				print("Class 3")

		print("Accuracy : ",CheckAccuracy(data,target)*100,"%")	
	pass


def main():
	
	if len(argv) == 2:

		if  argv[1].lower() == '-h' :
			print("\n\n\t\t........................This is Wine Predictor ........................\n\n");
			print("\n " + argv[0]+ " -h For Help");
			print("\n " + argv[0]+ " -u For Usage");		
			exit();

		if argv[1].lower() == "-u" :
			print("\n <Usage> " + argv[0] );
			exit();


	Predictor();
	

if(__name__ == "__main__"):
	main();