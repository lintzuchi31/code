import random
ar=[]
while(len(ar)!=6):
    s=random.randint(1,49)
    if(s in ar):
        continue
    ar.append(s)
ar.sort()
while(True):
    s=random.randint(1,49)
    if(s in ar):
        continue
    break
print("樂透中獎號碼："+str(ar))
print("特別號："+str(s))
