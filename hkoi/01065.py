from math import *
a = int(input())
b = int(input())
lena = len(str(a))
lenb = len(str(b))
if lena >= lenb:
    l=lena
else:
    l=lenb
print((l-lena)*' ', a)
if b == 0:
    if l==1:
        print ("-0")
    elif l==2:
        print ("- 0")
    else :
        print ('-', (l-3)*' ', b)
elif (l-lenb-1) < 0:
    print (-b)
elif (l-lenb-1) == 0:
    print ('-', b)
else:
    print ('-', (l-lenb-2)*' ', b)
print ((l+1)*'-')
result = a-b
lenr = len(str(result))
if result < 0:
    if(l-lenr-1) < -1:
        print (result)
    elif (l-lenr-1) == -1:
        print ('-', -result)
    else:
        print ('-', (l-lenr-1)*' ', -(result))
else:
    print ((l-lenr)*' ', result)
