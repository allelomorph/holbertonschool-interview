# (474) 0x06. Log Parsing
Specializations > Interview Preparation > Algorithms

---

### Project author
Alexa Orrico (source project by Guillaume Salva)

### Assignment dates
01-25-2021 to 01-29-2021

### Description
Practice interview question originally appearing as task [14. Log parsing](https://github.com/allelomorph/holbertonschool-higher_level_programming/blob/master/0x0B-python-input_output/101-stats.py) in [(260) 0x0B. Python - Input/Output](https://github.com/allelomorph/holbertonschool-higher_level_programming/tree/master/0x0B-python-input_output).

### Provided file(s)
* [`0-generator.py`](./0-generator.py)

---

## Mandatory Tasks

### :white_check_mark: 0. Log parsing
Write a script that reads `stdin` line by line and computes metrics:

* Input format: `<IP Address> - [<date>] "GET /projects/260 HTTP/1.1" <status code> <file size>` (if the format is not this one, the line must be skipped)
* After every 10 lines and/or a keyboard interruption (`CTRL + C`), print these statistics from the beginning:
    * Total file size: `File size: <total size>`
    * where `<total size>` is the sum of all previous `<file size>` (see input format above)
    * Number of lines by status code:
        * possible status code: `200`, `301`, `400`, `401`, `403`, `404`, `405` and `500`
        * if a status code doesn’t appear or is not an integer, don’t print anything for this status code
        * format: <status code>: <number>
        * status codes should be printed in ascending order

File(s): [`0-stats.py`](./0-stats.py)

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
