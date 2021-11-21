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
