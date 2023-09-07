#Create Containers
#Create DB Instance Container
#docker image ls 
echo 'Starting creating containers from imgytests image'
echo 'Create DB Instance Container mysqlTest1 💾';
docker run --name=mysqlTest1 -d imgmytests -p 3306:3306
#sudo docker run --name=mysqlTest1 -d mysql/mysql-server:latest
echo 'Create DB Instance Container mysqlTest2 💾';
docker run --name=mysqlTest2 -d imgmytests


docker run -d --name=mysqlTest1   -e 'MYSQL_ROOT_PASSWORD=''Clave01*''' 5a9594052aec\
 -e 'MYSQL_ALLOW_EMPTY_PASSWORD=''No'''\
 -e 'MYSQL_RANDOM_ROOT_PASSWORD=''No'''

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


#my oracle

docker run -d --name orc_test \
  container-registry.oracle.com/database/free:latest

  docker run -d --env-file .ora_db_env.dat -p 1521:1521 --name=orcl_prbs container-registry.oracle.com/database/free:latest

  docker exec -it orcl_prbs bash ./setPassword.sh

  docker exec -it orcl_prbs sqlplus sys/Clave01* as sysdba
  docker exec -it orcl_prbs sqlplus / as sysdba
  podman exec -it <oracle-db> sqlplus sys/<your_password>@FREE as sysdba
  docker exec -it <oracle-db> sqlplus system/<your_password>@FREE
  docker exec -it <oracle-db> sqlplus pdbadmin/<your_password>@FREEPDB1
