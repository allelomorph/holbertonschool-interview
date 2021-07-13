# (476) 0x13. Count it!
Specializations > Interview Preparation > Algorithms

---

### Project author
Alexa Orrico (source project by Tim Britton)

### Assignment dates
05-03-2021 to 05-07-2021

### Description
Practice interview question originally appearing as task [3. Count it!](https://github.com/allelomorph/holberton-system_engineering-devops/blob/master/0x16-api_advanced/100-count.py) in [314) 0x16. API advanced](https://github.com/allelomorph/holberton-system_engineering-devops/tree/master/0x16-api_advanced).

### Provided file(s)
[0_main.py](./0_main.py)

---

## Mandatory Tasks

### :white_large_square: 0. Count it!
Write a recursive function that queries the [Reddit API](https://www.reddit.com/dev/api/), parses the title of all hot articles, and prints a sorted count of given keywords (case-insensitive, delimited by spaces. `Javascript` should count as `javascript`, but `java` should not).

Requirements:

* Prototype: `def count_words(subreddit, word_list)`
* Note: You may change the prototype, but it must be able to be called with just a subreddit supplied and a list of keywords. AKA you can add a counter or anything else, but the function must work without supplying a starting value in the main.
* If `word_list` contains the same word (case-insensitive), the final count should be the sum of each duplicate
* Results should be printed in descending order, by the count, and if the count is the same for separate keywords, they should then be sorted alphabetically (ascending, from A to Z). Words with no matches should be skipped and not printed. Words must be printed in lowercase.
* Results are based on the number of times a keyword appears, not titles it appears in. `java java java` counts as 3 separate occurrences of `java`.
* To make life easier, `java.` or `java!` or `java_` should not count as `java`
* If no posts match or the subreddit is invalid, print nothing.
* NOTE: Invalid subreddits may return a redirect to search results. Ensure that you are NOT following redirects.

Your code will NOT pass if you are using a loop and not recursively calling the function! This *can* be done with a loop but the point is to use a recursive function. :)

File(s): [`0-count.py`](./0-count.py)

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
