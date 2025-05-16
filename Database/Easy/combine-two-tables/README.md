# Combine Two Tables

## Problem Statement
Table: Person
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| personId    | int     |
| lastName    | varchar |
| firstName   | varchar |
+-------------+---------+
personId is the primary key (column with unique values) for this table.
This table contains information about the ID of some persons and their first and last names.


Table: Address
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| addressId   | int     |
| personId    | int     |
| city        | varchar |
| state       | varchar |
+-------------+---------+
addressId is the primary key (column with unique values) for this table.
Each row of this table contains information about the city and state of one person with ID = PersonId.


Write a solution to report the first name, last name, city, and state of each person in the Person table. If the address of a personId is not present in the Address table, report null instead.

Return the result table in any order.

**For the full problem statement, examples, and constraints, visit:**
[LeetCode Problem Link](https://leetcode.com/problems/combine-two-tables/description/)

## Approach
So basically we need to display the list of persons' names and their addresses.
This requires combining two tables, thus using `JOINS`. We must display the person's name even without having an assigned address.
We can use a `LEFT JOIN` with employee being the left table or a `RIGHT JOIN` with employee being on the right, to output the persons even when the address is `NULL`.
