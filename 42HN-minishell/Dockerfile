FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update \
	&& apt-get install -y --no-install-recommends \
		build-essential \
		libncurses-dev \
		libreadline-dev \
	&& rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY . .
RUN make

USER ubuntu

CMD ["bash", "-lc", "exec ./minishell"]
