import random
a = ["가위", "바위", "보"]
# 가위바위보 만들기
def rock():
    i = input()
    rng = random.choice("가위", "바위", "보")
    # 1 = 가위
    # 2 = 바위
    # 3 = 보

    if i == 1:
        i = "가위"
    elif i == 2:
        i = "바위"
    elif i == 3:
        i = "보"
    else:
        return False

    if i == rng:
        print("무승부")
        return print(rng)
    if i =="가위":
        if rng == "바위":
            return print("computer win")
        else:
            return print("computer lose")

    if i =="바위":
        if rng == "보":
            return print("computer win")
        else:
            return print("computer lose")

    if i =="보":
        if rng == "가위":
            return print("computer win")
        else:
            return print("computer lose")
        
if __name__ == "__main__":
    while True:
        a = rock()
        if a == False:
            print("end of program" )
    


