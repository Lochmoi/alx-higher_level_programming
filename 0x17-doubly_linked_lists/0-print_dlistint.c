#!/usr/bin/python3
size_t print_dlistint(const dlistint_t *h);
def print_dlistint(h):
    count = 0
    current = h
    while current:
        print(current.n)
        current = current.next
        count += 1
    return count
