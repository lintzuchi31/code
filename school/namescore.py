name_li=[]
score_li=[]
cnt=0
while(True):
    name = input("請輸入姓名：")
    if(name == "9999"):
        break
    cnt+=1
    score = int(input("請輸入此次平時考試成績："))
    name_li.append(name)
    score_li.append(score)
av = 0
big = 0
index=0
for i in range(0,cnt):
    print(name_li[i],"的成績為",score_li[i])
    av+=score_li[i]
    if(score_li[i] > big):
        big = score_li[i]
        index = i
av/=cnt
print("此次小考班級平均為"+str(av))
print("最高分為",name_li[index],"分數為:",score_li[index])
