#!/bin/bash bash
echo 'Starting database databases';
docker start mysqlTest1
docker start mysqlTest2
echo 'Starting grafana container';
docker start graf_tests_ent
