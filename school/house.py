s = input("請輸入身分證字號:")
s = s.upper()
check = True
if(len(s)==10): 
    if(s[1]=="1"):
        p = "先生"
        check=False
    elif(s[1]=="2"):
        p = "小姐"
        check=False
    if(s[0]=="A" or s[0]=="Y"):
        locate = "台北市"
    elif(s[0]=="F"):
        locate = "新北市"
    elif(s[0]=="C"):
        locate = "基隆市"
    else:
        locate = "不是北北基"
        
if(check):
    print("輸入錯誤")
else:
    print(p+"您好，您的戶籍地為"+locate)

