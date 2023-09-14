from . import Database
from .Util import random_string
import time
import os

def create(title,writer,year):
    data = Database.TEMPLATE.copy()

    data["pk"] = random_string(6)
    data["date_add"] = time.strftime("%Y-%m-%d-%H-%M-%S%z",time.gmtime())
    data["title"] = title + Database.TEMPLATE["title"][len(title):]
    data["writer"] = writer + Database.TEMPLATE["writer"][len(writer):]
    data["year"] = str(year)
    
    data_str = f'{data["pk"]},{data["date_add"]},{data["title"]},{data["writer"]},{data["year"]}\n'
    try:
        with open(Database.DB_NAME,'a',encoding="utf-8") as file:
            file.write(data_str)
    except:
        print("Fail")


def create_first_data():
    title = input("Title\t: ")
    writer = input("Writer\t: ")
    while(True):
        try:
            year = int(input("Year\t: "))
            break
        except:
            print("Year must be integer")

    data = Database.TEMPLATE.copy()

    data["pk"] = random_string(6)
    data["date_add"] = time.strftime("%Y-%m-%d-%H-%M-%S%z",time.gmtime())
    data["title"] = title + Database.TEMPLATE["title"][len(title):]
    data["writer"] = writer + Database.TEMPLATE["writer"][len(writer):]
    data["year"] = str(year)

    data_str = f'{data["pk"]},{data["date_add"]},{data["title"]},{data["writer"]},{data["year"]}\n'
    try:
        with open(Database.DB_NAME,'w',encoding="utf-8") as file:
            file.write(data_str)
    except:
        print("Fail")

def read(**kwargs):
    try:
        with open(Database.DB_NAME,'r') as file:
            content = file.readlines()
            book_amount = len(content)
            if "index" in kwargs:
                book_index = kwargs["index"]-1
                if book_index < 0 or book_index > book_amount:
                    return False
                else:
                    return content[book_index]
            else:
                return content
    except:
        print("Error reading database")
        return False
    
def update(book_number,pk,date_add,title,writer,year):
    data = Database.TEMPLATE.copy()

    data["pk"] = random_string(6)
    data["date_add"] = time.strftime("%Y-%m-%d-%H-%M-%S%z",time.gmtime())
    data["title"] = title + Database.TEMPLATE["title"][len(title):]
    data["writer"] = writer + Database.TEMPLATE["writer"][len(writer):]
    data["year"] = str(year)

    data_str = f'{data["pk"]},{data["date_add"]},{data["title"]},{data["writer"]},{data["year"]}\n'
    data_len = len(data_str)
    try:
        with open(Database.DB_NAME,'r+',encoding="utf-8") as file:
            file.seek((data_len + 1) * (book_number - 1))
            file.write(data_str)
    except:
        print("Fail")
    
def delete(book_number):
    try:
        with open(Database.DB_NAME,'r') as file:
            counter = 0
            while(True):
                content = file.readline()
                if len(content) == 0:
                    break
                elif counter == book_number - 1:
                    pass
                else:
                    with open("data_temp.txt",'a',encoding="utf-8") as temp_file:
                        temp_file.write(content)
                counter += 1
    except:
        print("Error reading database")
        return False
    os.remove("data.txt")
    os.rename("data_temp.txt",Database.DB_NAME)
    