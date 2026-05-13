# ১. List (ইন্ডেক্স অনুযায়ী ডেটা থাকে)
numbers = [12, 56, 98, 78, 12, 6, 98]

# ২. Dictionary (Key-Value pair হিসেবে ডেটা থাকে)
person2 = {
    'name': 'nil pakhi', 
    'address': 'kaliapur', 
    'age': 23, 
    'profession': 'student'
}

# ডিকশনারিতে ডেটা আপডেট করা (সঠিক নিয়ম)
person2['name'] = 'sada pakhi' # ভ্যালু পরিবর্তন
person2['language'] = 'Bengali' # নতুন কি (key) যুক্ত করা

print("Updated Dictionary:", person2)

# ৩. ডিকশনারি লুপিং (Special looping using .items())
print("\nLooping through dictionary:")
for key, value in person2.items():
    print(key,value)