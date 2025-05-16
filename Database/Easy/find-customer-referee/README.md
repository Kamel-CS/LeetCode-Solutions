# Find Customer Referee 

## Problem Statement
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| name        | varchar |
| referee_id  | int     |
+-------------+---------+
In SQL, id is the primary key column for this table.
Each row of this table indicates the id of a customer, their name, and the id of the customer who referred them.

Find the names of the customer that are not referred by the customer with id = 2.

Return the result table in any order.

**For the full problem statement, examples, and constraints, visit:**
[LeetCode Problem Link](https://leetcode.com/problems/find-customer-referee/description/)

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
