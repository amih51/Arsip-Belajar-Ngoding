def romanToInt(s):
    romanValue = {
        'I' : 1,
        'V' : 5,
        'X' : 10,
        'L' : 50,
        'C' : 100,
        'D' : 500,
        'M' : 1000
    }

    result = 0
    prevValue = 0

    for c in reversed(s):
        value = romanValue[c]
        if value < prevValue:
            result -= value
        else:
            result += value
        prevValue = value
    return result

roman = input()
number = romanToInt(roman)
print(number)