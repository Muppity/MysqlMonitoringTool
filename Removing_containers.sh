#!/bin/bash bash
echo 'Removing databases';
docker rm mysqlTest1
docker rm mysqlTest2
#docker ps -a
echo 'Removing database image';
#Removing code
docker image rm imgmytests -f
echo 'Removing grafana';
docker rm graf_tests_ent;
docker image rm 