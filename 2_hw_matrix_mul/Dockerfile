FROM ubuntu:22.04

RUN apt-get update && apt-get install -y gcc && yes | apt-get install vim && yes | apt-get install build-essential

COPY ../../../../private/MADE/3_semestr/HPC/2_base_matMul /home/user/
WORKDIR /home/user