#!/bin/bash bash
echo 'Stopping database containers';
docker stop mysqlTest1
docker stop mysqlTest2
echo 'Stopping grafana';
docker stop graf_tests_ent
