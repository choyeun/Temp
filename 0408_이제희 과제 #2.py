import turtle

t = turtle.Turtle()



def make_Rectangle(x, y, width, height):
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


make_Rectangle(-100, 100, 200, 100)