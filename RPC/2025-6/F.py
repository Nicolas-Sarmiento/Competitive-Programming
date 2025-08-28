n = int(input())
l = [int(x) for x in input().split()]

st = []
st.append(l[0])
for i in range(1,n):
    p = l[i]

    while  len(st) > 0 and p > st[-1]  :
        st.pop()

    while  len(st) > 0 and p == st[-1]  :
        st.pop()
        p = p * 2
    
    st.append(p)

print(st[0])