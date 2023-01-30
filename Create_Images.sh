#Create Images
#!/bin/bash bash
#Create DB Image In Docker for database mysql engine
echo 'Create DB Image In Docker for database mysql engine 💽 ';
docker build --label 'img_my_tests2' -t imgmytests  -f Dockerfile  .

#Obtaning an image for Grafana OSS
echo 'Starting getting Grafana 💽';
#docker pull grafana/grafana-oss
echo 'Creating Grafana Image 💽';
docker build --label 'img_graf_tests' -t img_graf_tests -f DockerfileGraf .

