def solve():
    ibn = input()
    if ibn[0] == '-' or ibn[-1] == '-':
        print('invalid')
    for i in range(1, len(ibn)):
        if ibn[i]  == ibn[i - 1] == '-' :
            print('invalid')
            return
    hy=ibn.count('-')
    if hy == 3 :
        if ibn[-2] != '-':
            print('invalid')
            return
    x=ibn.count('X')
    if x > 1 :
        print('invalid')
        return
    if x == 1 and ibn[-1] != 'X':
        print('invalid')
        return
    check = 0
    coef = 10
    for i in range(len(ibn)):
        if ( ibn[i] == '-' ):
            continue

        if( ibn[i] == 'X'):
            check += coef * 10
        else:
            check += int(ibn[i]) * coef
        coef -= 1
    if check % 11 != 0:
        print('invalid')
        return  
    
    new_check = 38
    pos = 2
    for i in range(len(ibn)-1):
        if ( ibn[i] == '-' ):
            continue
        coef = 3 if pos % 2 == 0 else 1
        new_check += int(ibn[i]) * coef
        pos += 1

    last= new_check%10 
    if last != 0:
        last = 10 - last
    i
    new_ibn='978-'+ibn[:-1]+str(last)
    print(new_ibn)


T=int(input())
for _ in range(T):
    solve()
