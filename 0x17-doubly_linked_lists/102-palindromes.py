#!/usr/bin/python3
def is_Palin(mul):
    return (str(mul) == str(mul)[::-1])


def seek_largest_palindrome():
    return max([i * j for i in range(1000, 100) for j in range(1000, 100)
               if is_Palin(i * j)])


print(seek_largest_palindrome())
