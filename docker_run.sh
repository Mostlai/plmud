#!/bin/bash

docker pull fluffos/fluffos
docker run --rm -p 8080:80 -v $(pwd):/opt/mud fluffos /opt/mud/docker.config.cfg