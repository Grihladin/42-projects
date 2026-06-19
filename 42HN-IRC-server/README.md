<p align="center">
  <img src="../42-project-badges/badges/ft_irce.png" alt="IRC server badge" width="150">
</p>

# IRC Server

This project is a non-blocking IRC server written in C++17. It supports multiple
clients, channels, messaging, and basic channel administration.

## Features

- Multi-client networking with non-blocking sockets
- Channels, private messages, topics, invitations, kicks, and modes
- Core commands including `PASS`, `NICK`, `USER`, `JOIN`, `PRIVMSG`, and `QUIT`

## How to run

From this project directory:

```bash
cd 42HN-IRC-server
docker build -t 42hn-irc .
docker run --rm -it -p 6667:6667 -e IRC_PASSWORD=secret 42hn-irc
```

Connect an IRC client to `localhost:6667` using the configured password.
