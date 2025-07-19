
T = int(input())
for _ in range(T):
    N = int(input())
    scores = list(map(int, input().split()))
    total = 0
    scholarship = True

    for i in range(N):
        total += scores[i]
        average = total / (i + 1)
        if average < 40:
            scholarship = False
            break

    print("Yes" if scholarship else "No")
