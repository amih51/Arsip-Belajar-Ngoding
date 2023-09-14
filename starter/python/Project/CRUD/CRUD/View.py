from . import Operation

def create_console():
    print("="*100)
    
    title = input("Title\t: ")
    writer = input("Writer\t: ")
    while(True):
        try:
            year = int(input("Year\t: "))
            break
        except:
            print("Year must be integer")

    Operation.create(title,writer,year)

    print("="*100)

    read_console()


def read_console():
    data_file = Operation.read()

    index = "No."
    title = "Title"
    writer = "Writer"
    year = "Year"

    # Header
    print("\n"+"="*100)
    print(f"{index:4} | {title:40} | {writer:40} | {year:5}")
    print("-"*100)

    # Data
    for i,data in enumerate(data_file):
        data_break = data.split(",")
        pk = data_break[0]
        date_add = data_break[1]
        title = data_break[2]
        writer = data_break[3]
        year = data_break[4]
        print(f"{i+1:4} | {title:.40} | {writer:.40} | {year:4}",end='')

    # Footer
    print("="*100+"\n")


def update_console():
    read_console()
    while(True):
        book_number = int(input("Book Number\t: "))
        book_data = Operation.read(index=book_number)
        
        if book_data:
            break
        else:
            print("Invalid number")
    
    data_break = book_data.split(",")
    pk = data_break[0]
    date_add = data_break[1]
    title = data_break[2]
    writer = data_break[3]
    year = data_break[4][:-1]

    while(True):
        print("="*100)
        print(f"1. Title\t: {title:.40}")
        print(f"2. Writer\t: {writer:.40}")
        print(f"3. Year\t\t: {year:.40}")

        user_option = input("\n1/2/3: ")
        print("="*100)
        match user_option:
            case "1": title = input("Title\t: ")
            case "2": writer = input("Writer\t: ")
            case "3":
                try:
                    year = int(input("Year\t: "))
                    break
                except:
                    print("Year must be integer")
            case _: print("Index nor found")

        print("="*100)
        print(f"1. Title\t: {title:.40}")
        print(f"2. Writer\t: {writer:.40}")
        print(f"3. Year\t\t: {year:.40}")
        print("="*100)
        is_done = input("Do you want to exit to main menu (y/n) ? ")
        if is_done in 'Yy':
            break

    Operation.update(book_number,pk,date_add,title,writer,year)
    read_console()


def delete_console():
    read_console()
    while(True):
        book_number = int(input("Book Number\t: "))
        book_data = Operation.read(index=book_number)
        
        if book_data:
            data_break = book_data.split(",")
            pk = data_break[0]
            date_add = data_break[1]
            title = data_break[2]
            writer = data_break[3]
            year = data_break[4][:-1]

            print("="*100)
            print(f"1. Title\t: {title:.40}")
            print(f"2. Writer\t: {writer:.40}")
            print(f"3. Year\t\t: {year:.40}")
            print("="*100)

            is_done = input("This file will be deleted (y/n) ? ")
            if is_done in 'Yy':
                break
        else:
            print("Invalid number")

    Operation.delete(book_number)
    read_console()
        

        