FROM ubuntu:latest

ENV DEBIAN_FRONTEND noninteractive
ENV BOOST_VERSION=1_60_0

WORKDIR /home

RUN rm /etc/localtime && ln -s /usr/share/zoneinfo/Europe/Paris /etc/localtime

RUN apt-get update \
&& apt-get install -y g++ git wget cmake build-essential libbz2-dev libicu-dev \
 && apt-get clean \
 && rm -rf /var/lib/apt/lists/*

RUN wget http://downloads.sourceforge.net/project/boost/boost/1.60.0/boost_1_60_0.tar.gz \
     && tar xfz boost_1_60_0.tar.gz \
     && rm boost_1_60_0.tar.gz \
     && cd boost_1_60_0 \
     && ./bootstrap.sh --prefix=/usr/local \
     && ./b2 install \
     && cd .. && rm -rf boost_1_60_0 && ldconfig

WORKDIR /agent

ENTRYPOINT /bin/bash
