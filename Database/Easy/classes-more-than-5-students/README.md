# Classes More Than 5 Students

## Problem Statement
Table: Courses
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| student     | varchar |
| class       | varchar |
+-------------+---------+
(student, class) is the primary key (combination of columns with unique values) for this table.
Each row of this table indicates the name of a student and the class in which they are enrolled.

Write a solution to find all the classes that have at least five students.

**For the full problem statement, examples, and constraints, visit:**
[LeetCode Problem Link](https://leetcode.com/problems/classes-more-than-5-students/description/)

## Approach
Just Group the rows by the class column and then filter it using a `HAVING` clause and the `COUNT()` aggregate function to count the number of students in each class group.
