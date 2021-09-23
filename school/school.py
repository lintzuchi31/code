last = int(input("請輸入班上最後一位同學的座號："))
score_li = []
av=0
big=0
index=0
for i in range(0,last):
    score = int(input("請輸入"+str(i+1)+"號同學的成績："))
    score_li.append(score)
    av+=score
    if(score>big):
        big = score
        index = i
for i in range(0,last):
    print(str(i+1)+"號的成績為："+str(score_li[i]))
av/=last
print("此次小考平均為：",str(av))
print("最高分為"+str(index+1)+"號,分數為：",str(big))
