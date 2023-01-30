# This is the scripts that controls the services
# In here we start Docker then we start minikube
echo 'starting Docker service...😎'
open --background -a Docker& 
#launchctl  start com.docker.docker
sleep 60
echo 'Starting minikube😎 service'
#minikube start  --kubernetes-version=v1.22.3 --driver=docker
minikube start  --kubernetes-version=v1.23.3 --driver=docker
#minikube start

