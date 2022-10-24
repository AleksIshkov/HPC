FROM ubuntu:22.04

RUN apt-get update && apt-get install -y gcc && yes | apt-get install vim && yes | apt-get install build-essential

COPY . /home/user/
WORKDIR /home/user
