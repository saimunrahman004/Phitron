import pyautogui

# আপনার মাউসের বর্তমান পজিশন দেখার জন্য
print(pyautogui.position())

#2
import pyautogui
from time import sleep
sleep(5)  # ৫ সেকেন্ড অপেক্ষা করুন

for i in range(0,3):
    pyautogui.write("I am learning Python programming.", interval=0.25)
    pyautogui.press("enter")

    #এখানে:

 #"I am learning Python programming." → যে text টাইপ করবে
#interval=0.25 → প্রতিটি character টাইপের মাঝে 0.25 second delay দেবে
    
    I am learning Python programming.
    I am learning Python programming.
    I am learning Python programming.
