# https://dmoj.ca/problem/ccc05s1

t = int(input())
for i in range(t):
    number = input()
    number = number.replace('-', '')
    number = number.replace('A', '2')
    number = number.replace('B', '2')
    number = number.replace('C', '2')
    number = number.replace('D', '3')
    number = number.replace('E', '3')
    number = number.replace('F', '3')
    number = number.replace('G', '4')
    number = number.replace('H', '4')
    number = number.replace('I', '4')
    number = number.replace('J', '5')
    number = number.replace('K', '5')
    number = number.replace('L', '5')
    number = number.replace('M', '6')
    number = number.replace('N', '6')
    number = number.replace('O', '6')
    number = number.replace('P', '7')
    number = number.replace('Q', '7')
    number = number.replace('R', '7')
    number = number.replace('S', '7')
    number = number.replace('T', '8')
    number = number.replace('U', '8')
    number = number.replace('V', '8')
    number = number.replace('W', '9')
    number = number.replace('X', '9')
    number = number.replace('Y', '9')
    number = number.replace('Z', '9')
    print(number[0:3] + '-' + number[3:6] + '-' + number[6:10])
    