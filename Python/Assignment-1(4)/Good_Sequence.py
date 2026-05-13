num = int(input())
a = list(map(int, input().split()))

count = {}
for box_no in a:
    if box_no in count:
        count[box_no] += 1
    else:
        count[box_no] = 1

remove = 0 # তুমি এখানে 'remove' ভেরিয়েবল নিয়েছ

for box_no, total_val in count.items():
    if total_val >= box_no:
        bad_boxes = total_val - box_no
    else:
        bad_boxes = total_val

    remove += bad_boxes # এখানে 'removals' এর বদলে 'remove' হবে

print(remove) # ফলাফল দেখার জন্য এটি প্রিন্ট করতে হবে