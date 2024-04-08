import random

def play():
    wins = 0
    losses = 0
    draws = 0

    while True:  
        user_input = input("가위(1)/바위(2)/보(3): ")
        if user_input == 'n':
            break
        
        try:
            a = int(user_input)
        except ValueError:
            print("잘못된 입력입니다. 다시 입력해주세요.")
            continue
        
        if a not in [1, 2, 3]:
            print("잘못된 선택입니다. 1, 2, 3 중 하나를 입력해주세요.")
            continue
        
        rng = random.choice(["user 승리", "user 패배", "무승부"])
        win_conditions = {1: "보", 2: "가위", 3: "바위"}
        lose_conditions = {1: "바위", 2: "보", 3: "가위"}
        choices = {1: "가위", 2: "바위", 3: "보"}

        if rng == "user 승리":
            wins += 1
            print(f"User 승리\nUser:{choices[a]} Com:{win_conditions[a]}")
        elif rng == "user 패배":
            losses += 1
            print(f"User 패\nUser:{choices[a]} Com:{lose_conditions[a]}")
        else:  # 무승부
            draws += 1
            print(f"무승부\n User:{choices[a]} Com:{choices[a]}")

        # 게임 한 판이 끝난 후 계속할지 결정
        continue_game = input("계속? ")
        if continue_game.lower() == 'n':
            break

    print(f"\nUser: {wins}승, {draws}무, {losses}패 ")
    print(f"\nCom: {losses}승, {draws}무, {wins}패")

play()
