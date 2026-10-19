import time

# 循环方法
def loop_fib(n):
    if n <= 1:
        return n
    a, b = 0, 1
    for _ in range(2, n + 1):
        a, b = b, a + b
    return b

# 递归方法
def recursive_fib(n):
    if n <= 1:
        return n
    return recursive_fib(n - 1) + recursive_fib(n - 2)

n = 50

# 测试循环
start = time.time()
loop_result = loop_fib(n)
loop_time = time.time() - start
print("循环计算 F({}) = {}".format(n, loop_result))
print("循环方法耗时: {} 秒".format(loop_time))
# 测试递归
start = time.time()
recur_result = recursive_fib(n)
recur_time = time.time() - start
print("递归计算 F({}) = {}".format(n, recur_result))
print("递归方法耗时: {} 秒".format(recur_time))
