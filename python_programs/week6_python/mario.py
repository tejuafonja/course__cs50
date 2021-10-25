def main():
    height = get_height()

    for i in range(height):
        print("#")

def get_height():
    while True:
        try:
            n = int(input("Height of brick: "))

            if n > 0:
                break
            else:
                raise Exception("Height should be greater than 0")

        except ValueError:
            print("That's not an integer!")
    return n

for i in range(3):
    print("#" * 3)

main()