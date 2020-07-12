# 1, 6, 19-7, 37-19, 61-37
# 1, 6, 12, 18, 24
# 6 * (n - 1)

# for i in range(4):
#     print(i)
#     print(6*(i))
print("입력: ", end='')
N = int(input())
i = 1
sum = 1
# if N == 1:
#     print(1)
# else: 
#     while True:
#         if N > sum:
#             sum = sum + i*6
#             i = i+1
#         else:
#             print("출력: {}".format(i))
#             break

while N > sum:
    sum += i*6
    i += 1
print(i)