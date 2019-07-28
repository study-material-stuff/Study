import os
import bs4
import requests
from sys import *
from urllib.request import urlopen
from urllib.parse import urlparse	

def ImageURL_Scrapper(url):

	connection = urlopen(url)

	raw_html = connection.read()
	
	connection.close()

	page_soup = bs4.BeautifulSoup(raw_html,"html.parser")	
	
	container = page_soup.findAll("li",{"class":"item"})

	return container

def is_downloadable(url):

	h = requests.head(url,allow_redirects = True)

	header = h.headers

	content_type = header.get('content-type')

	if 'text' in content_type.lower():
		return False
	
	if 'html' in content_type.lower():
		return False

	return True

def get_filename_from_cd(cd):

	a = urlparse(cd)

	return os.path.basename(a.path)

def Download(urllist):
	
	dirname = getImageName().replace('-'," ") + '/'
	
	if not os.path.isdir(dirname):	
		os.mkdir(dirname)
	
	for element in urllist:
	
		url = element.a.img['src']
		url = url.replace("small-previews","large-previews")

		print(url)
		allowed = is_downloadable(url)
	
		if allowed:
		
			try :
			
				filename = dirname

				res = requests.get(url, allow_redirects = True)
			
				filename += get_filename_from_cd(url)
			
				fd = open(filename,"wb")
			
				for buffer in res.iter_content(1024):
					fd.write(buffer)
	
				fd.close()

				#return True
			except FileNotFoundError as E:
				os.mkdir(dirname)

			except Exception as E:
				print("Error : ", E)
				pass
	
		
	
def getImageName():

	ImageName = ""

	for i in range(1,len(argv)):
		ImageName += argv[i]
		ImageName += '-'
	
	return ImageName


def main():

	print("----------Image Scrapper and Downloader By Harshal Ghule----------",end="\n\n")
	
	print("Application Name : "+ argv[0] ,end="\n\n")
	
	if (argv[1].lower() == '-h') or (argv[1].lower() == '-u'):
		
		print("<Usage> : {} Image_name".format(argv[0]),end="\n\n" )
		exit(0)
			
	try:
		
		#url = "https://www.newegg.com/Video-Cards-Video-Cards-Video-Devices/Category/ID-38?Tpk=video%20card"

		#url = "https://en.wikipedia.org/wiki/Spider-Man"
		
		
		ImageName = getImageName()
		
		url = "https://www.freeimages.com/search/" + ImageName; 		

		List = ImageURL_Scrapper(url)
	
		Download(List)
	
	except Exception as E:
		
		print("Error : Invalid input",E)
	



if __name__ == "__main__":
	main()
