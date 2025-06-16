FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        build-essential \
        g++ \
        cmake \
        git \
        wget \
        curl \
        vim \
        gdb \
        valgrind \
        python3 \
        python3-pip \
        ca-certificates \
        pkg-config \
        libssl-dev \
        clang \
        clang-tidy \
        clang-format \
        gcc-doc \
        pkg-config \
        glibc-doc \
        tcpdump \
        tshark \
        && rm -rf /var/lib/apt/lists/*

ADD . /cs144-lab
WORKDIR /cs144-lab

CMD ["/bin/bash"]