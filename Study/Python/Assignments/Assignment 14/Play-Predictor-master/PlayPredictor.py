import os.path
from sys import *;
import numpy as np 
import pandas as pd 
from sklearn import preprocessing
from sklearn.metrics import accuracy_score
from sklearn.neighbors import KNeighborsClassifier
from sklearn.model_selection import train_test_split


def CheckAccuracy(data,target):
	
	data_train , data_test , target_train ,target_test = train_test_split(data,target,test_size=0.2)
		
	classifier = KNeighborsClassifier(n_neighbors=3)
	classifier.fit(data_train,target_train)
	prediction = classifier.predict(data_test);
	
	return accuracy_score(target_test,prediction)

def Predictor(data_test):

	filename = 'MarvellousInfosystems_PlayPredictor.csv'
	exists = os.path.exists(filename)
	
	if exists:
		dataframe = pd.read_csv(filename)
		le = preprocessing.LabelEncoder()
		dataframe = dataframe.apply(le.fit_transform)
		data_test = data_test.apply(le.fit_transform)
		#print(data_test)


		data = dataframe.drop(['Play'],axis=1)
		data = data.drop(['Unnamed: 0'],axis=1)
		target = dataframe.Play 

		#print(data)
		#data_train , data_test , target_train ,target_test = train_test_split(data,target,test_size=0.5)
		
		classifier = KNeighborsClassifier(n_neighbors=7)
		classifier.fit(data,target)
		prediction = classifier.predict(data_test);

		#print("OUTPUT : ",prediction)
		#print("TEST : ",target_test)

		for predict in prediction:
			if(predict == 1):
				print("Yes")
			else:
				print("No")

		print("Accuracy : ",CheckAccuracy(data,target)*100,"%")


def PredictorWithoutInput():
	filename = 'MarvellousInfosystems_PlayPredictor.csv'
	exists = os.path.exists(filename)
	
	if exists:
		dataframe = pd.read_csv(filename)
		le = preprocessing.LabelEncoder()
		dataframe = dataframe.apply(le.fit_transform)
		#print(data_test)

		data = dataframe.drop(['Play'],axis=1)
		data = data.drop(['Unnamed: 0'],axis=1)
		target = dataframe.Play 

		#print(data)
		data_train , data_test , target_train ,target_test = train_test_split(data,target,test_size=0.5)
		
		classifier = KNeighborsClassifier(n_neighbors=7)
		classifier.fit(data,target)
		prediction = classifier.predict(data_test);

		#print("OUTPUT : ",prediction)
		#print("TEST : ",target_test)

		for predict in prediction:
			if(predict == 1):
				print("Yes")
			else:
				print("No")

		print("Accuracy : ",CheckAccuracy(data,target)*100,"%")	
	pass

def ManualInput():
	Wether = [];
	Tempearture = [];

	Wether = input("Enter the wether ( Sunny Rainy Overcast ',' sepetated ) : ").split(',')
	#print(Wether)
	Tempearture = input("Enter the temperature ( Hot Mild Cool ',' sepetated ) : ").split(',')

	dictionary = {}

	dictionary['Wether'] = pd.Series(Wether);
	dictionary['Tempearture'] = pd.Series(Tempearture);

	return dictionary

def main():
	
	if len(argv) == 2:

		if  argv[1].lower() == '-h' :
			print("\n\n\t\t........................This is Play Predictor........................\n\n");
			print("\n " + argv[0]+ " -h For Help");
			print("\n " + argv[0]+ " -u For Usage");		
			exit();

		if argv[1].lower() == "-u" :
			print("\n <Usage> " + argv[0] );
			exit();


	confirm = input("Do you want automatic input values (Y/N) : ").lower()
	
	if confirm == 'y':
		PredictorWithoutInput()
	else:
		
		dictionary = ManualInput()

		Predictor(pd.DataFrame(dictionary));
	

if(__name__ == "__main__"):
	main();