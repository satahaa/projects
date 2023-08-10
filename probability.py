D1 = {
    1 : 0.55,
    2 : 0.22,
    3 : 0.15,
    4 : 0.05,
    5 : 0.02,
    6 : 0.01
}
D2 = {
    1 : 0.04,
    2 : 0.15,
    3 : 0.30,
    4 : 0.30,
    5 : 0.15,
    6 : 0.06
}
def main():
    p1 = []
    p2 = []
    while True:
        try:
            key = int(input("what number?(0 to exit.) ").strip())
            break
        except ValueError:
            print("The number must be an integer.")
    if key == 0:
        print("Exiting...")
        return 0
    elif key <= 12 and key >= 2:
        for n1 in D1:
            for n2 in D2:
                if n1 + n2 == key:
                    p1.append(D1[n1])
                    p2.append(D2[n2])
        res = sum(p1[i]*p2[i] for i in range(len(p1)))
        rounded = round(round(res,3)*100, 3)
        print(f"Probsbility: {rounded}%")
        main()
    else:
        print("The number must be between 2 and 12")
        main()
main()
