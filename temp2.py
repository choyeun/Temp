import random

def play_rps_with_stats():
    wins = 0
    losses = 0
    draws = 0

    while True:  # 게임을 시작하는 외부 루프
        while True:  # 게임 진행을 위한 내부 루프
            user_input = input("가위(1), 바위(2), 보(3) 중 하나를 입력하세요. 게임을 종료하려면 'n'을 입력하세요: ")
            if user_input == 'n':
                print(f"\n게임 결과: {wins}승 {losses}패 {draws}무")
                return  # 게임 전체를 종료
            
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
                print(f"승리! 당신은 {choices[a]}를 선택했고, 컴퓨터는 {win_conditions[a]}를 선택했습니다.")
            elif rng == "user 패배":
                losses += 1
                print(f"패배! 당신은 {choices[a]}를 선택했고, 컴퓨터는 {lose_conditions[a]}를 선택했습니다.")
            else:  # 무승부
                draws += 1
                print(f"무승부! 당신과 컴퓨터 모두 {choices[a]}를 선택했습니다.")
        
        # 게임 한 판이 끝난 후 계속할지 결정
        continue_game = input("계속하려면 'y'를, 종료하려면 'n'을 입력하세요: ")
        if continue_game.lower() != 'y':
            print(f"\n최종 결과: {wins}승 {losses}패 {draws}무")
            break  # 외부 루프 종료

play_rps_with_stats()
