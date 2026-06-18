def to_lower(text):
    return text.lower()

def to_upper(text):
    return text.upper()

def text_size(text):
    return len(text)

def main():
    while True:
        text = input("Enter text: \n")
        if text == "":
            break

        print(text)


        text_lowercase = to_lower(text)
        print(text_lowercase)

        text_uppercase = to_upper(text)
        print(text_uppercase)

        print(text_size(text))

if __name__ == "__main__":
    main()
