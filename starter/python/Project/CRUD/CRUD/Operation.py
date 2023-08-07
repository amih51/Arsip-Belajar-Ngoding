from . import Database
from .Util import random_string
import time

def create_first_data():
    title = input("Title: ")
    writer = input("Writer: ")
    year = input("Year: ")

    data = Database.TEMPLATE.copy()

    data["pk"] = random_string(6)
    data["date_add"] = time.strftime("%Y-%m-%d-%H-%M-%S%z",time.gmtime())
    data["title"] = title + Database.TEMPLATE["title"][len(title):]
    data["writer"] = writer + Database.TEMPLATE["writer"][len(writer):]
    data["year"] = year

    data_str = f'{data["pk"]},{data["date_add"]},{data["title"]},{data["writer"]},{data["year"]},"\n"'
    print(data_str)
    try:
        with open(Database.DB_NAME,'w',encoding="utf-8") as file:
            file.write(data_str)
    except:
        print("Fail")