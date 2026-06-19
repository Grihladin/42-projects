FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update \
	&& apt-get install -y --no-install-recommends \
		build-essential \
		cmake \
		libgl1-mesa-dev \
		libglfw3-dev \
		libx11-dev \
		libxcursor-dev \
		libxi-dev \
		libxinerama-dev \
		libxrandr-dev \
		novnc \
		pkg-config \
		websockify \
		x11vnc \
		xvfb \
	&& rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY . .
RUN make

COPY docker/entrypoint.sh /usr/local/bin/minirt-entrypoint
RUN chmod +x /usr/local/bin/minirt-entrypoint

EXPOSE 6080

ENTRYPOINT ["minirt-entrypoint"]
CMD ["examples/sphere1.rt"]
