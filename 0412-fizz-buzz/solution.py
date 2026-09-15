class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        r = []
        i, fizz, buzz = 1, 0, 0
        while i <= n:
            fizz += 1
            buzz += 1
            if fizz == 3 and buzz == 5:
                r.append("FizzBuzz")
                fizz = buzz = 0
            elif fizz == 3:
                r.append("Fizz")
                fizz = 0
            elif buzz == 5:
                r.append("Buzz")
                buzz = 0
            else:
                r.append(str(i))
            i += 1
        return r
