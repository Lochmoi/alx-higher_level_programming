#!/usr/bin/python3
def print_dlistint(h):
    count = 0
    current = h
    while current:
        print(current.n)
        current = current.next
        count += 1
    return count
