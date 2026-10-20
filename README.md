CIS-165-W198

Initial Plan
  Diamond Program
    Print seven lines using cout statements. Carefully count the spaces and stars on each line to create the diamond           shape. Compare each output line to the assignment example.
  Video Game Time Program
    Store 78 minutes and 144 minutes in variables. Use integer division to calculate hours and the modulus operator to         calculate remaining minutes. Calculate the difference between the two times and display all results with clear labels.
    
Testing 
  Diamond test 
    Expected Pattern
       *
      ***
     *****
    *******
     *****
      ***
       *
    Actual Output
       *
      ***
     *****
    *******
     *****
      ***
       *
    Result - The output matched all seven  lines. The spaces and asterisks matched the directions.
  Game Time Test 1 (Assigned Values)
    Input 
      Level 1 = 78
      Level 2 = 144
    Expected Results 
      Level 1:
      78 ÷ 60 = 1 hour
      78 % 60 = 18 minutes
      Level 2:
      144 ÷ 60 = 2 hours
      144 % 60 = 24 minutes
      Difference:
      144 − 78 = 66 minutes
      66 ÷ 60 = 1 hour
      66 % 60 = 6 minutes
    Actual Output 
      Level 1 Time: 1 hour(s), 18 minute(s)
      Level 2 Time: 2 hour(s), 24 minute(s)
      Difference: 1 hour(s), 6 minute(s)
    Result - My expect and actual results matched 
  Game Time Test 2 (Different Values)
    Input
      Level 1 = 95
      Level 2 = 170
    Expected Results 
      95 minutes:
      1 hour, 35 minutes 
      170 minutes:
      2 hours, 50 minutes
      Difference:
      170 - 95 = 75 minutes
      1 hour, 15 minutes
  Actual Output
    Level 1 Time: 1 hour(s), 35 minute(s)
    Level 2 Time: 2 hour(s), 50 minute(s)
    Difference: 1 hour(s), 15 minute(s)
  Result - My expect and actual results matched 
  
Explain your code
  1.) For diamond.cpp, explain how your output statements create the required shape. How did you check spaces that are           difficult to see?
       - Each cout statement prints one line of the diamond. I compared each line with the given assignment example and             counted the spaces before every group of the stars.
  2.) For game_time.cpp, explain how integer division and the remainder operator convert total minutes into hours and            remaining minutes.
       -  Integer division finds the number of full hours in a minute value. The modulus operator finds the minutes left             over after the hours are removed.
  3.) Trace the assigned Level 1 and Level 2 values through your variables, including the calculation of the difference.
       -  The program stores 78 in level_one_minutes and 144 in level_two_minutes. Division and modulus create the hours             and remaining minute variables. The difference is stored in difference_minutes, then is converted into hours and           minutes using division and modulus again.
 4.)  Explain why the assignment asks you to store calculations in variables before using cout.
        - Storing calculations in variables makes the program easier to read, debug, and understand. It also allows the              values to be used again later if needed.

AI Reflection
  Tools Used
    - I used Microsoft Copilot to help breakdown the assignment details into simpler terms, review my code style, and to
      explain how integer division and the modulus operator work.
  One Decision
    - One prompt I used was: "Explain how to convert minutes into hours and remaining minutes using C++ integer division         and modulus in simple terms with an example."
  Verification
    - I compared the output of game_time.cpp against the calculations I did myself. For example, 78 minutes should equal 1       hour and 18 minutes. The program produced the same result, confirming the calculations were correct. I also compared       every line of diamond.cpp with the pattern given to me to make sure the spaces and stars matched the provided              exmaple.
  Learning
    - I can now explain how integer division and the modulus operator work together to convert minutes into hours and            minutes. I can also create a simple formatted output program using cout statements. I still need more practice with        writing larger programs and debugging syntax errors without any outside help.









  
       
