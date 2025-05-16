# Department Highest Salary

## Problem Statement
Table: Employee
+--------------+---------+
| Column Name  | Type    |
+--------------+---------+
| id           | int     |
| name         | varchar |
| salary       | int     |
| departmentId | int     |
+--------------+---------+
id is the primary key (column with unique values) for this table.
departmentId is a foreign key (reference columns) of the ID from the Department table.
Each row of this table indicates the ID, name, and salary of an employee. It also contains the ID of their department.

Table: Department
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| name        | varchar |
+-------------+---------+
id is the primary key (column with unique values) for this table. It is guaranteed that department name is not NULL.
Each row of this table indicates the ID of a department and its name.

Write a solution to find employees who have the highest salary in each of the departments.

**For the full problem statement, examples, and constraints, visit:**
[LeetCode Problem Link](https://leetcode.com/problems/department-highest-salary/description/)

## Approach
It's about combining two tables so we'll use a `JOIN`.
Then filter the output using a `WHERE` clause by checking two columns (departmentID, salary) if they are the returned value from the subquery that:
  - Groups by departmentID and returns its id alongside the maximum salary. 

--- 

## What I learned
- `GROUP BY` works by grouping all rows by a specific column and then COUNT() calculates what we grouped.
  - We can’t just use any column in `SELECT` — only columns in the `GROUP BY` or wrapped in an aggregate.
- `HAVING` filters after grouping.
- `IN` can be used to compare a list of values against another list of values, not just single values. 
