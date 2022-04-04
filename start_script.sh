echo 'starting Docker service...😎'
open --background -a Docker& 
#launchctl  start com.docker.docker
sleep 30
echo 'Starting minikube😎 service'
#minikube start  --kubernetes-version=v1.22.3 --driver=docker
minikube start  --kubernetes-version=v1.23.3 --driver=docker
minikube start

