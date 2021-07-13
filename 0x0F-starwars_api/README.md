# (470) 0x0F. Star Wars API
Specializations > Interview Preparation > Algorithms

---

### Project author
Alexa Orrico (source project by Alexandre Gautier)

### Assignment dates
04-05-2021 to 04-09-2021

### Description
Practice interview question not appearing elsewhere in the curriculum, but similar to tasks in [(300) 0x11. Python - Network #1](https://github.com/allelomorph/holbertonschool-higher_level_programming/tree/master/0x11-python-network_1) and [(305) 0x15. JavaScript - Web jQuery](https://github.com/allelomorph/holbertonschool-higher_level_programming/tree/master/0x15-javascript-web_jquery). Query the Star Wars API to get all characters appearing in a given film.

### Prerequisites
* Install Node 10
```
$ curl -sL https://deb.nodesource.com/setup_10.x | sudo -E bash -
$ sudo apt-get install -y nodejs
```

* Install semi-standard\
[Documentation](https://github.com/standard/semistandard)
```
$ sudo npm install semistandard --global
```

* Install request module and use it\
[Documentation](https://github.com/request/request)
```
$ sudo npm install request --global
$ export NODE_PATH=/usr/lib/node_modules
```
---

## Mandatory Tasks

### :white_check_mark: 0. Star Wars Characters
Write a script that prints all characters of a Star Wars movie:

* The first positional argument passed is the Movie ID - example: `3` = “Return of the Jedi”
* Display one character name per line **in the same order as the “characters” list in the `/films/` endpoint**
* You must use the [Star wars API](https://swapi-api.hbtn.io/)
* You must use the `request` module

File(s): [`0-starwars_characters.js`](./0-starwars_characters.js)

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
