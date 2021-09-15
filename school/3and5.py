s=int(input("請輸入一個正整數："))
if(s%15==0):
    print("x 為 3 與 5 的倍數")
elif(s%3==0):
    print("x 為 3 的倍數")
elif(s%5==0):
    print("x 為 5 的倍數")
else:
    print("x 不為 3 與 5 的倍數")
