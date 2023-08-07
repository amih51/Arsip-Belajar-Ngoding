import random
import string

def random_string(length:int) -> str:
    st = ''.join(random.choice(string.ascii_letters) for i in range(length))
    return st