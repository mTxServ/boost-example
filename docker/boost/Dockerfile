FROM ubuntu:latest

ENV DEBIAN_FRONTEND noninteractive
ENV BOOST_VERSION=1_66_0

WORKDIR /tmp

RUN rm /etc/localtime && ln -s /usr/share/zoneinfo/Europe/Paris /etc/localtime

RUN apt-get update && \
    apt-get install wget cmake build-essential g++ python-dev autotools-dev libicu-dev build-essential libbz2-dev libboost-all-dev -y

RUN wget --no-check-certificate --max-redirect 3 https://dl.bintray.com/boostorg/release/1.66.0/source/boost_${BOOST_VERSION}.tar.gz

RUN mkdir -p /usr/include/boost && tar zxf boost_${BOOST_VERSION}.tar.gz -C /usr/include/boost --strip-components=1
RUN cd /usr/include/boost && ./bootstrap.sh && ./b2 install

WORKDIR /agent

ENTRYPOINT /bin/bash
