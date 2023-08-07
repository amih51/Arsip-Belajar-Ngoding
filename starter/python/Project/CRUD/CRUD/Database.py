from . import Operation

DB_NAME = "data.txt"
TEMPLATE = {
    "pk":"XXXXXX",
    "date_add":"yyyy-mm-dd",
    "title":" "*255,
    "writer":" "*255,
    "year":"yyyy"
}


def init_console():
    try:
        with open(DB_NAME,"r") as file:
            print("Database found!")
    except:
        print("Datebase not found, creating a database")
        Operation.create_first_data()