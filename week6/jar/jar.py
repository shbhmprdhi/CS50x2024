class Jar:
    def __init__(self, capacity=12):
        if capacity < 1:
            raise ValueError("Wrong capacity value")
        self._capacity = capacity
        self._n = 0

    def __str__(self):
        return f"🍪" * self._n

    def deposit(self, n):
        if self._n > self._capacity:
            raise ValueError("Exceeded capacity")
        self._n += n

    def withdraw(self, n):
        if self._n < n:
            raise ValueError("Less cookies than you want to remove")
        self._n -= n

    @property
    def capacity(self):
        return self._capacity

    @property
    def size(self):
        return self._n
