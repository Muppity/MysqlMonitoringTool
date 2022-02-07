#Create DB Image In Docker
docker build --label 'img_my_tests' -t imgmytests   .

#Create DB Instance
docker image ls 
docker run --name=msqlTest1 -d imgmytests 
docker stop msqlTest1
docker rm msqlTest1
docker ps -a


#Removing code
docker image rm imgmytests -f