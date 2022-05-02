# Mini-C-Compiler-using-Flex-and-Bison
This is Mini C Compiler using Flex and Bison whose functionalities are in report.
We have done this in Windows.
Group Members :
Vadlamudi Neelvittal Bharath - 191210055
Vinay Choudhary - 191210059
Vinay Jaiswal - 191210060

For running this project you have to follow the below commands on command prompt
1. bison -d filename.y
2. flex filename.l
3. gcc yaccFilename.tab.c -o outputfilename
4. outputfilename testcase.c

If you are not clear with above points you can refer to report.

Sample command is 
1. bison -d parser.y
2. flex leaxer.l
3. gcc parser.tab.c -o output
4. output test-case-nested.c 
