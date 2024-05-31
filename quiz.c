from tkinter import *

root = Tk()


def MyClick():
    newWindow = Toplevel(root)
    newWindow.title("OUIZ APPLICATION")
    newWindow.geometry("1000x500")
    newWindow.configure(bg="#141414")

    def bttn(x, y, text, bcolor, fcolor, font, cmd):
        mybutton = Button(newWindow, width=100, height=4, text=text, fg=bcolor,
                          bg=fcolor, border=0, activeforeground=fcolor,
                          activebackground=bcolor, font=font, command=cmd)

        mybutton.place(x=x, y=y)

    bttn(0, 85, "EASY", "#ffcc66", "#141414", "Impact", easy)
    bttn(0, 185, "MEDIUM", "#25dae9", "#141414", "Impact", medium)
    bttn(0, 285, "HARD", "#f86263", "#141414", "Impact", hard)

def easy():
    newWindow = Toplevel(root)
    newWindow.title("EASY:")
    newWindow.geometry("700x500")
    newWindow.configure(bg="#141414")
    newWindow.option_add('*Font', 'Impact')
    label = Label(newWindow,
                  text="-TOPICS-", fg="#ffcc66", bg="#141414", font="Impact 20", border=0)
    label.place(x=300, y=80)
    printButton1 = Button(newWindow,
                          text="Current Affairs", fg="#ffcc66", bg="#141414",
                          command=CurrentaffairsAssessment)
    printButton1.place(x=290, y=150)
    printButton1 = Button(newWindow,
                          text="Movies", fg="#ffcc66", bg="#141414", border=0,
                          command=MoviesAssessment)
    printButton1.place(x=320, y=200)
    printButton1 = Button(newWindow,
                          text="Sports", fg="#ffcc66", bg="#141414", border=0,
                          command=SPORTSAssessment)
    printButton1.place(x=320, y=250)
    printButton1 = Button(newWindow,
                          text="TV Series", fg="#ffcc66", bg="#141414", border=0,
                          command=TVSERIESAssessment)
    printButton1.place(x=310, y=300)


def CurrentaffairsAssessment():
    newWindow = Toplevel(root)
    newWindow.title("CURRENT AFFAIRS")
    newWindow.geometry("700x300")
    newWindow.configure(bg="#141414")
    newWindow.option_add('*Font', 'Impact')
    l1=Label(newWindow, text= "QUES 1 : How many peoples have been selected for Padma Shri award this year ",
             fg="#ffcc66",bg="#141414")
    l1.pack()
    def print_selection():
        if (var.get() == 1):
            l.config(text='''correct!''')
        if (var.get() == 2):
            l.config(text='''incorrect!''')
        if (var.get() == 3):
            l.config(text='''incorrect!''')
        if (var.get() == 4):
            l.config(text='''incorrect!''')
    var = IntVar()
    c1 = Radiobutton(newWindow, text='128',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c1.pack()
    c2 = Radiobutton(newWindow, text='109',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c2.pack()
    c3 = Radiobutton(newWindow,
                     text='102',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c3.pack()
    c4 = Radiobutton(newWindow,
                     text='115',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
    c4.pack()
    l = Label(newWindow, bg="#141414", width=50, text='',fg="#f86263")
    l.pack()
    def CurrentaffairsAssessment1():
        newWindow.destroy()
        newWindow1 = Toplevel(root)
        newWindow1.title("CURRENT AFFAIRS")
        newWindow1.geometry("700x300")
        newWindow1.configure(bg="#141414")
        newWindow1.option_add('*Font', 'Impact')
        l1=Label(newWindow1, text= "QUES 2 : Who is honoured with the Prama Vishisht Seva Medal ",
             fg="#ffcc66",bg="#141414")
        l1.pack()
        def print_selection():
            if (var.get() == 1):
                l.config(text='''correct!''')
            if (var.get() == 2):
                l.config(text='''incorrect!''')
            if (var.get() == 3):
                l.config(text='''incorrect!''')
            if (var.get() == 4):
                l.config(text='''incorrect!''')
        var = IntVar()
        c1 = Radiobutton(newWindow1, text='Neeraj Chopra',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c1.pack()
        c2 = Radiobutton(newWindow1, text='PV Sindhu',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c2.pack()
        c3 = Radiobutton(newWindow1,
                     text='Mary Kom',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c3.pack()
        c4 = Radiobutton(newWindow1,
                     text='Lovlina Borgohain',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
        c4.pack()
        l = Label(newWindow1, bg="#141414", width=50, text='',fg="#f86263")
        l.pack()
        def CurrentaffairsAssessment2():
            newWindow1.destroy()
            newWindow2 = Toplevel(root)
            newWindow2.title("CURRENT AFFAIRS")
            newWindow2.geometry("700x300")
            newWindow2.configure(bg="#141414")
            newWindow2.option_add('*Font', 'Impact')
            l1=Label(newWindow2, text= "QUES 3 : Whose grand statue will be install at India Gate in New Delhi? ",
             fg="#ffcc66",bg="#141414")
            l1.pack()
            def print_selection():
                if (var.get() == 1):
                    l.config(text='''incorrect!''')
                if (var.get() == 2):
                    l.config(text='''incorrect!''')
                if (var.get() == 3):
                    l.config(text='''correct!''')
                if (var.get() == 4):
                    l.config(text='''incorrect!''')
            var = IntVar()
            c1 = Radiobutton(newWindow2, text=' Bhagat Singh',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c1.pack()
            c2 = Radiobutton(newWindow2, text='Vallabhbhai Patel',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c2.pack()
            c3 = Radiobutton(newWindow2,
                     text='Subhas Chandra Bose',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c3.pack()
            c4 = Radiobutton(newWindow2,
                     text='Bal Gangadhar Tilak',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
            c4.pack()
            l = Label(newWindow2, bg="#141414", width=50, text='',fg="#f86263")
            l.pack()
            def CurrentaffairsAssessment3():
                newWindow2.destroy()
                newWindow3 = Toplevel(root)
                newWindow3.title("CURRENT AFFAIRS")
                newWindow3.geometry("900x300")
                newWindow3.configure(bg="#141414")
                newWindow3.option_add('*Font', 'Impact')
                l1=Label(newWindow3, text= "QUES 4 : Who has become the first woman in the world to reach 300 million followers on Instagram",
             fg="#ffcc66",bg="#141414")
                l1.pack()
                def print_selection():
                    if (var.get() == 1):
                        l.config(text='''correct!''')
                    if (var.get() == 2):
                        l.config(text='''incorrect!''')
                    if (var.get() == 3):
                        l.config(text='''incorrect!''')
                    if (var.get() == 4):
                        l.config(text='''incorrect!''')
                var = IntVar()
                c1 = Radiobutton(newWindow3, text=' Kylie Jenner',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c1.pack()
                c2 = Radiobutton(newWindow3, text='Kendall Jenner',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c2.pack()
                c3 = Radiobutton(newWindow3,
                     text=' Megan Fox',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c3.pack()
                c4 = Radiobutton(newWindow3,
                     text='Gigi Hadid',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
                c4.pack()
                l = Label(newWindow3, bg="#141414", width=50, text='',fg="#f86263")
                l.pack()
                def CurrentaffairsAssessment4():
                    newWindow3.destroy()
                    newWindow4 = Toplevel(root)
                    newWindow4.title("CURRENT AFFAIRS")
                    newWindow4.geometry("900x300")
                    newWindow4.configure(bg="#141414")
                    newWindow4.option_add('*Font', 'Impact')
                    l1=Label(newWindow4, text= "QUES 5 : Who has been appointed the new chairman of the Indian Space Research Organisation (ISRO) ",
                    fg="#ffcc66",bg="#141414")
                    l1.pack()
                    def print_selection():
                        if (var.get() == 1):
                            l.config(text='''correct!''')
                        if (var.get() == 2):
                            l.config(text='''incorrect!''')
                        if (var.get() == 3):
                            l.config(text='''incorrect!''')
                        if (var.get() == 4):
                            l.config(text='''incorrect!''')
                    var = IntVar()
                    c1 = Radiobutton(newWindow4, text=' S Somanath',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c1.pack()
                    c2 = Radiobutton(newWindow4, text='Bhupender Yadav',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c2.pack()
                    c3 = Radiobutton(newWindow4,
                     text=' Ritu Karidhal',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c3.pack()
                    c4 = Radiobutton(newWindow4,
                     text='P. Kunhikrishnan',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
                    c4.pack()
                    l = Label(newWindow4, bg="#141414", width=50, text='',fg="#f86263")
                    l.pack()
    
                printButton8 = Button(newWindow3,
                                      text="next question", fg="#f86263", bg="#141414",
                                      command=CurrentaffairsAssessment4)
                printButton8.place(x=400, y=250)
            printButton8 = Button(newWindow2,
                                  text="next question", fg="#f86263", bg="#141414",
                                  command=CurrentaffairsAssessment3)
            printButton8.place(x=300, y=250)

        printButton8 = Button(newWindow1,
                              text="next question", fg="#f86263", bg="#141414",
                              command=CurrentaffairsAssessment2)
        printButton8.place(x=300, y=250)

    printButton8 = Button(newWindow,
                          text="next question", fg="#f86263", bg="#141414",
                          command=CurrentaffairsAssessment1)
    printButton8.place(x=300, y=250)



def MoviesAssessment():
    newWindow = Toplevel(root)
    newWindow.title("MOVIES")
    newWindow.geometry("1400x300")
    newWindow.configure(bg="#141414")
    newWindow.option_add('*Font', 'Impact')
    l1=Label(newWindow, text= "QUES 1 : Which of the following organizations has collaborated with I&B Ministry to create short movies showcasing the roles of women changemakers? ",
             fg="#ffcc66",bg="#141414")
    l1.pack()
    def print_selection():
        if (var.get() == 1):
            l.config(text='''incorrect!''')
        if (var.get() == 2):
            l.config(text='''incorrect!''')
        if (var.get() == 3):
            l.config(text='''correct!''')
        if (var.get() == 4):
            l.config(text='''incorrect!''')
    var = IntVar()
    c1 = Radiobutton(newWindow, text='SonyLIV',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c1.pack()
    c2 = Radiobutton(newWindow, text='Disney+ Hotstar',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c2.pack()
    c3 = Radiobutton(newWindow,
                     text='Netflix',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c3.pack()
    c4 = Radiobutton(newWindow,
                     text='Amazon Prime Video',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
    c4.pack()
    l = Label(newWindow, bg="#141414", width=50, text='',fg="#f86263")
    l.pack()
    def MoviesAssessment1():
        newWindow.destroy()
        newWindow1 = Toplevel(root)
        newWindow1.title("MOVIES")
        newWindow1.geometry("700x300")
        newWindow1.configure(bg="#141414")
        newWindow1.option_add('*Font', 'Impact')
        l1=Label(newWindow1, text= "QUES 2 : Mujib – The Making of a Nation movie is jointly produced by which countries?",
             fg="#ffcc66",bg="#141414")
        l1.pack()
        def print_selection():
            if (var.get() == 1):
                l.config(text='''incorrect!''')
            if (var.get() == 2):
                l.config(text='''incorrect!''')
            if (var.get() == 3):
                l.config(text='''correct!''')
            if (var.get() == 4):
                l.config(text='''incorrect!''')
        var = IntVar()
        c1 = Radiobutton(newWindow1, text='Bangladesh and Nepal',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c1.pack()
        c2 = Radiobutton(newWindow1, text='Bangladesh and China',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c2.pack()
        c3 = Radiobutton(newWindow1,
                     text='Bangladesh and India',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c3.pack()
        c4 = Radiobutton(newWindow1,
                     text='Bangladesh, Myanmar and India',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
        c4.pack()
        l = Label(newWindow1, bg="#141414", width=50, text='',fg="#f86263")
        l.pack()
        def MoviesAssessment2():
            newWindow1.destroy()
            newWindow2 = Toplevel(root)
            newWindow2.title("CURRENT AFFAIRS")
            newWindow2.geometry("1000x300")
            newWindow2.configure(bg="#141414")
            newWindow2.option_add('*Font', 'Impact')
            l1=Label(newWindow2, text= "QUES 3 : Which Indian movie won the Best Film award at Dhaka International Film Festival? ",
             fg="#ffcc66",bg="#141414")
            l1.pack()
            def print_selection():
                if (var.get() == 1):
                    l.config(text='''correct!''')
                if (var.get() == 2):
                    l.config(text='''incorrect!''')
                if (var.get() == 3):
                    l.config(text='''incorrect!''')
                if (var.get() == 4):
                    l.config(text='''incorrect!''')
            var = IntVar()
            c1 = Radiobutton(newWindow2, text='Koozhangal ',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c1.pack()
            c2 = Radiobutton(newWindow2, text='Jai Bhim',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c2.pack()
            c3 = Radiobutton(newWindow2,
                     text='Marakkar: Lion of the Arabian Sea',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c3.pack()
            c4 = Radiobutton(newWindow2,
                     text=' Sardar Udham',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
            c4.pack()
            l = Label(newWindow2, bg="#141414", width=50, text='',fg="#f86263")
            l.pack()
            def MoviesAssessment3():
                newWindow2.destroy()
                newWindow3 = Toplevel(root)
                newWindow3.title("CURRENT AFFAIRS")
                newWindow3.geometry("700x300")
                newWindow3.configure(bg="#141414")
                newWindow3.option_add('*Font', 'Impact')
                l1=Label(newWindow3, text= "QUES 4 : Who is the director of the movie ‘The Fabelmans’, which was seen in the news?",
             fg="#ffcc66",bg="#141414")
                l1.pack()
                def print_selection():
                    if (var.get() == 1):
                        l.config(text='''correct!''')
                    if (var.get() == 2):
                        l.config(text='''incorrect!''')
                    if (var.get() == 3):
                        l.config(text='''incorrect!''')
                    if (var.get() == 4):
                        l.config(text='''incorrect!''')
                var = IntVar()
                c1 = Radiobutton(newWindow3, text='Steven Spielberg ',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c1.pack()
                c2 = Radiobutton(newWindow3, text='George Lucas',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c2.pack()
                c3 = Radiobutton(newWindow3,
                     text=' Martin Scorsese',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c3.pack()
                c4 = Radiobutton(newWindow3,
                     text=' Quentin Tarantino',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
                c4.pack()
                l = Label(newWindow3, bg="#141414", width=50, text='',fg="#f86263")
                l.pack()
                def MoviesAssessment4():
                    newWindow3.destroy()
                    newWindow4 = Toplevel(root)
                    newWindow4.title("CURRENT AFFAIRS")
                    newWindow4.geometry("1000x300")
                    newWindow4.configure(bg="#141414")
                    newWindow4.option_add('*Font', 'Impact')
                    l1=Label(newWindow4, text= "QUES 5 : Who was honoured for film and television achievements at the MTV Movie & TV Awards 2022? ",
                    fg="#ffcc66",bg="#141414")
                    l1.pack()
                    def print_selection():
                        if (var.get() == 1):
                            l.config(text='''correct!''')
                        if (var.get() == 2):
                            l.config(text='''incorrect!''')
                        if (var.get() == 3):
                            l.config(text='''incorrect!''')
                        if (var.get() == 4):
                            l.config(text='''incorrect!''')
                    var = IntVar()
                    c1 = Radiobutton(newWindow4, text=' Jennifer Lopez',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c1.pack()
                    c2 = Radiobutton(newWindow4, text=' Tom Cruise',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c2.pack()
                    c3 = Radiobutton(newWindow4,
                     text='Will Smith ',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c3.pack()
                    c4 = Radiobutton(newWindow4,
                     text='Angelina Jolie',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
                    c4.pack()
                    l = Label(newWindow4, bg="#141414", width=50, text='',fg="#f86263")
                    l.pack()
    
                printButton8 = Button(newWindow3,
                                      text="next question", fg="#f86263", bg="#141414",
                                      command=MoviesAssessment4)
                printButton8.place(x=310, y=250)
            printButton8 = Button(newWindow2,
                                  text="next question", fg="#f86263", bg="#141414",
                                  command=MoviesAssessment3)
            printButton8.place(x=425, y=250)

        printButton8 = Button(newWindow1,
                              text="next question", fg="#f86263", bg="#141414",
                              command=MoviesAssessment2)
        printButton8.place(x=300, y=250)

    printButton8 = Button(newWindow,
                          text="next question", fg="#f86263", bg="#141414",
                          command=MoviesAssessment1)
    printButton8.place(x=550, y=250)

def SPORTSAssessment():
    newWindow = Toplevel(root)
    newWindow.title("SPORTS")
    newWindow.geometry("700x300")
    newWindow.configure(bg="#141414")
    newWindow.option_add('*Font', 'Impact')
    l1 = Label(newWindow, text="QUES 1 : What team owns the longest winning streak in NBA history?",
               fg="#ffcc66", bg="#141414")
    l1.pack()

    def print_selection():
        if (var.get() == 1):
            l.config(text='incorrect')
        if (var.get() == 2):
            l.config(text='incorrect')
        if (var.get() == 3):
            l.config(text='correct')
        if (var.get() == 4):
            l.config(text='incorrect')

    var = IntVar()
    c1 = Radiobutton(newWindow, text='Miami Heat  ', variable=var, value=1,
                     fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c1.pack()
    c2 = Radiobutton(newWindow, text='Chicago Bulls', variable=var,
                     value=2, fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c2.pack()
    c3 = Radiobutton(newWindow,
                     text='LA Lakers',
                     variable=var, value=3, fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c3.pack()
    c4 = Radiobutton(newWindow,
                     text='Golden State Warriors',
                     fg="#ffcc66", bg="#141414",
                     variable=var, value=4, command=print_selection)
    c4.pack()
    l = Label(newWindow, bg="#141414", width=50, text='', fg="#f86263")
    l.pack()


    def SPORTSAssessment1():
        newWindow.destroy()
        newWindow1 = Toplevel(root)
        newWindow1.title("SPORTS")
        newWindow1.geometry("700x300")
        newWindow1.configure(bg="#141414")
        newWindow1.option_add('*Font', 'Impact')
        l1 = Label(newWindow1, text="QUES 2 : Who bowled the fastest delivery ever of 100.2mph?",
                   fg="#ffcc66", bg="#141414")
        l1.pack()

        def print_selection():
            if (var.get() == 1):
                l.config(text='incorrect')
            if (var.get() == 2):
                l.config(text='correct')
            if (var.get() == 3):
                l.config(text='incorrect')
            if (var.get() == 4):
                l.config(text='incorrect')

        var = IntVar()
        c1 = Radiobutton(newWindow1, text='Brett Lee ', variable=var, value=1,
                         fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c1.pack()
        c2 = Radiobutton(newWindow1, text='Shoaib Akhtar', variable=var,
                         value=2, fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c2.pack()
        c3 = Radiobutton(newWindow1,
                         text='Shaun Tait',
                         variable=var, value=3, fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c3.pack()
        c4 = Radiobutton(newWindow1,
                         text='Jeffrey Thompson',
                         fg="#ffcc66", bg="#141414",
                         variable=var, value=4, command=print_selection)
        c4.pack()
        l = Label(newWindow1, bg="#141414", width=50, text='', fg="#f86263")
        l.pack()



        def SPORTSAssessment2():
            newWindow1.destroy()
            newWindow2 = Toplevel(root)
            newWindow2.title("SPORTS")
            newWindow2.geometry("700x300")
            newWindow2.configure(bg="#141414")
            newWindow2.option_add('*Font', 'Impact')
            l1 = Label(newWindow2, text="QUES 3 : Which country won the first ever World Cup in 1930(football)?   ",
                       fg="#ffcc66", bg="#141414")
            l1.pack()

            def print_selection():
                if (var.get() == 1):
                    l.config(text='correct')
                if (var.get() == 2):
                    l.config(text='incorrect')
                if (var.get() == 3):
                    l.config(text='incorrect')
                if (var.get() == 4):
                    l.config(text='incorrect')

            var = IntVar()
            c1 = Radiobutton(newWindow2, text='Uruguay ', variable=var, value=1,
                             fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c1.pack()
            c2 = Radiobutton(newWindow2, text='Argentina', variable=var,
                             value=2, fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c2.pack()
            c3 = Radiobutton(newWindow2,
                             text='Yugoslavia',
                             variable=var, value=3, fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c3.pack()
            c4 = Radiobutton(newWindow2,
                             text='France',
                             fg="#ffcc66", bg="#141414",
                             variable=var, value=4, command=print_selection)
            c4.pack()
            l = Label(newWindow2, bg="#141414", width=50, text='', fg="#f86263")
            l.pack()

            def SPORTSAssessment3():
                newWindow2.destroy()
                newWindow3 = Toplevel(root)
                newWindow3.title("SPORTS")
                newWindow3.geometry("700x300")
                newWindow3.configure(bg="#141414")
                newWindow3.option_add('*Font', 'Impact')
                l1 = Label(newWindow3, text="QUES 4 : In which year did player Novak Djokovic turn professional?   ",
                           fg="#ffcc66", bg="#141414")
                l1.pack()

                def print_selection():
                    if (var.get() == 1):
                        l.config(text='incorrect')
                    if (var.get() == 2):
                        l.config(text='incorrect')
                    if (var.get() == 3):
                        l.config(text='incorrect')
                    if (var.get() == 4):
                        l.config(text='correct')

                var = IntVar()
                c1 = Radiobutton(newWindow3, text='2002', variable=var, value=1,
                                 fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c1.pack()
                c2 = Radiobutton(newWindow3, text='2004', variable=var,
                                 value=2, fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c2.pack()
                c3 = Radiobutton(newWindow3,
                                 text='2007',
                                 variable=var, value=3, fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c3.pack()
                c4 = Radiobutton(newWindow3,
                                 text='2003',
                                 fg="#ffcc66", bg="#141414",
                                 variable=var, value=4, command=print_selection)
                c4.pack()
                l = Label(newWindow3, bg="#141414", width=50, text='', fg="#f86263")
                l.pack()

                def SPORTSAssessment4():
                    newWindow3.destroy()
                    newWindow4 = Toplevel(root)
                    newWindow4.title("SPORTS")
                    newWindow4.geometry("700x300")
                    newWindow4.configure(bg="#141414")
                    newWindow4.option_add('*Font', 'Impact')
                    l1 = Label(newWindow4, text="QUES 5 : In which country did the Olympics originate?   ",
                               fg="#ffcc66", bg="#141414")
                    l1.pack()

                    def print_selection():
                        if (var.get() == 1):
                            l.config(text='incorrect')
                        if (var.get() == 2):
                            l.config(text='correct')
                        if (var.get() == 3):
                            l.config(text='incorrect')
                        if (var.get() == 4):
                            l.config(text='incorrect')

                    var = IntVar()
                    c1 = Radiobutton(newWindow4, text='Germany', variable=var, value=1,
                                     fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c1.pack()
                    c2 = Radiobutton(newWindow4, text='Greece', variable=var,
                                     value=2, fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c2.pack()
                    c3 = Radiobutton(newWindow4,
                                     text='France',
                                     variable=var, value=3, fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c3.pack()
                    c4 = Radiobutton(newWindow4,
                                     text='Romania',
                                     fg="#ffcc66", bg="#141414",
                                     variable=var, value=4, command=print_selection)
                    c4.pack()
                    l = Label(newWindow4, bg="#141414", width=50, text='', fg="#f86263")
                    l.pack()


                printButton8 = Button(newWindow3,
                                      text="next question", fg="#f86263", bg="#141414",
                                      command=SPORTSAssessment4)
                printButton8.place(x=300, y=250)

            printButton8 = Button(newWindow2,
                                  text="next question", fg="#f86263", bg="#141414",
                                  command=SPORTSAssessment3)
            printButton8.place(x=300, y=250)

        printButton8 = Button(newWindow1,
                              text="next question", fg="#f86263", bg="#141414",
                              command=SPORTSAssessment2)
        printButton8.place(x=300, y=250)

    printButton8 = Button(newWindow,
                          text="next question", fg="#f86263", bg="#141414",
                          command=SPORTSAssessment1)
    printButton8.place(x=300, y=250)


def TVSERIESAssessment():
    newWindow = Toplevel(root)
    newWindow.title("TV SERIES")
    newWindow.geometry("700x300")
    newWindow.configure(bg="#141414")
    newWindow.option_add('*Font', 'Impact')
    l1 = Label(newWindow, text="QUES 1 : When were the Simpsons first released?",
               fg="#ffcc66", bg="#141414")
    l1.pack()

    def print_selection():
        if (var.get() == 1):
            l.config(text='incorrect')
        if (var.get() == 2):
            l.config(text='incorrect')
        if (var.get() == 3):
            l.config(text='correct')
        if (var.get() == 4):
            l.config(text='incorrect')

    var = IntVar()
    c1 = Radiobutton(newWindow, text='1979', variable=var, value=1,
                     fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c1.pack()
    c2 = Radiobutton(newWindow, text='1984', variable=var,
                     value=2, fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c2.pack()
    c3 = Radiobutton(newWindow,
                     text='1989',
                     variable=var, value=3, fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c3.pack()
    c4 = Radiobutton(newWindow,
                     text='1994',
                     fg="#ffcc66", bg="#141414",
                     variable=var, value=4, command=print_selection)
    c4.pack()
    l = Label(newWindow, bg="#141414", width=50, text='', fg="#f86263")
    l.pack()


    def TVSERIESAssessment1():
        newWindow.destroy()
        newWindow1 = Toplevel(root)
        newWindow1.title("TV SERIES")
        newWindow1.geometry("700x300")
        newWindow1.configure(bg="#141414")
        newWindow1.option_add('*Font', 'Impact')
        l1 = Label(newWindow1, text="QUES 1 : Game of Thrones is an adaptation of the novels of which author?",
                   fg="#ffcc66", bg="#141414")
        l1.pack()

        def print_selection():
            if (var.get() == 1):
                l.config(text='correct')
            if (var.get() == 2):
                l.config(text='incorrect')
            if (var.get() == 3):
                l.config(text='incorrect')
            if (var.get() == 4):
                l.config(text='incorrect')

        var = IntVar()
        c1 = Radiobutton(newWindow1, text='George R.R.Martin', variable=var, value=1,
                         fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c1.pack()
        c2 = Radiobutton(newWindow1, text='J.R.R.Tolkien', variable=var,
                         value=2, fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c2.pack()
        c3 = Radiobutton(newWindow1,
                         text='J.K.Rowling',
                         variable=var, value=3, fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c3.pack()
        c4 = Radiobutton(newWindow1,
                         text='C.S.Lewis',
                         fg="#ffcc66", bg="#141414",
                         variable=var, value=4, command=print_selection)
        c4.pack()
        l = Label(newWindow1, bg="#141414", width=50, text='', fg="#f86263")
        l.pack()


        def TVSERIESAssessment2():
            newWindow1.destroy()
            newWindow2 = Toplevel(root)
            newWindow2.title("TV SERIES")
            newWindow2.geometry("700x300")
            newWindow2.configure(bg="#141414")
            newWindow2.option_add('*Font', 'Impact')
            l1 = Label(newWindow2, text="QUES 3 : In Modern Family, what is the name of Gloria’s son?",
                       fg="#ffcc66", bg="#141414")
            l1.pack()

            def print_selection():
                if (var.get() == 1):
                    l.config(text='correct')
                if (var.get() == 2):
                    l.config(text='incorrect')
                if (var.get() == 3):
                    l.config(text='incorrect')
                if (var.get() == 4):
                    l.config(text='incorrect')

            var = IntVar()
            c1 = Radiobutton(newWindow2, text='Manny', variable=var, value=1,
                             fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c1.pack()
            c2 = Radiobutton(newWindow2, text='Luke', variable=var,
                             value=2, fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c2.pack()
            c3 = Radiobutton(newWindow2,
                             text='Cam',
                             variable=var, value=3, fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c3.pack()
            c4 = Radiobutton(newWindow2,
                             text='Joe',
                             fg="#ffcc66", bg="#141414",
                             variable=var, value=4, command=print_selection)
            c4.pack()
            l = Label(newWindow2, bg="#141414", width=50, text='', fg="#f86263")
            l.pack()


            def TVSERIESAssessment3():
                newWindow2.destroy()
                newWindow3 = Toplevel(root)
                newWindow3.title("TV SERIES")
                newWindow3.geometry("700x300")
                newWindow3.configure(bg="#141414")
                newWindow3.option_add('*Font', 'Impact')
                l1 = Label(newWindow3, text="QUES 4 : What is the name of Andy Samberg’s character in Brooklyn 99?",
                           fg="#ffcc66", bg="#141414")
                l1.pack()

                def print_selection():
                    if (var.get() == 1):
                        l.config(text='incorrect')
                    if (var.get() == 2):
                        l.config(text='incorrect')
                    if (var.get() == 3):
                        l.config(text='incorrect')
                    if (var.get() == 4):
                        l.config(text='correct')

                var = IntVar()
                c1 = Radiobutton(newWindow3, text='Kevin', variable=var, value=1,
                                 fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c1.pack()
                c2 = Radiobutton(newWindow3, text='Terry', variable=var,
                                 value=2, fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c2.pack()
                c3 = Radiobutton(newWindow3,
                                 text='Charles',
                                 variable=var, value=3, fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c3.pack()
                c4 = Radiobutton(newWindow3,
                                 text='Jake',
                                 fg="#ffcc66", bg="#141414",
                                 variable=var, value=4, command=print_selection)
                c4.pack()
                l = Label(newWindow3, bg="#141414", width=50, text='', fg="#f86263")
                l.pack()


                def TVSERIESAssessment4():
                    newWindow3.destroy()
                    newWindow4 = Toplevel(root)
                    newWindow4.title("TV SERIES")
                    newWindow4.geometry("700x300")
                    newWindow4.configure(bg="#141414")
                    newWindow4.option_add('*Font', 'Impact')
                    l1 = Label(newWindow4, text="QUES 5 : Which actor portrayed Walter White in Breaking Bad?",
                               fg="#ffcc66", bg="#141414")
                    l1.pack()

                    def print_selection():
                        if (var.get() == 1):
                            l.config(text='incorrect')
                        if (var.get() == 2):
                            l.config(text='correct')
                        if (var.get() == 3):
                            l.config(text='incorrect')
                        if (var.get() == 4):
                            l.config(text='incorrect')

                    var = IntVar()
                    c1 = Radiobutton(newWindow4, text=' Matthew Broderick', variable=var, value=1,
                                     fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c1.pack()
                    c2 = Radiobutton(newWindow4, text='Bryan Cranston', variable=var,
                                     value=2, fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c2.pack()
                    c3 = Radiobutton(newWindow4,
                                     text='Dean Harrick',
                                     variable=var, value=3, fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c3.pack()
                    c4 = Radiobutton(newWindow4,
                                     text='Bob Odenkirk',
                                     fg="#ffcc66", bg="#141414",
                                     variable=var, value=4, command=print_selection)
                    c4.pack()
                    l = Label(newWindow4, bg="#141414", width=50, text='', fg="#f86263")
                    l.pack()

                printButton8 = Button(newWindow3,
                                          text="next question", fg="#f86263", bg="#141414",
                                          command=TVSERIESAssessment4)
                printButton8.place(x=300, y=250)

            printButton8 = Button(newWindow2,
                                      text="next question", fg="#f86263", bg="#141414",
                                      command=TVSERIESAssessment3)
            printButton8.place(x=300, y=250)

        printButton8 = Button(newWindow1,
                                  text="next question", fg="#f86263", bg="#141414",
                                  command=TVSERIESAssessment2)
        printButton8.place(x=300, y=250)

    printButton8 = Button(newWindow,
                              text="next question", fg="#f86263", bg="#141414",
                              command=TVSERIESAssessment1)
    printButton8.place(x=300, y=250)





def medium():
    newWindow = Toplevel(root)
    newWindow.title("MEDIUM:")
    newWindow.geometry("700x500")
    newWindow.configure(bg="#141414")
    newWindow.option_add('*Font', 'Impact')
    label=Label(newWindow,
          text ="-TOPICS-",fg="#25dae9",bg="#141414", font="Impact 20",border=0)
    label.place(x=300,y=80)
    printButton1 = Button(newWindow,
                        text = "Current Affairs",fg="#25dae9",bg="#141414",
                          command=mediumCAAssessment)
    printButton1.place(x=290,y=150)
    printButton1 = Button(newWindow,
                        text = "Movies",fg="#25dae9",bg="#141414", border=0,
                          command=mediumMoviesAssessment)
    printButton1.place(x=320,y=200)
    printButton1 = Button(newWindow,
                        text = "Sports",fg="#25dae9",bg="#141414", border=0,
                          command=mediumSPORTSAssessment)
    printButton1.place(x=320,y=250)
    printButton1 = Button(newWindow,
                        text = "TV Series",fg="#25dae9",bg="#141414", border=0,
                          command=mediumTVSERIESAssessment)
    printButton1.place(x=310,y=300)

def mediumCAAssessment():
    newWindow = Toplevel(root)
    newWindow.title("CURRENTAFFAIRS")
    newWindow.geometry("1000x300")
    newWindow.configure(bg="#141414")
    newWindow.option_add('*Font', 'Impact')
    l1=Label(newWindow, text= "QUES 1 :  DRDO Industry Academia-Centre of Excellence’ (DIA-CoE) has been set up in which institution?",
             fg="#ffcc66",bg="#141414")
    l1.pack()
    def print_selection():
        if (var.get() == 1):
            l.config(text='''correct!''')
        if (var.get() == 2):
            l.config(text='''incorrect!''')
        if (var.get() == 3):
            l.config(text='''incorrect!''')
        if (var.get() == 4):
            l.config(text='''incorrect!''')
    var = IntVar()
    c1 = Radiobutton(newWindow, text='IIT Roorkee',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c1.pack()
    c2 = Radiobutton(newWindow, text=' IIT Madras',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c2.pack()
    c3 = Radiobutton(newWindow,
                     text='NIT Kozhikode',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c3.pack()
    c4 = Radiobutton(newWindow,
                     text='IISc Bengaluru',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
    c4.pack()
    l = Label(newWindow, bg="#141414", width=50, text='',fg="#f86263")
    l.pack()
    def mediumCAAssessment1():
        newWindow.destroy()
        newWindow1 = Toplevel(root)
        newWindow1.title("CURRENT AFFAIRS")
        newWindow1.geometry("1200x300")
        newWindow1.configure(bg="#141414")
        newWindow1.option_add('*Font', 'Impact')
        l1=Label(newWindow1, text= "QUES 2 : The ‘Citizenship Act’ under which citizenship is to be granted to minorities from three countries, was enacted in which year? ",
             fg="#ffcc66",bg="#141414")
        l1.pack()
        def print_selection():
            if (var.get() == 1):
                l.config(text='''incorrect!''')
            if (var.get() == 2):
                l.config(text='''correct!''')
            if (var.get() == 3):
                l.config(text='''incorrect!''')
            if (var.get() == 4):
                l.config(text='''incorrect!''')
        var = IntVar()
        c1 = Radiobutton(newWindow1, text='1947',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c1.pack()
        c2 = Radiobutton(newWindow1, text='1955',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c2.pack()
        c3 = Radiobutton(newWindow1,
                     text='1962',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c3.pack()
        c4 = Radiobutton(newWindow1,
                     text='1972',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
        c4.pack()
        l = Label(newWindow1, bg="#141414", width=50, text='',fg="#f86263")
        l.pack()
        def mediumCAAssessment2():
            newWindow1.destroy()
            newWindow2 = Toplevel(root)
            newWindow2.title("CURRENT AFFAIRS")
            newWindow2.geometry("700x300")
            newWindow2.configure(bg="#141414")
            newWindow2.option_add('*Font', 'Impact')
            l1=Label(newWindow2, text= "QUES 3 : Which country launched the ‘Middle East Green Initiative’? ",
             fg="#ffcc66",bg="#141414")
            l1.pack()
            def print_selection():
                if (var.get() == 1):
                    l.config(text='''incorrect!''')
                if (var.get() == 2):
                    l.config(text='''incorrect!''')
                if (var.get() == 3):
                    l.config(text='''correct!''')
                if (var.get() == 4):
                    l.config(text='''incorrect!''')
            var = IntVar()
            c1 = Radiobutton(newWindow2, text='Oman ',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c1.pack()
            c2 = Radiobutton(newWindow2, text='UAE',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c2.pack()
            c3 = Radiobutton(newWindow2,
                     text='Saudi Arabia',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c3.pack()
            c4 = Radiobutton(newWindow2,
                     text='Bahrain',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
            c4.pack()
            l = Label(newWindow2, bg="#141414", width=50, text='',fg="#f86263")
            l.pack()
            def mediumCAAssessment3():
                newWindow2.destroy()
                newWindow3 = Toplevel(root)
                newWindow3.title("CURRENT AFFAIRS")
                newWindow3.geometry("1000x300")
                newWindow3.configure(bg="#141414")
                newWindow3.option_add('*Font', 'Impact')
                l1=Label(newWindow3, text= "QUES 4 : How many countries are part of Mangrove Alliance for Climate (MAC), as of November 2022?",
             fg="#ffcc66",bg="#141414")
                l1.pack()
                def print_selection():
                    if (var.get() == 1):
                        l.config(text='''incorrect!''')
                    if (var.get() == 2):
                        l.config(text='''incorrect!''')
                    if (var.get() == 3):
                        l.config(text='''correct!''')
                    if (var.get() == 4):
                        l.config(text='''incorrect!''')
                var = IntVar()
                c1 = Radiobutton(newWindow3, text=' 3',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c1.pack()
                c2 = Radiobutton(newWindow3, text='5',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c2.pack()
                c3 = Radiobutton(newWindow3,
                     text='7',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c3.pack()
                c4 = Radiobutton(newWindow3,
                     text='9',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
                c4.pack()
                l = Label(newWindow3, bg="#141414", width=50, text='',fg="#f86263")
                l.pack()
                def mediumCAAssessment4():
                    newWindow3.destroy()
                    newWindow4 = Toplevel(root)
                    newWindow4.title("CURRENT AFFAIRS")
                    newWindow4.geometry("700x300")
                    newWindow4.configure(bg="#141414")
                    newWindow4.option_add('*Font', 'Impact')
                    l1=Label(newWindow4, text= "QUES 5 : Which Union Ministry launched the ‘Green Energy Open Access Portal’? ",
                    fg="#ffcc66",bg="#141414")
                    l1.pack()
                    def print_selection():
                        if (var.get() == 1):
                            l.config(text='''incorrect!''')
                        if (var.get() == 2):
                            l.config(text='''incorrect!''')
                        if (var.get() == 3):
                            l.config(text='''correct!''')
                        if (var.get() == 4):
                            l.config(text='''incorrect!''')
                    var = IntVar()
                    c1 = Radiobutton(newWindow4, text='Ministry of Home Affairs',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c1.pack()
                    c2 = Radiobutton(newWindow4, text=' Ministry of Environment, Forest and Climate Change',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c2.pack()
                    c3 = Radiobutton(newWindow4,
                     text='Ministry of Power',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c3.pack()
                    c4 = Radiobutton(newWindow4,
                     text='Ministry of Rural Development',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
                    c4.pack()
                    l = Label(newWindow4, bg="#141414", width=50,fg="#f86263")
                    l.pack()
    
                printButton8 = Button(newWindow3,
                                      text="next question", fg="#f86263", bg="#141414",
                                      command=mediumCAAssessment4)
                printButton8.place(x=480, y=250)
            printButton8 = Button(newWindow2,
                                  text="next question", fg="#f86263", bg="#141414",
                                  command=mediumCAAssessment3)
            printButton8.place(x=310, y=250)

        printButton8 = Button(newWindow1,
                              text="next question", fg="#f86263", bg="#141414",
                              command=mediumCAAssessment2)
        printButton8.place(x=550, y=250)

    printButton8 = Button(newWindow,
                          text="next question", fg="#f86263", bg="#141414",
                          command=mediumCAAssessment1)
    printButton8.place(x=450, y=250)

def mediumMoviesAssessment():
    newWindow = Toplevel(root)
    newWindow.title("MOVIES")
    newWindow.geometry("700x300")
    newWindow.configure(bg="#141414")
    newWindow.option_add('*Font', 'Impact')
    l1=Label(newWindow, text= "QUES 1 :  Which was the first Indian movie to win an Oscar?",
             fg="#ffcc66",bg="#141414")
    l1.pack()
    def print_selection():
        if (var.get() == 1):
            l.config(text='''incorrect!''')
        if (var.get() == 2):
            l.config(text='''incorrect!''')
        if (var.get() == 3):
            l.config(text='''correct!''')
        if (var.get() == 4):
            l.config(text='''incorrect!''')
    var = IntVar()
    c1 = Radiobutton(newWindow, text='Slumdog Millionaire',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c1.pack()
    c2 = Radiobutton(newWindow, text=' Mother India',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c2.pack()
    c3 = Radiobutton(newWindow,
                     text='Gandhi',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c3.pack()
    c4 = Radiobutton(newWindow,
                     text='None of these',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
    c4.pack()
    l = Label(newWindow, bg="#141414", width=50, text='',fg="#f86263")
    l.pack()
    def mediumMoviesAssessment1():
        newWindow.destroy()
        newWindow1 = Toplevel(root)
        newWindow1.title("CURRENT AFFAIRS")
        newWindow1.geometry("700x300")
        newWindow1.configure(bg="#141414")
        newWindow1.option_add('*Font', 'Impact')
        l1=Label(newWindow1, text= "QUES 2 : Which director has directed the most movies in India?",
             fg="#ffcc66",bg="#141414")
        l1.pack()
        def print_selection():
            if (var.get() == 1):
                l.config(text='''incorrect!''')
            if (var.get() == 2):
                l.config(text='''incorrect!''')
            if (var.get() == 3):
                l.config(text='''correct!''')
            if (var.get() == 4):
                l.config(text='''incorrect!''')
        var = IntVar()
        c1 = Radiobutton(newWindow1, text='Aditya Chopra',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c1.pack()
        c2 = Radiobutton(newWindow1, text='Rohit Shetty',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c2.pack()
        c3 = Radiobutton(newWindow1,
                     text='Rajkumar Hirani',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c3.pack()
        c4 = Radiobutton(newWindow1,
                     text=' None of these',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
        c4.pack()
        l = Label(newWindow1, bg="#141414", width=50, text='',fg="#f86263")
        l.pack()
        def mediumMoviesAssessment2():
            newWindow1.destroy()
            newWindow2 = Toplevel(root)
            newWindow2.title("MOVIES")
            newWindow2.geometry("700x300")
            newWindow2.configure(bg="#141414")
            newWindow2.option_add('*Font', 'Impact')
            l1=Label(newWindow2, text= "QUES 3 : Which film won the award for best film at the 63rd Filmfare Award held 2018? ",
             fg="#ffcc66",bg="#141414")
            l1.pack()
            def print_selection():
                if (var.get() == 1):
                    l.config(text='''incorrect!''')
                if (var.get() == 2):
                    l.config(text='''correct!''')
                if (var.get() == 3):
                    l.config(text='''incorrect!''')
                if (var.get() == 4):
                    l.config(text='''incorrect!''')
            var = IntVar()
            c1 = Radiobutton(newWindow2, text=' Badrinath Ki Dulhania ',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c1.pack()
            c2 = Radiobutton(newWindow2, text='Hindi Medium',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c2.pack()
            c3 = Radiobutton(newWindow2,
                     text='Bareilly Ki Barfi',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c3.pack()
            c4 = Radiobutton(newWindow2,
                     text='None of these',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
            c4.pack()
            l = Label(newWindow2, bg="#141414", width=50, text='',fg="#f86263")
            l.pack()
            def mediumMoviesAssessment3():
                newWindow2.destroy()
                newWindow3 = Toplevel(root)
                newWindow3.title("MOVIES")
                newWindow3.geometry("700x300")
                newWindow3.configure(bg="#141414")
                newWindow3.option_add('*Font', 'Impact')
                l1=Label(newWindow3, text= "QUES 4 : Which was the first 3D movie in India?",
             fg="#ffcc66",bg="#141414")
                l1.pack()
                def print_selection():
                    if (var.get() == 1):
                        l.config(text='''incorrect!''')
                    if (var.get() == 2):
                        l.config(text='''correct!''')
                    if (var.get() == 3):
                        l.config(text='''incorrect!''')
                    if (var.get() == 4):
                        l.config(text='''incorrect!''')
                var = IntVar()
                c1 = Radiobutton(newWindow3, text=' Chhota Chetan',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c1.pack()
                c2 = Radiobutton(newWindow3, text='My Dear Kuttichathan',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c2.pack()
                c3 = Radiobutton(newWindow3,
                     text='Roadside Romeo',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c3.pack()
                c4 = Radiobutton(newWindow3,
                     text='None of these',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
                c4.pack()
                l = Label(newWindow3, bg="#141414", width=50, text='',fg="#f86263")
                l.pack()
                def mediumMoviesAssessment4():
                    newWindow3.destroy()
                    newWindow4 = Toplevel(root)
                    newWindow4.title("MOVIES")
                    newWindow4.geometry("1000x300")
                    newWindow4.configure(bg="#141414")
                    newWindow4.option_add('*Font', 'Impact')
                    l1=Label(newWindow4, text= "QUES 5 : Which of these Indian movies did not get nominated for Best Foreign Language Film at the Oscars?",
                    fg="#ffcc66",bg="#141414")
                    l1.pack()
                    def print_selection():
                        if (var.get() == 1):
                            l.config(text='''correct!''')
                        if (var.get() == 2):
                            l.config(text='''incorrect!''')
                        if (var.get() == 3):
                            l.config(text='''incorrect!''')
                        if (var.get() == 4):
                            l.config(text='''incorrect!''')
                    var = IntVar()
                    c1 = Radiobutton(newWindow4, text='Mother India',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c1.pack()
                    c2 = Radiobutton(newWindow4, text=' Slumdog Millionaire',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c2.pack()
                    c3 = Radiobutton(newWindow4,
                     text='  Lagaan',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c3.pack()
                    c4 = Radiobutton(newWindow4,
                     text='None of these',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
                    c4.pack()
                    l = Label(newWindow4, bg="#141414", width=50,fg="#f86263")
                    l.pack()
    
                printButton8 = Button(newWindow3,
                                      text="next question", fg="#f86263", bg="#141414",
                                      command=mediumMoviesAssessment4)
                printButton8.place(x=300, y=250)
            printButton8 = Button(newWindow2,
                                  text="next question", fg="#f86263", bg="#141414",
                                  command=mediumMoviesAssessment3)
            printButton8.place(x=300, y=250)

        printButton8 = Button(newWindow1,
                              text="next question", fg="#f86263", bg="#141414",
                              command=mediumMoviesAssessment2)
        printButton8.place(x=300, y=250)

    printButton8 = Button(newWindow,
                          text="next question", fg="#f86263", bg="#141414",
                          command=mediumMoviesAssessment1)
    printButton8.place(x=300, y=250)




def mediumSPORTSAssessment():
    newWindow = Toplevel(root)
    newWindow.title("SPORTS")
    newWindow.geometry("700x300")
    newWindow.configure(bg="#141414")
    newWindow.option_add('*Font', 'Impact')
    l1 = Label(newWindow, text="QUES 1 : Who was the youngest player to score 10,000 points in the NBA?",
               fg="#ffcc66", bg="#141414")
    l1.pack()

    def print_selection():
        if (var.get() == 1):
            l.config(text='incorrect')
        if (var.get() == 2):
            l.config(text='correct')
        if (var.get() == 3):
            l.config(text='incorrect')
        if (var.get() == 4):
            l.config(text='incorrect')

    var = IntVar()
    c1 = Radiobutton(newWindow, text='Wilt Chamberlain  ', variable=var, value=1,
                     fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c1.pack()
    c2 = Radiobutton(newWindow, text='LeBron James', variable=var,
                     value=2, fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c2.pack()
    c3 = Radiobutton(newWindow,
                     text='Kobe Bryant',
                     variable=var, value=3, fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c3.pack()
    c4 = Radiobutton(newWindow,
                     text='Michael Jordan',
                     fg="#ffcc66", bg="#141414",
                     variable=var, value=4, command=print_selection)
    c4.pack()
    l = Label(newWindow, bg="#141414", width=50, text='', fg="#f86263")
    l.pack()


    def mediumSPORTSAssessment1():
        newWindow.destroy()
        newWindow1 = Toplevel(root)
        newWindow1.title("SPORTS")
        newWindow1.geometry("900x300")
        newWindow1.configure(bg="#141414")
        newWindow1.option_add('*Font', 'Impact')
        l1 = Label(newWindow1, text="QUES 2 : Who was the first batsman to score more than 150 runs in a one-day international match?",
                   fg="#ffcc66", bg="#141414")
        l1.pack()

        def print_selection():
            if (var.get() == 1):
                l.config(text='correct')
            if (var.get() == 2):
                l.config(text='incorrect')
            if (var.get() == 3):
                l.config(text='incorrect')
            if (var.get() == 4):
                l.config(text='incorrect')

        var = IntVar()
        c1 = Radiobutton(newWindow1, text='Glenn Turner', variable=var, value=1,
                         fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c1.pack()
        c2 = Radiobutton(newWindow1, text='David Llyod', variable=var,
                         value=2, fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c2.pack()
        c3 = Radiobutton(newWindow1,
                         text='Vivian Richards',
                         variable=var, value=3, fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c3.pack()
        c4 = Radiobutton(newWindow1,
                         text='Kapil Dev',
                         fg="#ffcc66", bg="#141414",
                         variable=var, value=4, command=print_selection)
        c4.pack()
        l = Label(newWindow1, bg="#141414", width=50, text='', fg="#f86263")
        l.pack()


        def mediumSPORTSAssessment2():
            newWindow1.destroy()
            newWindow2 = Toplevel(root)
            newWindow2.title("SPORTS")
            newWindow2.geometry("700x300")
            newWindow2.configure(bg="#141414")
            newWindow2.option_add('*Font', 'Impact')
            l1 = Label(newWindow2,
                       text="QUES 3 : Only one player has won the Euros as a player and manager.Who is it?",
                       fg="#ffcc66", bg="#141414")
            l1.pack()

            def print_selection():
                if (var.get() == 1):
                    l.config(text='incorrect')
                if (var.get() == 2):
                    l.config(text='incorrect')
                if (var.get() == 3):
                    l.config(text='correct')
                if (var.get() == 4):
                    l.config(text='incorrect')

            var = IntVar()
            c1 = Radiobutton(newWindow2, text='Didier Deschamps', variable=var, value=1,
                             fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c1.pack()
            c2 = Radiobutton(newWindow2, text='Ronald Koeman', variable=var,
                             value=2, fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c2.pack()
            c3 = Radiobutton(newWindow2,
                             text='Berti Vogts',
                             variable=var, value=3, fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c3.pack()
            c4 = Radiobutton(newWindow2,
                             text='Roberto Mancini',
                             fg="#ffcc66", bg="#141414",
                             variable=var, value=4, command=print_selection)
            c4.pack()
            l = Label(newWindow2, bg="#141414", width=50, text='', fg="#f86263")
            l.pack()


            def mediumSPORTSAssessment3():
                newWindow2.destroy()
                newWindow3 = Toplevel(root)
                newWindow3.title("SPORTS")
                newWindow3.geometry("900x300")
                newWindow3.configure(bg="#141414")
                newWindow3.option_add('*Font', 'Impact')
                l1 = Label(newWindow3,
                           text="QUES 4 : Which tennis player released an autobiography entitled ‘You Cannot Be Serious’?",
                           fg="#ffcc66", bg="#141414")
                l1.pack()

                def print_selection():
                    if (var.get() == 1):
                        l.config(text='incorrect')
                    if (var.get() == 2):
                        l.config(text='incorrect')
                    if (var.get() == 3):
                        l.config(text='incorrect')
                    if (var.get() == 4):
                        l.config(text='correct')

                var = IntVar()
                c1 = Radiobutton(newWindow3, text='Andre Agassi', variable=var, value=1,
                                 fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c1.pack()
                c2 = Radiobutton(newWindow3, text='Martina Hingis', variable=var,
                                 value=2, fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c2.pack()
                c3 = Radiobutton(newWindow3,
                                 text='Monica Seles',
                                 variable=var, value=3, fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c3.pack()
                c4 = Radiobutton(newWindow3,
                                 text='John McEnroe',
                                 fg="#ffcc66", bg="#141414",
                                 variable=var, value=4, command=print_selection)
                c4.pack()
                l = Label(newWindow3, bg="#141414", width=50, text='', fg="#f86263")
                l.pack()


                def mediumSPORTSAssessment4():
                    newWindow3.destroy()
                    newWindow4 = Toplevel(root)
                    newWindow4.title("SPORTS")
                    newWindow4.geometry("700x300")
                    newWindow4.configure(bg="#141414")
                    newWindow4.option_add('*Font', 'Impact')
                    l1 = Label(newWindow4,
                               text="QUES 5 : What year did the NBA 'Dream Team' participate in the Olympics?",
                               fg="#ffcc66", bg="#141414")
                    l1.pack()

                    def print_selection():
                        if (var.get() == 1):
                            l.config(text='correct')
                        if (var.get() == 2):
                            l.config(text='incorrect')
                        if (var.get() == 3):
                            l.config(text='incorrect')
                        if (var.get() == 4):
                            l.config(text='incorrect')

                    var = IntVar()
                    c1 = Radiobutton(newWindow4, text='1992', variable=var, value=1,
                                     fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c1.pack()
                    c2 = Radiobutton(newWindow4, text='1995', variable=var,
                                     value=2, fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c2.pack()
                    c3 = Radiobutton(newWindow4,
                                     text='1999',
                                     variable=var, value=3, fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c3.pack()
                    c4 = Radiobutton(newWindow4,
                                     text='2001',
                                     fg="#ffcc66", bg="#141414",
                                     variable=var, value=4, command=print_selection)
                    c4.pack()
                    l = Label(newWindow4, bg="#141414", width=50, text='', fg="#f86263")
                    l.pack()


                printButton8 = Button(newWindow3,
                                      text="next question", fg="#f86263", bg="#141414",
                                      command=mediumSPORTSAssessment4)
                printButton8.place(x=400, y=250)

            printButton8 = Button(newWindow2,
                                  text="next question", fg="#f86263", bg="#141414",
                                  command=mediumSPORTSAssessment3)
            printButton8.place(x=300, y=250)

        printButton8 = Button(newWindow1,
                              text="next question", fg="#f86263", bg="#141414",
                              command=mediumSPORTSAssessment2)
        printButton8.place(x=400, y=250)

    printButton8 = Button(newWindow,
                          text="next question", fg="#f86263", bg="#141414",
                          command=mediumSPORTSAssessment1)
    printButton8.place(x=300, y=250)


def mediumTVSERIESAssessment():
    newWindow = Toplevel(root)
    newWindow.title("TV SERIES")
    newWindow.geometry("900x300")
    newWindow.configure(bg="#141414")
    newWindow.option_add('*Font', 'Impact')
    l1 = Label(newWindow, text="QUES 1 : Which Game of Thrones star was nominated for an Emmy for every single season?",
               fg="#ffcc66", bg="#141414")
    l1.pack()

    def print_selection():
        if (var.get() == 1):
            l.config(text='incorrect')
        if (var.get() == 2):
            l.config(text='correct')
        if (var.get() == 3):
            l.config(text='incorrect')
        if (var.get() == 4):
            l.config(text='incorrect')

    var = IntVar()
    c1 = Radiobutton(newWindow, text='Emilia Clarke', variable=var, value=1,
                     fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c1.pack()
    c2 = Radiobutton(newWindow, text='Peter Dinklage', variable=var,
                     value=2, fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c2.pack()
    c3 = Radiobutton(newWindow,
                     text='Lena Headey',
                     variable=var, value=3, fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c3.pack()
    c4 = Radiobutton(newWindow,
                     text='Jack Gleeson',
                     fg="#ffcc66", bg="#141414",
                     variable=var, value=4, command=print_selection)
    c4.pack()
    l = Label(newWindow, bg="#141414", width=50, text='', fg="#f86263")
    l.pack()


    def mediumTVSERIESAssessment1():
        newWindow.destroy()
        newWindow1 = Toplevel(root)
        newWindow1.title("TV SERIES")
        newWindow1.geometry("900x300")
        newWindow1.configure(bg="#141414")
        newWindow1.option_add('*Font', 'Impact')
        l1 = Label(newWindow1, text="QUES 2 : What is the name of the theory that got Amy and Sheldon to win the Nobel Prize in Big Bang Theory?",
                   fg="#ffcc66", bg="#141414")
        l1.pack()

        def print_selection():
            if (var.get() == 1):
                l.config(text='correct')
            if (var.get() == 2):
                l.config(text='incorrect')
            if (var.get() == 3):
                l.config(text='incorrect')
            if (var.get() == 4):
                l.config(text='incorrect')

        var = IntVar()
        c1 = Radiobutton(newWindow1, text='Super Asymmetry', variable=var, value=1,
                         fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c1.pack()
        c2 = Radiobutton(newWindow1, text='String Theory', variable=var,
                         value=2, fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c2.pack()
        c3 = Radiobutton(newWindow1,
                         text='Dark Matter Theory',
                         variable=var, value=3, fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c3.pack()
        c4 = Radiobutton(newWindow1,
                         text='Theoretical discovery in physical cosmology',
                         fg="#ffcc66", bg="#141414",
                         variable=var, value=4, command=print_selection)
        c4.pack()
        l = Label(newWindow1, bg="#141414", width=50, text='', fg="#f86263")
        l.pack()


        def mediumTVSERIESAssessment2():
            newWindow1.destroy()
            newWindow2 = Toplevel(root)
            newWindow2.title("TV SERIES")
            newWindow2.geometry("700x300")
            newWindow2.configure(bg="#141414")
            newWindow2.option_add('*Font', 'Impact')
            l1 = Label(newWindow2,
                       text="QUES 3 : On which network was “Lost” originally aired?",
                       fg="#ffcc66", bg="#141414")
            l1.pack()

            def print_selection():
                if (var.get() == 1):
                    l.config(text='incorrect')
                if (var.get() == 2):
                    l.config(text='incorrect')
                if (var.get() == 3):
                    l.config(text='correct')
                if (var.get() == 4):
                    l.config(text='incorrect')

            var = IntVar()
            c1 = Radiobutton(newWindow2, text='NBC', variable=var, value=1,
                             fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c1.pack()
            c2 = Radiobutton(newWindow2, text='CBS', variable=var,
                             value=2, fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c2.pack()
            c3 = Radiobutton(newWindow2,
                             text='ABC',
                             variable=var, value=3, fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c3.pack()
            c4 = Radiobutton(newWindow2,
                             text='HBO',
                             fg="#ffcc66", bg="#141414",
                             variable=var, value=4, command=print_selection)
            c4.pack()
            l = Label(newWindow2, bg="#141414", width=50, text='', fg="#f86263")
            l.pack()


            def mediumTVSERIESAssessment3():
                newWindow2.destroy()
                newWindow3 = Toplevel(root)
                newWindow3.title("TV SERIES")
                newWindow3.geometry("1000x300")
                newWindow3.configure(bg="#141414")
                newWindow3.option_add('*Font', 'Impact')
                l1 = Label(newWindow3,
                           text="QUES 4 : Which American post-apocalyptic science fiction drama television series was developed by Jason Rothenberg?",
                           fg="#ffcc66", bg="#141414")
                l1.pack()

                def print_selection():
                    if (var.get() == 1):
                        l.config(text='incorrect')
                    if (var.get() == 2):
                        l.config(text='incorrect')
                    if (var.get() == 3):
                        l.config(text='incorrect')
                    if (var.get() == 4):
                        l.config(text='correct')

                var = IntVar()
                c1 = Radiobutton(newWindow3, text='Westworld', variable=var, value=1,
                                 fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c1.pack()
                c2 = Radiobutton(newWindow3, text='The Walking Dead', variable=var,
                                 value=2, fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c2.pack()
                c3 = Radiobutton(newWindow3,
                                 text='Salvation',
                                 variable=var, value=3, fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c3.pack()
                c4 = Radiobutton(newWindow3,
                                 text='The 100',
                                 fg="#ffcc66", bg="#141414",
                                 variable=var, value=4, command=print_selection)
                c4.pack()
                l = Label(newWindow3, bg="#141414", width=50, fg="#f86263")
                l.pack()


                def mediumTVSERIESAssessment4():
                    newWindow3.destroy()
                    newWindow4 = Toplevel(root)
                    newWindow4.title("TV SERIES")
                    newWindow4.geometry("700x300")
                    newWindow4.configure(bg="#141414")
                    newWindow4.option_add('*Font', 'Impact')
                    l1 = Label(newWindow4,
                               text="QUES 5 : How many seasons of the Office UK are there?",
                               fg="#ffcc66", bg="#141414")
                    l1.pack()

                    def print_selection():
                        if (var.get() == 1):
                            l.config(text='correct')
                        if (var.get() == 2):
                            l.config(text='incorrect')
                        if (var.get() == 3):
                            l.config(text='incorrect')
                        if (var.get() == 4):
                            l.config(text='incorrect')

                    var = IntVar()
                    c1 = Radiobutton(newWindow4, text='Two', variable=var, value=1,
                                     fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c1.pack()
                    c2 = Radiobutton(newWindow4, text='Four', variable=var,
                                     value=2, fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c2.pack()
                    c3 = Radiobutton(newWindow4,
                                     text='One',
                                     variable=var, value=3, fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c3.pack()
                    c4 = Radiobutton(newWindow4,
                                     text='Three',
                                     fg="#ffcc66", bg="#141414",
                                     variable=var, value=4, command=print_selection)
                    c4.pack()
                    l = Label(newWindow4, bg="#141414", width=50, text='', fg="#f86263")
                    l.pack()

                printButton8 = Button(newWindow3,
                                      text="next question", fg="#f86263", bg="#141414",
                                      command=mediumTVSERIESAssessment4)
                printButton8.place(x=450, y=250)

            printButton8 = Button(newWindow2,
                                  text="next question", fg="#f86263", bg="#141414",
                                  command=mediumTVSERIESAssessment3)
            printButton8.place(x=300, y=250)

        printButton8 = Button(newWindow1,
                              text="next question", fg="#f86263", bg="#141414",
                              command=mediumTVSERIESAssessment2)
        printButton8.place(x=400, y=250)

    printButton8 = Button(newWindow,
                          text="next question", fg="#f86263", bg="#141414",
                          command=mediumTVSERIESAssessment1)
    printButton8.place(x=400, y=250)


def hard():
    newWindow = Toplevel(root)
    newWindow.title("HARD:")
    newWindow.geometry("700x500")
    newWindow.configure(bg="#141414")
    newWindow.option_add('*Font', 'Impact')
    label = Label(newWindow,
                  text="-TOPICS-", fg="#f86263", bg="#141414", font="Impact 20", border=0)
    label.place(x=300, y=80)
    printButton1 = Button(newWindow,
                          text="Current Affairs", fg="#f86263", bg="#141414", border=0, command=hardCAAssessment)
    printButton1.place(x=290, y=150)
    printButton1 = Button(newWindow,
                          text="Movies", fg="#f86263", bg="#141414", border=0, command=hardMoviesAssessment)
    printButton1.place(x=320, y=200)
    printButton1 = Button(newWindow,
                          text="Sports", fg="#f86263", bg="#141414", border=0, command=hardSPORTSAssessment)
    printButton1.place(x=320, y=250)
    printButton1 = Button(newWindow,
                          text="TV Series", fg="#f86263", bg="#141414", border=0, command=hardTVSERIESAssessment)
    printButton1.place(x=310, y=300)

def hardCAAssessment():
    newWindow = Toplevel(root)
    newWindow.title("CURRENTAFFAIRS")
    newWindow.geometry("1000x300")
    newWindow.configure(bg="#141414")
    newWindow.option_add('*Font', 'Impact')
    l1=Label(newWindow, text= "QUES 1 :  The Barents Sea, which was seen in the news recently, is located along the coasts of which two countries?",
             fg="#ffcc66",bg="#141414")
    l1.pack()
    def print_selection():
        if (var.get() == 1):
            l.config(text='''incorrect!''')
        if (var.get() == 2):
            l.config(text='''correct!''')
        if (var.get() == 3):
            l.config(text='''incorrect!''')
        if (var.get() == 4):
            l.config(text='''incorrect!''')
    var = IntVar()
    c1 = Radiobutton(newWindow, text=' Russia-Ukraine',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c1.pack()
    c2 = Radiobutton(newWindow, text='Russia-Norway ',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c2.pack()
    c3 = Radiobutton(newWindow,
                     text=' Russia-Poland',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c3.pack()
    c4 = Radiobutton(newWindow,
                     text='Russia-Belarus',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
    c4.pack()
    l = Label(newWindow, bg="#141414", width=50, text='',fg="#f86263")
    l.pack()
    def hardCAAssessment1():
        newWindow.destroy()
        newWindow1 = Toplevel(root)
        newWindow1.title("CURRENT AFFAIRS")
        newWindow1.geometry("1000x300")
        newWindow1.configure(bg="#141414")
        newWindow1.option_add('*Font', 'Impact')
        l1=Label(newWindow1, text= "QUES 2 : ‘NotPetya’ and ‘HermeticWiper’ which were seen in the news recently, are associated with which field?",
             fg="#ffcc66",bg="#141414")
        l1.pack()
        def print_selection():
            if (var.get() == 1):
                l.config(text='''incorrect!''')
            if (var.get() == 2):
                l.config(text='''correct!''')
            if (var.get() == 3):
                l.config(text='''incorrect!''')
            if (var.get() == 4):
                l.config(text='''incorrect!''')
        var = IntVar()
        c1 = Radiobutton(newWindow1, text='Agriculture',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c1.pack()
        c2 = Radiobutton(newWindow1, text='Cyber-security',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c2.pack()
        c3 = Radiobutton(newWindow1,
                     text='Crypto-currency',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c3.pack()
        c4 = Radiobutton(newWindow1,
                     text=' Defence Equipment',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
        c4.pack()
        l = Label(newWindow1, bg="#141414", width=50, text='',fg="#f86263")
        l.pack()
        def hardCAAssessment2():
            newWindow1.destroy()
            newWindow2 = Toplevel(root)
            newWindow2.title("CURRENT AFFAIRS")
            newWindow2.geometry("700x300")
            newWindow2.configure(bg="#141414")
            newWindow2.option_add('*Font', 'Impact')
            l1=Label(newWindow2, text= "QUES 3 : ‘Stonehenge’ is a prehistoric monument, located in which country?",
             fg="#ffcc66",bg="#141414")
            l1.pack()
            def print_selection():
                if (var.get() == 1):
                    l.config(text='''incorrect!''')
                if (var.get() == 2):
                    l.config(text='''incorrect!''')
                if (var.get() == 3):
                    l.config(text='''correct!''')
                if (var.get() == 4):
                    l.config(text='''incorrect!''')
            var = IntVar()
            c1 = Radiobutton(newWindow2, text='USA',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c1.pack()
            c2 = Radiobutton(newWindow2, text='Greece',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c2.pack()
            c3 = Radiobutton(newWindow2,
                     text='England',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c3.pack()
            c4 = Radiobutton(newWindow2,
                     text='Japan',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
            c4.pack()
            l = Label(newWindow2, bg="#141414", width=50, text='',fg="#f86263")
            l.pack()
            def hardCAAssessment3():
                newWindow2.destroy()
                newWindow3 = Toplevel(root)
                newWindow3.title("CURRENT AFFAIRS")
                newWindow3.geometry("700x300")
                newWindow3.configure(bg="#141414")
                newWindow3.option_add('*Font', 'Impact')
                l1=Label(newWindow3, text= "QUES 4 : Yoon Suk-yeol is the New President of which country?",
             fg="#ffcc66",bg="#141414")
                l1.pack()
                def print_selection():
                    if (var.get() == 1):
                        l.config(text='''incorrect!''')
                    if (var.get() == 2):
                        l.config(text='''correct!''')
                    if (var.get() == 3):
                        l.config(text='''incorrect!''')
                    if (var.get() == 4):
                        l.config(text='''incorrect!''')
                var = IntVar()
                c1 = Radiobutton(newWindow3, text='Singapore ',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c1.pack()
                c2 = Radiobutton(newWindow3, text='South Korea',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c2.pack()
                c3 = Radiobutton(newWindow3,
                     text='Taiwan',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c3.pack()
                c4 = Radiobutton(newWindow3,
                     text='Philippines',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
                c4.pack()
                l = Label(newWindow3, bg="#141414", width=50, text='',fg="#f86263")
                l.pack()
                def hardCAAssessment4():
                    newWindow3.destroy()
                    newWindow4 = Toplevel(root)
                    newWindow4.title("CURRENT AFFAIRS")
                    newWindow4.geometry("900x300")
                    newWindow4.configure(bg="#141414")
                    newWindow4.option_add('*Font', 'Impact')
                    l1=Label(newWindow4, text= "QUES 5 : What is the revised Interest rate on Employees’ Provident Fund Deposits for 2021-22?",
                    fg="#ffcc66",bg="#141414")
                    l1.pack()
                    def print_selection():
                        if (var.get() == 1):
                            l.config(text='''incorrect!''')
                        if (var.get() == 2):
                            l.config(text='''correct!''')
                        if (var.get() == 3):
                            l.config(text='''incorrect!''')
                        if (var.get() == 4):
                            l.config(text='''incorrect!''')
                    var = IntVar()
                    c1 = Radiobutton(newWindow4, text='9%',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c1.pack()
                    c2 = Radiobutton(newWindow4, text='8.1% ',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c2.pack()
                    c3 = Radiobutton(newWindow4,
                     text='8% ',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c3.pack()
                    c4 = Radiobutton(newWindow4,
                     text='7.6% ',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
                    c4.pack()
                    l = Label(newWindow4, bg="#141414", width=50,fg="#f86263")
                    l.pack()
    
                printButton8 = Button(newWindow3,
                                      text="next question", fg="#f86263", bg="#141414",
                                      command=hardCAAssessment4)
                printButton8.place(x=300, y=250)
            printButton8 = Button(newWindow2,
                                  text="next question", fg="#f86263", bg="#141414",
                                  command=hardCAAssessment3)
            printButton8.place(x=300, y=250)

        printButton8 = Button(newWindow1,
                              text="next question", fg="#f86263", bg="#141414",
                              command=hardCAAssessment2)
        printButton8.place(x=450, y=250)

    printButton8 = Button(newWindow,
                          text="next question", fg="#f86263", bg="#141414",
                          command=hardCAAssessment1)
    printButton8.place(x=450, y=250)


def hardMoviesAssessment():
    newWindow = Toplevel(root)
    newWindow.title("MOVIES")
    newWindow.geometry("700x300")
    newWindow.configure(bg="#141414")
    newWindow.option_add('*Font', 'Impact')
    l1=Label(newWindow, text= "QUES 1 :  How many times AR Rahman was nominated for Oscar?",
             fg="#ffcc66",bg="#141414")
    l1.pack()
    def print_selection():
        if (var.get() == 1):
            l.config(text='''incorrect!''')
        if (var.get() == 2):
            l.config(text='''incorrect!''')
        if (var.get() == 3):
            l.config(text='''correct!''')
        if (var.get() == 4):
            l.config(text='''incorrect!''')
    var = IntVar()
    c1 = Radiobutton(newWindow, text='4 ',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c1.pack()
    c2 = Radiobutton(newWindow, text=' 1',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c2.pack()
    c3 = Radiobutton(newWindow,
                     text=' 2',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
    c3.pack()
    c4 = Radiobutton(newWindow,
                     text='None of these',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
    c4.pack()
    l = Label(newWindow, bg="#141414", width=50, text='',fg="#f86263")
    l.pack()
    def hardMoviesAssessment1():
        newWindow.destroy()
        newWindow1 = Toplevel(root)
        newWindow1.title("MOVIES")
        newWindow1.geometry("700x300")
        newWindow1.configure(bg="#141414")
        newWindow1.option_add('*Font', 'Impact')
        l1=Label(newWindow1, text= "QUES 2 : Who is known as the Father of Indian cinema?",
             fg="#ffcc66",bg="#141414")
        l1.pack()
        def print_selection():
            if (var.get() == 1):
                l.config(text='''correct!''')
            if (var.get() == 2):
                l.config(text='''incorrect!''')
            if (var.get() == 3):
                l.config(text='''incorrect!''')
            if (var.get() == 4):
                l.config(text='''incorrect!''')
        var = IntVar()
        c1 = Radiobutton(newWindow1, text='Dhundiraj Govind Phalke',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c1.pack()
        c2 = Radiobutton(newWindow1, text='Charan Singh',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c2.pack()
        c3 = Radiobutton(newWindow1,
                     text='Raja Lalith Rai',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
        c3.pack()
        c4 = Radiobutton(newWindow1,
                     text='Balram Naidu ',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
        c4.pack()
        l = Label(newWindow1, bg="#141414", width=50, text='',fg="#f86263")
        l.pack()
        def hardMoviesAssessment2():
            newWindow1.destroy()
            newWindow2 = Toplevel(root)
            newWindow2.title("MOVIES")
            newWindow2.geometry("700x300")
            newWindow2.configure(bg="#141414")
            newWindow2.option_add('*Font', 'Impact')
            l1=Label(newWindow2, text= "QUES 3 : Which is the highest grossing Indian film ever?",
             fg="#ffcc66",bg="#141414")
            l1.pack()
            def print_selection():
                if (var.get() == 1):
                    l.config(text='''incorrect!''')
                if (var.get() == 2):
                    l.config(text='''incorrect!''')
                if (var.get() == 3):
                    l.config(text='''correct!''')
                if (var.get() == 4):
                    l.config(text='''incorrect!''')
            var = IntVar()
            c1 = Radiobutton(newWindow2, text='Bajrangi Bhaijaan',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c1.pack()
            c2 = Radiobutton(newWindow2, text='PK',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c2.pack()
            c3 = Radiobutton(newWindow2,
                     text='Dangal',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
            c3.pack()
            c4 = Radiobutton(newWindow2,
                     text='None of these',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
            c4.pack()
            l = Label(newWindow2, bg="#141414", width=50, text='',fg="#f86263")
            l.pack()
            def hardMoviesAssessment3():
                newWindow2.destroy()
                newWindow3 = Toplevel(root)
                newWindow3.title("MOVIES")
                newWindow3.geometry("700x300")
                newWindow3.configure(bg="#141414")
                newWindow3.option_add('*Font', 'Impact')
                l1=Label(newWindow3, text= "QUES 4 : Which was the first Color movie in India?",
             fg="#ffcc66",bg="#141414")
                l1.pack()
                def print_selection():
                    if (var.get() == 1):
                        l.config(text='''correct!''')
                    if (var.get() == 2):
                        l.config(text='''incorrect!''')
                    if (var.get() == 3):
                        l.config(text='''incorrect!''')
                    if (var.get() == 4):
                        l.config(text='''incorrect!''')
                var = IntVar()
                c1 = Radiobutton(newWindow3, text=' Kisan Kanya',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c1.pack()
                c2 = Radiobutton(newWindow3, text='Alam Ara',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c2.pack()
                c3 = Radiobutton(newWindow3,
                     text='Raja Harishchandra',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
                c3.pack()
                c4 = Radiobutton(newWindow3,
                     text='None of these',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
                c4.pack()
                l = Label(newWindow3, bg="#141414", width=50, text='',fg="#f86263")
                l.pack()
                def hardMoviesAssessment4():
                    newWindow3.destroy()
                    newWindow4 = Toplevel(root)
                    newWindow4.title("MOVIES")
                    newWindow4.geometry("700x300")
                    newWindow4.configure(bg="#141414")
                    newWindow4.option_add('*Font', 'Impact')
                    l1=Label(newWindow4, text= "QUES 5 : Who was the director of the famous movie ‘Sholay’?",
                    fg="#ffcc66",bg="#141414")
                    l1.pack()
                    def print_selection():
                        if (var.get() == 1):
                            l.config(text='''incorrect!''')
                        if (var.get() == 2):
                            l.config(text='''incorrect!''')
                        if (var.get() == 3):
                            l.config(text='''correct!''')
                        if (var.get() == 4):
                            l.config(text='''incorrect!''')
                    var = IntVar()
                    c1 = Radiobutton(newWindow4, text=' Mehboob Khan',variable=var,value=1,
                     fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c1.pack()
                    c2 = Radiobutton(newWindow4, text='Shakti Samanta ',variable=var,
                     value=2, fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c2.pack()
                    c3 = Radiobutton(newWindow4,
                     text='Ramesh Sippy',
                     variable=var,value=3,fg="#ffcc66",bg="#141414",
                     command=print_selection)
                    c3.pack()
                    c4 = Radiobutton(newWindow4,
                     text=' None of these',
                     fg="#ffcc66",bg="#141414",
                     variable=var,value=4,command=print_selection)
                    c4.pack()
                    l = Label(newWindow4, bg="#141414", width=50,fg="#f86263")
                    l.pack()
    
                printButton8 = Button(newWindow3,
                                      text="next question", fg="#f86263", bg="#141414",
                                      command=hardMoviesAssessment4)
                printButton8.place(x=300, y=250)
            printButton8 = Button(newWindow2,
                                  text="next question", fg="#f86263", bg="#141414",
                                  command=hardMoviesAssessment3)
            printButton8.place(x=300, y=250)

        printButton8 = Button(newWindow1,
                              text="next question", fg="#f86263", bg="#141414",
                              command=hardMoviesAssessment2)
        printButton8.place(x=300, y=250)

    printButton8 = Button(newWindow,
                          text="next question", fg="#f86263", bg="#141414",
                          command=hardMoviesAssessment1)
    printButton8.place(x=300, y=250)

def hardSPORTSAssessment():
    newWindow = Toplevel(root)
    newWindow.title("SPORTS")
    newWindow.geometry("900x300")
    newWindow.configure(bg="#141414")
    newWindow.option_add('*Font', 'Impact')
    l1 = Label(newWindow, text="QUES 1 : What is the fewest points allowed to an opponent in the second half of an NBA game?",
               fg="#ffcc66", bg="#141414")
    l1.pack()

    def print_selection():
        if (var.get() == 1):
            l.config(text='incorrect')
        if (var.get() == 2):
            l.config(text='incorrect')
        if (var.get() == 3):
            l.config(text='incorrect')
        if (var.get() == 4):
            l.config(text='correct')

    var = IntVar()
    c1 = Radiobutton(newWindow, text='19  ', variable=var, value=1,
                     fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c1.pack()
    c2 = Radiobutton(newWindow, text='22', variable=var,
                     value=2, fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c2.pack()
    c3 = Radiobutton(newWindow,
                     text='25',
                     variable=var, value=3, fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c3.pack()
    c4 = Radiobutton(newWindow,
                     text='16',
                     fg="#ffcc66", bg="#141414",
                     variable=var, value=4, command=print_selection)
    c4.pack()
    l = Label(newWindow, bg="#141414", width=50, text='', fg="#f86263")
    l.pack()


    def hardSPORTSAssessment1():
        newWindow.destroy()
        newWindow1 = Toplevel(root)
        newWindow1.title("SPORTS")
        newWindow1.geometry("700x300")
        newWindow1.configure(bg="#141414")
        newWindow1.option_add('*Font', 'Impact')
        l1 = Label(newWindow1,
                   text="QUES 2 : Who was the first victim of Anil Kumble in Test cricket?",
                   fg="#ffcc66", bg="#141414")
        l1.pack()

        def print_selection():
            if (var.get() == 1):
                l.config(text='incorrect')
            if (var.get() == 2):
                l.config(text='incorrect')
            if (var.get() == 3):
                l.config(text='correct')
            if (var.get() == 4):
                l.config(text='incorrect')

        var = IntVar()
        c1 = Radiobutton(newWindow1, text='John Morris', variable=var, value=1,
                         fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c1.pack()
        c2 = Radiobutton(newWindow1, text='Graham Goch', variable=var,
        value = 2, fg = "#ffcc66", bg = "#141414",
                                        command = print_selection)
        c2.pack()
        c3 = Radiobutton(newWindow1,
                         text='Allan Lamb',
                         variable=var, value=3, fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c3.pack()
        c4 = Radiobutton(newWindow1,
                         text='Robin Smith',
                         fg="#ffcc66", bg="#141414",
                         variable=var, value=4, command=print_selection)
        c4.pack()
        l = Label(newWindow1, bg="#141414", width=50, text='', fg="#f86263")
        l.pack()


        def hardSPORTSAssessment2():
            newWindow1.destroy()
            newWindow2 = Toplevel(root)
            newWindow2.title("SPORTS")
            newWindow2.geometry("900x300")
            newWindow2.configure(bg="#141414")
            newWindow2.option_add('*Font', 'Impact')
            l1 = Label(newWindow2,
                       text="QUES 3 : Who is the only player to win the champions league with three different clubs?",
                       fg="#ffcc66", bg="#141414")
            l1.pack()

            def print_selection():
                if (var.get() == 1):
                    l.config(text='incorrect')
                if (var.get() == 2):
                    l.config(text='correct')
                if (var.get() == 3):
                    l.config(text='incorrect')
                if (var.get() == 4):
                    l.config(text='incorrect')

            var = IntVar()
            c1 = Radiobutton(newWindow2, text='Toni Kroos', variable=var, value=1,
                             fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c1.pack()
            c2 = Radiobutton(newWindow2, text='Clarence Seedorf', variable=var,
                             value=2, fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c2.pack()
            c3 = Radiobutton(newWindow2,
                             text='Mateo Kovacic',
                             variable=var, value=3, fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c3.pack()
            c4 = Radiobutton(newWindow2,
                             text='Xabi ALonso',
                             fg="#ffcc66", bg="#141414",
                             variable=var, value=4, command=print_selection)
            c4.pack()
            l = Label(newWindow2, bg="#141414", width=50, text='', fg="#f86263")
            l.pack()


            def hardSPORTSAssessment3():
                newWindow2.destroy()
                newWindow3 = Toplevel(root)
                newWindow3.title("SPORTS")
                newWindow3.geometry("900x300")
                newWindow3.configure(bg="#141414")
                newWindow3.option_add('*Font', 'Impact')
                l1 = Label(newWindow3,
                           text="QUES 4 : In which round did Rafael Nadal exit the men’s singles of the 2015 US Open Championships?",
                           fg="#ffcc66", bg="#141414")
                l1.pack()

                def print_selection():
                    if (var.get() == 1):
                        l.config(text='correct')
                    if (var.get() == 2):
                        l.config(text='incorrect')
                    if (var.get() == 3):
                        l.config(text='incorrect')
                    if (var.get() == 4):
                        l.config(text='incorrect')

                var = IntVar()
                c1 = Radiobutton(newWindow3, text='3rd round', variable=var, value=1,
                                 fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c1.pack()
                c2 = Radiobutton(newWindow3, text='1st round', variable=var,
                                 value=2, fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c2.pack()
                c3 = Radiobutton(newWindow3,
                                 text='4th round',
                                 variable=var, value=3, fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c3.pack()
                c4 = Radiobutton(newWindow3,
                                 text='Round of 16',
                                 fg="#ffcc66", bg="#141414",
                                 variable=var, value=4, command=print_selection)
                c4.pack()
                l = Label(newWindow3, bg="#141414", width=50, text='', fg="#f86263")
                l.pack()


                def hardSPORTSAssessment4():
                    newWindow3.destroy()
                    newWindow4 = Toplevel(root)
                    newWindow4.title("SPORTS")
                    newWindow4.geometry("700x300")
                    newWindow4.configure(bg="#141414")
                    newWindow4.option_add('*Font', 'Impact')
                    l1 = Label(newWindow4,
                               text="QUES 5 : When did India take part in its first summer olympic games?",
                               fg="#ffcc66", bg="#141414")
                    l1.pack()

                    def print_selection():
                        if (var.get() == 1):
                            l.config(text='incorrect')
                        if (var.get() == 2):
                            l.config(text='incorrect')
                        if (var.get() == 3):
                            l.config(text='incorrect')
                        if (var.get() == 4):
                            l.config(text='correct')

                    var = IntVar()
                    c1 = Radiobutton(newWindow4, text='1936 Berlin', variable=var, value=1,
                                     fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c1.pack()
                    c2 = Radiobutton(newWindow4, text='1908 London', variable=var,
                                     value=2, fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c2.pack()
                    c3 = Radiobutton(newWindow4,
                                     text='1896 Rome',
                                     variable=var, value=3, fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c3.pack()
                    c4 = Radiobutton(newWindow4,
                                     text='1900 Paris',
                                     fg="#ffcc66", bg="#141414",
                                     variable=var, value=4, command=print_selection)
                    c4.pack()
                    l = Label(newWindow4, bg="#141414", width=50, text='', fg="#f86263")
                    l.pack()


                printButton8 = Button(newWindow3,
                                      text="next question", fg="#f86263", bg="#141414",
                                      command=hardSPORTSAssessment4)
                printButton8.place(x=400, y=250)

            printButton8 = Button(newWindow2,
                                  text="next question", fg="#f86263", bg="#141414",
                                  command=hardSPORTSAssessment3)
            printButton8.place(x=400, y=250)

        printButton8 = Button(newWindow1,
                              text="next question", fg="#f86263", bg="#141414",
                              command=hardSPORTSAssessment2)
        printButton8.place(x=300, y=250)

    printButton8 = Button(newWindow,
                          text="next question", fg="#f86263", bg="#141414",
                          command=hardSPORTSAssessment1)
    printButton8.place(x=400, y=250)


def hardTVSERIESAssessment():
    newWindow = Toplevel(root)
    newWindow.title("TV SERIES")
    newWindow.geometry("700x300")
    newWindow.configure(bg="#141414")
    newWindow.option_add('*Font', 'Impact')
    l1 = Label(newWindow, text="QUES 1 : How many minutes did Michael Scott work at the office?",
               fg="#ffcc66", bg="#141414")
    l1.pack()

    def print_selection():
        if (var.get() == 1):
            l.config(text='incorrect')
        if (var.get() == 2):
            l.config(text='incorrect')
        if (var.get() == 3):
            l.config(text='incorrect')
        if (var.get() == 4):
            l.config(text='correct')

    var = IntVar()
    c1 = Radiobutton(newWindow, text='9,174,000 minutes', variable=var, value=1,
                     fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c1.pack()
    c2 = Radiobutton(newWindow, text='8,654,000 minutes', variable=var,
                     value=2, fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c2.pack()
    c3 = Radiobutton(newWindow,
                     text='8,789,000 minutes',
                     variable=var, value=3, fg="#ffcc66", bg="#141414",
                     command=print_selection)
    c3.pack()
    c4 = Radiobutton(newWindow,
                     text='9,986,000 minutes',
                     fg="#ffcc66", bg="#141414",
                     variable=var, value=4, command=print_selection)
    c4.pack()
    l = Label(newWindow, bg="#141414", width=50, text='', fg="#f86263")
    l.pack()


    def hardTVSERIESAssessment1():
        newWindow.destroy()
        newWindow1 = Toplevel(root)
        newWindow1.title("TV SERIES")
        newWindow1.geometry("700x300")
        newWindow1.configure(bg="#141414")
        newWindow1.option_add('*Font', 'Impact')
        l1 = Label(newWindow1, text="QUES 2 : How does Louis figure out Mike didn’t go to Harvard?",
                   fg="#ffcc66", bg="#141414")
        l1.pack()

        def print_selection():
            if (var.get() == 1):
                l.config(text='incorrect')
            if (var.get() == 2):
                l.config(text='incorrect')
            if (var.get() == 3):
                l.config(text='correct')
            if (var.get() == 4):
                l.config(text='incorrect')

        var = IntVar()
        c1 = Radiobutton(newWindow1, text='Knight of Columbus', variable=var, value=1,
                         fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c1.pack()
        c2 = Radiobutton(newWindow1, text='Pudding', variable=var,
                         value=2, fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c2.pack()
        c3 = Radiobutton(newWindow1,
                         text='Order of the Coif key',
                         variable=var, value=3, fg="#ffcc66", bg="#141414",
                         command=print_selection)
        c3.pack()
        c4 = Radiobutton(newWindow1,
                         text='Key Largo',
                         fg="#ffcc66", bg="#141414",
                         variable=var, value=4, command=print_selection)
        c4.pack()
        l = Label(newWindow1, bg="#141414", width=50, text='', fg="#f86263")
        l.pack()


        def hardTVSERIESAssessment2():
            newWindow1.destroy()
            newWindow2 = Toplevel(root)
            newWindow2.title("TV SERIES")
            newWindow2.geometry("700x300")
            newWindow2.configure(bg="#141414")
            newWindow2.option_add('*Font', 'Impact')
            l1 = Label(newWindow2, text="QUES 3 : What is the name of the hairless cat Rachel gets for herself?",
                       fg="#ffcc66", bg="#141414")
            l1.pack()

            def print_selection():
                if (var.get() == 1):
                    l.config(text='incorrect')
                if (var.get() == 2):
                    l.config(text='correct')
                if (var.get() == 3):
                    l.config(text='incorrect')
                if (var.get() == 4):
                    l.config(text='incorrect')

            var = IntVar()
            c1 = Radiobutton(newWindow2, text='Fluffy', variable=var, value=1,
                             fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c1.pack()
            c2 = Radiobutton(newWindow2, text='Mrs Whiskerson', variable=var,
                             value=2, fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c2.pack()
            c3 = Radiobutton(newWindow2,
                             text='Chi Chi',
                             variable=var, value=3, fg="#ffcc66", bg="#141414",
                             command=print_selection)
            c3.pack()
            c4 = Radiobutton(newWindow2,
                             text='Mozzarella',
                             fg="#ffcc66", bg="#141414",
                             variable=var, value=4, command=print_selection)
            c4.pack()
            l = Label(newWindow2, bg="#141414", width=50, text='', fg="#f86263")
            l.pack()


            def hardTVSERIESAssessment3():
                newWindow2.destroy()
                newWindow3 = Toplevel(root)
                newWindow3.title("TV SERIES")
                newWindow3.geometry("700x300")
                newWindow3.configure(bg="#141414")
                newWindow3.option_add('*Font', 'Impact')
                l1 = Label(newWindow3, text="QUES 4 : What was the name of video game that Max scored more than Dustin?",
                           fg="#ffcc66", bg="#141414")
                l1.pack()

                def print_selection():
                    if (var.get() == 1):
                        l.config(text='correct')
                    if (var.get() == 2):
                        l.config(text='incorrect')
                    if (var.get() == 3):
                        l.config(text='incorrect')
                    if (var.get() == 4):
                        l.config(text='incorrect')

                var = IntVar()
                c1 = Radiobutton(newWindow3, text='Dig Dug', variable=var, value=1,
                                 fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c1.pack()
                c2 = Radiobutton(newWindow3, text='Asteroids', variable=var,
                                 value=2, fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c2.pack()
                c3 = Radiobutton(newWindow3,
                                 text='Dragon’s Lair',
                                 variable=var, value=3, fg="#ffcc66", bg="#141414",
                                 command=print_selection)
                c3.pack()
                c4 = Radiobutton(newWindow3,
                                 text='Space Invaders',
                                 fg="#ffcc66", bg="#141414",
                                 variable=var, value=4, command=print_selection)
                c4.pack()
                l = Label(newWindow3, bg="#141414", width=50, text='', fg="#f86263")
                l.pack()


                def hardTVSERIESAssessment4():
                    newWindow3.destroy()
                    newWindow4 = Toplevel(root)
                    newWindow4.title("TV SERIES")
                    newWindow4.geometry("1000x300")
                    newWindow4.configure(bg="#141414")
                    newWindow4.option_add('*Font', 'Impact')
                    l1 = Label(newWindow4,
                               text="QUES 5 : The first season of Peaky Blinders revolves around stolen guns. Where were they supposed to be going to?",
                               fg="#ffcc66", bg="#141414")
                    l1.pack()

                    def print_selection():
                        if (var.get() == 1):
                            l.config(text='incorrect')
                        if (var.get() == 2):
                            l.config(text='incorrect')
                        if (var.get() == 3):
                            l.config(text='incorrect')
                        if (var.get() == 4):
                            l.config(text='correct')

                    var = IntVar()
                    c1 = Radiobutton(newWindow4, text='Bulgaria', variable=var, value=1,
                                     fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c1.pack()
                    c2 = Radiobutton(newWindow4, text='Northern Ireland', variable=var,
                                     value=2, fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c2.pack()
                    c3 = Radiobutton(newWindow4,
                                     text='India',
                                     variable=var, value=3, fg="#ffcc66", bg="#141414",
                                     command=print_selection)
                    c3.pack()
                    c4 = Radiobutton(newWindow4,
                                     text='Libya',
                                     fg="#ffcc66", bg="#141414",
                                     variable=var, value=4, command=print_selection)
                    c4.pack()
                    l = Label(newWindow4, bg="#141414", width=50, text='', fg="#f86263")
                    l.pack()


                printButton8 = Button(newWindow3,
                                      text="next question", fg="#f86263", bg="#141414",
                                      command=hardTVSERIESAssessment4)
                printButton8.place(x=300, y=250)

            printButton8 = Button(newWindow2,
                                  text="next question", fg="#f86263", bg="#141414",
                                  command=hardTVSERIESAssessment3)
            printButton8.place(x=300, y=250)

        printButton8 = Button(newWindow1,
                              text="next question", fg="#f86263", bg="#141414",
                              command=hardTVSERIESAssessment2)
        printButton8.place(x=300, y=250)

    printButton8 = Button(newWindow,
                          text="next question", fg="#f86263", bg="#141414",
                          command=hardTVSERIESAssessment1)
    printButton8.place(x=300, y=250)



root.geometry("735x413")
load=PhotoImage(file="C:\\Users\\Spurti\\Desktop\\quiz bg.png")
label=Label(root,image=load)
PhotoImage(file="C:\\Users\\Spurti\\Desktop\\quiz bg.png")
label.pack()
btn = Button(root,text="START QUIZ",fg="#25dae9",bg="#141414",activeforeground="#141414",
                        activebackground="#25dae9",font="Impact 15",border=0,
             command=MyClick)
btn.place(x=600,y=370)

root.mainloop()

