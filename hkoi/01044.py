ans = 0
num = int(input())
while 1:
    if pow(2, ans) > num:
        print(ans)
        break
    ans += 1
