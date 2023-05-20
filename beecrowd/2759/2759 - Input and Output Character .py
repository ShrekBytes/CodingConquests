while True:
    try:
        a = input()[0]
        b = input()[0]
        c = input()[0]
        
        print(f"A = {a}, B = {b}, C = {c}")
        print(f"A = {b}, B = {c}, C = {a}")
        print(f"A = {c}, B = {a}, C = {b}")

    except EOFError:
        break