#Create DB Image In Docker
docker build --label 'img_my_tests2' -t imgmytests   .

#Create DB Instance
docker image ls 
docker run --name=mysqlTest1 -d imgmytests -p 3306:3306

sudo docker run --name=mysqlTest1 -d mysql/mysql-server:latest

sudo docker run --name=mysqlTest2 -d imgmytests


docker run --name=mysqlTest1  -p 3306:3306 -d mysql -e 'MYSQL_ROOT_PASSWORD=''Clave01*'''\
 -e 'MYSQL_ALLOW_EMPTY_PASSWORD=''No'''\
 -e 'MYSQL_RANDOM_ROOT_PASSWORD=''No'''
docker stop mysqlTest1
docker rm mysqlTest1
docker rm mysqlTest2
docker ps -a
docker start mysqlTest1


#Removing code
docker image rm imgmytests -f

#Mysql tests
docker exec -it mysqlTest1 mysql -u root -p ''

docker exec -it mysqlTest1 mysql -h localhost -p -u clopez

docker exec -it mysqlTest1 tail -n 200 /etc/mysql/my.cnf

docker exec -it mysqlTest2 ls /usr/bin

docker exec -it mysqlTest2 /usr/bin/mysqlslap --delimiter=";"
  --create="CREATE TABLE a (b int);INSERT INTO a VALUES (23)"
  --query="SELECT * FROM a" --concurrency=50 --iterations=200


create user 'clopez'@'localhost' identified by 'Clave01*';