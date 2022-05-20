#!/bin/bash bash
#Create DB Image In Docker for database mysql engine
echo 'Create DB Image In Docker for database mysql engine 💽 ';
docker build --label 'img_my_tests2' -t imgmytests  -f Dockerfile  .

#Create DB Instance Container
#docker image ls 
echo 'Starting creating containers from imgytests image'
echo 'Create DB Instance Container mysqlTest1 💾';
docker run --name=mysqlTest1 -d imgmytests -p 3306:3306
#sudo docker run --name=mysqlTest1 -d mysql/mysql-server:latest
echo 'Create DB Instance Container mysqlTest2 💾';
docker run --name=mysqlTest2 -d imgmytests


docker run -d --name=mysqlTest1   -e 'MYSQL_ROOT_PASSWORD=''Clave01*''' 434c35b82b08\
 -e 'MYSQL_ALLOW_EMPTY_PASSWORD=''No'''\
 -e 'MYSQL_RANDOM_ROOT_PASSWORD=''No'''


#Mysql tests
echo 'Connecting tests...';
docker exec -it mysqlTest1 mysql -u  root -p  -h localhost

docker exec -it mysqlTest1 mysql -h localhost -p -u clopez
echo 'showing mysql configs...';
docker exec -it mysqlTest1 tail -n 200 /etc/mysql/my.cnf
echo 'Connecting test 2...';
docker exec -it mysqlTest2 mysql -u clopez -p
echo 'Checking for mysqlSlap for testing...'
docker exec -it mysqlTest2 /usr/bin/mysqlslap --delimiter=";"
  --create="CREATE TABLE a (b int);INSERT INTO a VALUES (23)"
  --query="SELECT * FROM a" --concurrency=50 --iterations=200

echo 'Creating user';
create user 'clopez1'@'localhost' identified by 'Clave01*';


#Obtaning an image for Grafana OSS
echo 'Starting getting Grafana 💽';
#docker pull grafana/grafana-oss
echo 'Creating Grafana Image 💽';
docker build --label 'img_graf_tests' -t img_graf_tests -f DockerfileGraf .

echo 'Executing container instance 💽';
#docker run -d -p 3000:3000 grafana/grafana-enterprise -name=graf_tests

docker run -d --name=graf_tests_ent \
  -p 3000:3000 \
  -e "GF_LOG_MODE=console file" \
  -e "GF_INSTALL_PLUGINS=grafana-clock-panel,grafana-simple-json-datasource" \
  grafana/grafana-enterprise


#Build a customed image
docker run -d --name=graf_tests_ent \
  -p 3000:3000 \
  -e "GF_LOG_MODE=console file" \
  -e "GF_INSTALL_PLUGINS=grafana-clock-panel,grafana-simple-json-datasource" \
  img_graf_tests


docker exec -it graf_tests_ent ls /var/lib/grafana/plugins/grafana-clock-panel

  #grafana/grafana-enterprise
  #-d grafana/grafana-enterprise
  --volume "/Volumes/Macintosh\ HDD1/GrafMon:/var/lib/grafana" \
  -d img_graf_tests \
  #--mount 'type=bind,src= /Volumes/Macintosh\ HDD1/GrafMon,dst=/mnt/sql' \
  

  #Obtaining Mysql Tester container mysqlslap

docker pull diceone/mysqlslap;

  docker run --rm \
  diceone/mysqlslap \
  mysqlslap --user=sysadmin --password --host=localhost  --auto-generate-sql --verbose