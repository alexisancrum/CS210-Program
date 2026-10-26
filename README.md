# CS210-Program
Demonstration of C++
# CS 210 Module Eight Journal
## Corner Grocer — Project Three

### 1. Summarize the project and what problem it was solving.

For this project, I developed a C++ application for Corner Grocer that tracks how often grocery items are purchased throughout the day. The purpose was to help the store better understand customer purchasing patterns so that inventory decisions could be based on actual purchasing data. The program reads a text file containing grocery items, calculates how frequently each item appears, and allows the user to search for individual items, view all purchase frequencies, or display the information in a histogram. It also creates a backup file to store the frequency data.

### 2. What did you do particularly well?

One thing I feel I did well was organizing the program so that each part had a specific purpose. Instead of keeping everything in one file, I separated the program into a header file, a source file for the grocery tracking functions, and a main file that controls the menu. I also focused on making the program straightforward for someone else to use. Once I had everything connected correctly, I was able to successfully compile the program and display the purchasing frequencies. Seeing the program work with the actual grocery data helped me better understand how the different parts of the code work together.

### 3. Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

One improvement I would make is allowing the user to select an input file instead of having the filename already written into the code. This would make the program more flexible because the store could analyze purchasing data from different days without having to change the source code. I would also like to expand the program to compare purchasing patterns over time and identify which items are purchased most frequently. Another improvement would be adding more testing for unexpected input and file errors. These changes would make the program more reliable, adaptable, and useful in a real business environment.

### 4. Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?

The most challenging part of this project was getting all the files to work together correctly in Visual Studio. Initially, I ran into errors related to the class declarations and how the source and header files were connected. After resolving those issues, I encountered another problem where the program compiled successfully but could not locate the grocery input file. I worked through these issues by reviewing the code, checking the project structure, and making sure the required files were saved in the correct location. I also used AI assistance to help explain error messages and troubleshoot the program. This experience showed me the importance of paying attention to small details and using available resources instead of getting stuck on one problem.

### 5. What skills from this project will be particularly transferable to other projects or coursework?

This project helped strengthen my understanding of object-oriented programming, file handling, loops, conditional statements, and data structures in C++. I also gained more experience troubleshooting errors and using Visual Studio to build and test an application. One skill I know will carry over into future projects is learning how to break down a larger problem into smaller parts. Rather than trying to handle everything in one section of code, I can organize different functions based on their responsibilities. I also see how these skills can be applied outside of programming, especially when working with data, identifying patterns, and finding ways to improve a process.

### 6. How did you make this program maintainable, readable, and adaptable?

I focused on keeping the code organized and making it easier to understand by separating the class definition, function implementations, and main program. I used descriptive function names such as `getFrequency()`, `printFrequencies()`, and `printHistogram()` so that their purposes would be clear. I also included comments to explain important sections of the program and added input validation to handle incorrect menu selections. Using separate files makes it easier to locate specific parts of the code and make changes without having to rewrite the entire application. If I wanted to expand the program later, I would already have a structure in place to build on.

### AI Usage Acknowledgment

I used ChatGPT by OpenAI as a support tool while completing this project. I used it to help develop and review portions of the C++ code, understand programming errors, troubleshoot issues in Visual Studio, and organize my project documentation and reflection. I tested the application in Visual Studio and reviewed the results as I worked through the assignment.
