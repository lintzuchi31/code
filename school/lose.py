last = int(input("請輸入班上最後一位同學的座號："))
lose = []
score = []
av = 0
big =0
index =0
total=0
while(True):
    num = input("請輸入班上1~"+str(last)+"號之間沒有的座號，輸入完畢請按q:")
    if(num == 'q'):
        break
    lose.append(int(num))
for i in range(0,last):
    if(i+1 in lose):
        continue
    sc = int(input("請輸入"+str(i+1)+"號同學的成績："))
    score.append(sc)
    av+=sc
    total +=1
    if(sc>big):
        big = sc
        index = i
av/=total
print("此次班級小考平均為："+str(av))
print("班上最高分為"+str(index+1)+"號:"+str(big)+"分")

