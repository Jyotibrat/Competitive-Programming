from collections import Counter

def find_max_occured_element(lst):
    if not lst:
        return None

    counter = Counter(lst)
    
    max_freq = max(counter.values())
    
    max_occured_elements = [key for key, value in counter.items() if value == max_freq]
    
    return max_occured_elements[0]

def calculate_pairs(freq_counter):
    count = 0
    for f in freq_counter.values():
        if f > 1:
            count += (f * (f - 1)) // 2
    return count

def process_test_case(a):
    freq = Counter(a)
    
    if 0 in freq:
        most_occured_element = find_max_occured_element([x for x in a if x != 0])
        
        for i in range(len(a)):
            if a[i] == 0:
                a[i] = most_occured_element
    
    final_freq = Counter(a)
    return calculate_pairs(final_freq)

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    index = 0
    T = int(data[index])
    index += 1
    
    results = []
    
    for _ in range(T):
        N = int(data[index])
        index += 1
        A = list(map(int, data[index:index + N]))
        index += N
        result = process_test_case(A)
        results.append(result)
    
    for result in results:
        print(result)

if __name__ == "__main__":
    main()
