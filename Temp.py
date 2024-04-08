import turtle

def make_Rectangle(x, y, width, height, value):
    t.penup()
    t.goto(x, y)
    t.pendown()
    t.begin_fill()
    t.fillcolor("red")
    t.pencolor("blue")
    t.forward(width)
    t.right(90)
    t.forward(height)
    t.right(90)
    t.forward(width)
    t.right(90)
    t.forward(height)
    t.right(90)
    t.end_fill()
    
    t.penup()
    t.goto(x + width + 5, y - height)
    t.write(value, align="left", font=("Arial", 10, "normal"))

def draw_graph(survey_data):
    t.speed(0)
    screen = turtle.Screen()
    screen.title("설문조사 결과")

    max_width = 200
    bar_height = 20

    y = 0
    for country, count in survey_data.items():
        width = count * (max_width / max(survey_data.values()))
        make_Rectangle(-150, y, width, bar_height, f"{country}: {count}명")
        y -= bar_height

    turtle.done()

countries = ["미국", "영국", "스위스", "프랑스"]
survey_data = {country:0 for country in countries}

while True:
    print("방문하고 싶은 국가를 선택하세요:")
    for i, country in enumerate(countries, start=1):
        print(f"{i}. {country}")
    print("선택 번호를 입력하고, 입력을 마치려면 '끝'을 입력하세요.")
    
    choice = input()
    if choice.lower() == '끝':
        break
    try:
        choice_num = int(choice)
        if 1 <= choice_num <= len(countries):
            selected_country = countries[choice_num-1]
            survey_data[selected_country] += 1
        else:
            print("잘못된 번호입니다. 올바른 번호를 입력하세요.")
    except ValueError:
        print("숫자를 입력해야 합니다. 다시 시도하세요.")

# 결과 그리기
if any(survey_data.values()):
    t = turtle.Turtle()
    draw_graph(survey_data)
else:
    print("입력된 데이터가 없습니다.")
