# Customers Who Never Order

## Problem Statement
Table: Customers
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| name        | varchar |
+-------------+---------+
id is the primary key (column with unique values) for this table.
Each row of this table indicates the ID and name of a customer.


Table: Orders
+-------------+------+
| Column Name | Type |
+-------------+------+
| id          | int  |
| customerId  | int  |
+-------------+------+
id is the primary key (column with unique values) for this table.
customerId is a foreign key (reference columns) of the ID from the Customers table.
Each row of this table indicates the ID of an order and the ID of the customer who ordered it.

Write a solution to find all customers who never order anything.

Return the result table in any order.
[LeetCode Problem Link](https://leetcode.com/problems/customers-who-never-order/description/)

---

### ❌ Common Wrong Answer

```sql
SELECT name
FROM customer
WHERE referee_id != 2;
```

- This will **exclude customers who have no referee (`referee_id IS NULL`)**.
Because in SQL:

> `NULL != 2` → evaluates to **UNKNOWN**, not TRUE  
And `WHERE` clause only returns rows where condition is **TRUE**

So if `referee_id` is `NULL`, it doesn't match `referee_id != 2` — and gets filtered out.


### ✅ Correct Way (Include `NULL` values)

```sql
SELECT name
FROM customer
WHERE referee_id != 2 OR referee_id IS NULL;
```

This includes:
- People **referred by someone else** (`referee_id != 2`)
- People **not referred by anyone** (`referee_id IS NULL`)

---

## Why `NULL` Causes Issues

In SQL, `NULL` means **unknown**, not just empty or zero.

So when we write:
```sql
WHERE referee_id != 2
```
We're saying:
> "Only include people where we know for sure they were referred by someone **other than 2**"
