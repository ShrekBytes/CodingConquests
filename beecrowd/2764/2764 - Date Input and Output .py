while True:
    try:
        dd, mm, yy = map(int, input().split('/'))
        
        print(f"{mm:02d}/{dd:02d}/{yy:02d}")
        print(f"{yy:02d}/{mm:02d}/{dd:02d}")
        print(f"{dd:02d}-{mm:02d}-{yy:02d}")
        
    except EOFError:
        break