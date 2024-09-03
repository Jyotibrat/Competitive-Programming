class Solution:
    def generateKey(self, num1: int, num2: int, num3: int) -> int:
        list_num1 = [int(digit) for digit in str(num1)]
        list_num2 = [int(digit) for digit in str(num2)]
        list_num3 = [int(digit) for digit in str(num3)]

        def pad_list(lst, length):
            while len(lst) < length:
                lst.insert(0, 0)
            return lst

        list_num1 = pad_list(list_num1, 4)
        list_num2 = pad_list(list_num2, 4)
        list_num3 = pad_list(list_num3, 4)

        result = [min(list_num1[i], list_num2[i], list_num3[i]) for i in range(4)]
        final_result = ''.join(map(str, result))

        return int(final_result)