# Employee Management System 

# Requirements

## Introduction 
- Employee management system is an application, developed to help owners of an organization to manage their employees more easily and efficiently. This application has several services such as Add/Delete employee data in the record, search, modify and display the data of employee in the record ,checking the attendance and number of leaves.
- Conventionally this system is done using papers,file and blinders. This Employee management system saves the time of an organization.
- To implement this project, we require C Programming, makefile and Unit Testing using Unity.
- Basic knowledge of structures and functions is required.

 ## Scope
 Without an Employee management system, managing and maintaining the details of an employee is a tedious job for any organization. It will store the details of an employee including their background,personal information,educational qualifications and other details.

 ## Benefits
 - It is easy to fetch and update data whenever required which will reduce the human work force to maintain them.
 - Reduce the traditional File Management Systems.
 - Securing the employee information.
 - Analysis, Adding, Updating and Searching becomes easier.
   
 ## Defining our system
  
 ### Functional Requirements
  
  Employee management system have some features like:
  - Add/Delete of employee record.
  - Search for an employee.
  - Update employee record.
  - Attendance/ Leaves of an employee.
  - Display employee record.
  ### Constraints
  
  - Every user must be comfortable using computer.
  - All operations are in english so user must have basic knowledge of English.


##SWOT Analysis
- https://github.com/rickwith13/M1_App_Employment_Management_System/blob/main/2_Architecture/swot.jpeg
 
 ## Aging 
| Age | Feature |
| ----- | ----- | 
| At past | This system is done using papers,file,record and blinders to store the details of an employee manually.   | 
| At present | This system is developed using well- designed data base to store the details of an employee.  | 

   


# 4W's and 1'H
   
## Who:
Employee Management System is observed in the industries or companies to store the data of the employees. This Employee Management System is seen everywhere,whether it is a small scale or large scale industry.
    
## What:
By recording all the details of employees in organisation it will be helpful through this application.
   
## When:
There will have huge number of employee data in organisation it will be difficult to record manually then we can use this application.
   
## Where:
Several companies facing issues while maintaining the data of Employee in companies,Industries etc.

## How:
The details of employees can be easily accessed by add,delete,search and modify in the system at any time.


# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| H01 | New account creation for new employee's (fresher and experienced) and filling the necessary data as well as deleting details if needed. | Requirement based | IMPLEMENTED | 
| H02 | To update employee's required information | Requirement based |  IMPLEMENTED  |
| H03 | To find the list of the employee's from BU, Roles and Joining Date | Requirement based |  IMPLEMENTED  |
| H04 | Employee should be able to view his/her attendance and leave details | Techincal |  IMPLEMENTED  |
| H05 | Employee should be able to calculate Salary, Gratuity, PF and Tax. | Techincal |  IMPLEMENTED  |
| H06 | To display the details of the existing employees | Requirement based | IMPLEMENTED |

##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| L01 | (1) User should choose whether the employee is a fresher or an experienced employee (2) After choosing the status of the employee then his/her personal details can be added (like name, mail id, employee id, Aadhaar,PAN, etc.) (3) User can remove his/her details if needed | H01 |  IMPLEMENTED  |
| L02 | User can update the specific information (1) By searching employee id, if ID not found then "No Record Found" message should get displayed. (2) If ID found then Update the required information . | H02 |  IMPLEMENTED  |
| L03 | (1) User should  be able to enter the BU to get the list of employees in that BU (2) User should  be able to enter the roles to get the list of employees in that role. (3) User should be able to enter the joining date to get the list of employees who joined on that date. | H03 | IMPLEMENTED  |
| L04 | (1) User should be able to enter the employee id to get the attendance report. (2) User should be able to enter the employee to get the no.of.leaves of an employee.| H04 |  IMPLEMENTED  |
| L05 | (1) User should be able to enter the employee id to calculate the salary. (2) User should be able to calculate gratuity. (3) User should be able to calculate PF. (4) User should be able to calculate Tax.| H05 |  IMPLEMENTED  |
| L06 | (1) User shall be able to enter the employee name and employee id. (2) User will be able to view employee details  | H06 |  IMPLEMENTED  |




# Procedures and Installations to execute the codes are as follows:

## Software tools for C Programming

* WINDOWS OS
* LINUX OS

## Software Setup on Windows OS for C Programming

## IDE
[Visula Studio Code](https://code.visualstudio.com/docs/cpp/config-mingw) for compiling and debuggin the code.

### Build tools
* [Make Installer](http://gnuwin32.sourceforge.net/downlinks/make.php) from [GNUWin32](http://gnuwin32.sourceforge.net/packages/make.htm) for automating the build without usign IDE

### Code Analysis
* [cppcheck](http://cppcheck.sourceforge.net/) for Static Analysis
* [Dr. Memory](https://github.com/DynamoRIO/drmemory/wiki/Downloads) for Heap analysis
* [Memory Sanitization](https://lemire.me/blog/2016/04/20/no-more-leaks-with-sanitize-flags-in-gcc-and-clang/) using gcc and -fsanitize option

### Source code Management
* [git](https://git-scm.com/downloads)

### Test Framework
* [Unit test](http://www.throwtheswitch.org/unity)

# Software Setup on Linux OS for C Programming
## IDE
* [Visula Studio Code](https://code.visualstudio.com/docs/cpp/config-linux) for compiling and debuggin the code.
* Compiling and running without IDE
```
    sudo apt-get update
    sudo apt-get upgrade
    sudo apt-get install build-essential
```
* Compiling and running
```
    gcc filename.c -o outputname.out
    ./outputname.out
```
### Build tools
* Make for automating the build
```
    sudo apt-get install cmake
```
### Code Analysis
* [cppcheck](http://cppcheck.sourceforge.net/) for Static Analysis
* Valgrind for Heap analysis. Check usage [here](http://cs.ecs.baylor.edu/~donahoo/tools/valgrind/)
```
    sudo apt-get install valgrind
```
* [Memory Sanitization](https://lemire.me/blog/2016/04/20/no-more-leaks-with-sanitize-flags-in-gcc-and-clang/) using gcc and -fsanitize option

### Source code Management
* [git](https://git-scm.com/downloads)

### Test Framework
* [Unit test](http://www.throwtheswitch.org/unity)

# Setup VS code to Clone and Push from Github Repositories
## Step-1
* Create an Account on Github if you don't have an account already.
* If you have an account just sign in from Github.

## Step-2
* If you already have a repository created, jump to [Step-3](#step-3)
* Create a new repository
* Use available and meaningful name for your repository
* Select appropriate visibility for your repository. Public to make it visible for everyone on the internet. Private to make it visible only for you and contributors you add to your repository.
* Add the **README .md** and **.gitignore** files

## Step-3
* Clone your Repository to your local machine through VS Code
* Copy the Https link of your github repository from code written in the right.
* Use **CTRL + SHIFT + P** to open command pallette and type **clone** and select **Clone from GitHub**
* Paste the copied Https link and click Enter
* Select a folder where the repository should be saved on the machine
* Select **Open** option to open the Cloned Repository in VS Code
* Check that the contents of the repository are shown in the VS Code

## Step-4
* Create a new file in the VS Code
* Select the Source control Menu on the Left in VS code
* Add your new files to the [**staging area**](https://git-scm.com/about/staging-area#:~:text=Staging%20Area%20Unlike%20the%20other%20systems%2C%20Git%20has,be%20formatted%20and%20reviewed%20before%20completing%20the%20commit.) by clicking on **+** icon
* Add if you want a meaningful commit message according to the changes made and add to repository by clicking on **&#x2611;**
* From the dropdown, select push to push your local changes to the Github repository.
* On completion, refresh the explorer and verify the added files are visible.

# Command to Run Code Using Window & Linux

### What happen when you run your code in window and Linux
```
    ifdef OS
	    RM = del/q
	    FixPath = $(subst /,\,$1)
	    EXEC = exe
    else
	    ifeq ($(shell uname), Linux)
	        RM = rm -rf
	        FixPath = $1
		    EXEC = out
	    endif
    endif
 ```
 * When you run Your code in Window, it will generate **.exe** file
 * When you run your code in Linux, it will generate **.out** file 

### To run this project write the following commands step by step in your terminal: 
- make (Make command is used to complie the project codes)
- make run (Make run to execute the project)
- make test (Make test checks all your test cases whether it passes or fails)
- make cppcheck (Make cppcheck gives us the static analysis of the code)
- make debug (Make debug is used to debug the code)
- make valgrind (Make valgrind gives us the dynamic analysis of the code)
- make coverage (Make coverage helps us to measure of how well you are testing your project)

## If you want to know more about these commands you can read the futher ellaborated steps for each of these commands.

### To run all file, use Command
```
    all:$(BUILD_DIR)
	gcc $(INC_H) $(SRC) main.c -o $(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME).$(EXEC))
```
It will run the whole program including headerfile, source file and main file.

### To see the output, use command
```
    run: 	
	$(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME).$(EXEC))
```
It will show the output

### To run testfiles, use command 
```
    test:
	gcc $(INC_H) $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJECT_NAME).$(EXEC))
	./$(call FixPath,$(BUILD_DIR)/$(TEST_PROJECT_NAME).$(EXEC))
```
### For cppcheck, use command
```
    cppcheck --enable=all $(SRC) main.c
```

### For debug, use command
```
    gcc -I $(INC_H) $(SRC) main.c -g -o $(BUILD_DIR)/$(PROJ_NAME).$(EXEC)
	gdb $(BUILD_DIR)/$(PROJ_NAME).$(EXEC)
```

### For valgrind, use command
```
    valgrind ./$(BUILD_DIR)/$(TEST_PROJECT_NAME).$(EXEC)
```

### For coverage, use command
```
    gcc -fprofile-arcs -ftest-coverage $(INC_H) $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) test_conversion.c
```



## Test Plan

## High-Level Test Plan

| Test ID | Description | Exp I/P | Exp O/P | Actual Output | Type of Test |
| ------- | ----------- | ------- | ------- | ------------- | ------------ |
| HL_01 | Check if the user has entered correct details | (1) name (2) employee id (3) BU (4) email (5) mobile no | Calls the function and check the input fields | SUCCESS (Manual) | REQUIREMENT BASED |
| HL_02 | Check if the user details have been removed or not | employee id | Calls the function and check the input fields is removed or not | SUCCESS (Manual) | REQUIREMENT BASED |
| HL_03 | Check if the user details entered in modification is valid or not | (1) Employee ID (2) Search function (3) Field to be modified | Calls the function and check the input fields | SUCCESS | REQUIREMENT BASED |
| HL_04 | Check modification of information | (1) Employee id (2) Field to be modified | Calls the function and check the input field is updated or not | SUCCESS | REQUIREMENT BASED |
| HL_05 | Check whether roles, BU, and joining date exist or not | (1) BU (2) Joining Date (3) Role | Calls the function and check the input field is correct or not | SUCCESS | REQUIREMENT BASED |
| HL_06 | Check attendance and leave whether they have entered the correct employee id or not | (1) Employee ID | Calls the function and check the input field is correct or not | SUCCESS | TECHNICAL |
| HL_07 | Check if the name or unique id is present in our employee list or not | (1) Employee ID (2) Name | Calls the function and check the input field is correct or not | SUCCESS | REQUIREMENT BASED |
| HL_08 | Check if salary calculator, gratutity calculator, PF calculator and tax calculator are working correctly or not | (1) Monthly salary | Correct salary, gratutiy, PF and test values | SUCCESS | TECHNICAL |  
| HL_09 | To check whether the search list is printed correctly or not for joining date, BU and role | (1) BU (2) Joining Date (3) Role | Print correct list | SUCCESS | REQUIREMENT BASED |

## Low-Level Test Plan

| Test ID | HL_ID | Description | Exp I/P | Exp O/P | Actual Output | Type of Test |
| ------- | ----- | ----------- | ------- | ------- | ------------- | ------------ |
| LL_01 | HL_01, HL_07 | Check if the user has entered correct name | Name | Calls the function and check the input fields | SUCCESS (Manual) | REQUIREMENT BASED |
| LL_02 | HL_01, HL_06, HL_07 | Check if the user has entered correct employee id| Employee id | Calls the function and check the input fields | SUCCESS | REQUIREMENT BASED |
| LL_03 | HL_01 | Check if the user has entered correct BU | BU | Calls the function and check the input fields | SUCCESS (Manual) | REQUIREMENT BASED |
| LL_04 | HL_01 | Check if the user has entered correct email | Email | Calls the function and check the input fields | SUCCESS (Manual) | REQUIREMENT BASED |
| LL_05 | HL_01 | Check if the user has entered the correct mobile no. | Mobile no. | Calls the function and check the input fields | SUCCESS (Manual) | REQUIREMENT BASED |
| LL_06 | HL_02 | Check if the user is removed or not | Employee id | Calls the function and check the input fields is removed or not | SUCCESS (Manual) | REQUIREMENT BASED |
| LL_07 | HL_03 | Check if employee id exist | Employee id | Calls the function and check the input fields | SUCCESS | REQUIREMENT BASED |
| LL_08 | HL_04 | Check if the information is updated or not | (1) Employee id (2) Field to be modified | Calls the function and check the input fields is updated or not | SUCCESS | REQUIREMENT BASED |
| LL_09 | HL_05 | Check if the role has entered correctly or not | Role | Calls the function and check the input fields is correct or not | SUCCESS | REQUIREMENT BASED |
| LL_10 | HL_05 | Check if the BU has entered correctly or not | BU | Calls the function and check the input fields is correct or not | SUCCESS | REQUIREMENT BASED |
| LL_11 | HL_05 | Check if the date has entered correctly or not | Date | Calls the function and check the input fields is correct or not | SUCCESS | TECHNICAL |
| LL_12 | HL_08 | Check if salary calculator are working correctly or not | (1) Monthly salary | Correct salary | SUCCESS | TECHNICAL |
| LL_13 | HL_08 | Check if gratuity calculator are working correctly or not | (1) Monthly salary | Correct gratutity | SUCCESS | TECHNICAL |
| LL_14 | HL_08 | Check if PF calculator are working correctly or not | (1) Monthly salary | Correct PF | SUCCESS | TECHNICAL |
| LL_15 | HL_08 | Check if tax calculator are working correctly or not | (1) Monthly salary | Correct tax | SUCCESS | TECHNICAL |
| LL_16 | HL_09 | Check if correct list is printed or not for searching list through joining date | (1)Employee Structure (2)Joining date | Print correct list | SUCCESS (Manual) | REQUIREMENT BASED |
| LL_17 | HL_09 | Check if correct list is printed or not for searching list through BU | (1)Employee Structure (2)BU | Print correct list | SUCCESS (Manual) | REQUIREMENT BASED |
| LL_18 | HL_09 | Check if correct list is printed or not for searching list through roles | (1)Employee Structure (2)Role | Print correct list | SUCCESS (Manual) | REQUIREMENT BASED |












