import random
password = random.randint(1,100)
left = 1
right = 100
while(True):
    find = int(input("請輸入"+str(left)+"~"+str(right)+"間的數字:"))
    if(find<left or find>right):
        print("猜測數字超過範圍")
        continue
    if(find>password):
        right=find-1
    if(find<password):
        left=find+1
    if(find==password):
        break
print("答對了，密碼為"+str(password))
