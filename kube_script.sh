#Running kubectl to create nodes
docker image ls
kubectl get nodes
kubectl describe pod mydbpod
kubectl run mydbpod --image=imgmytests

kubectl create –f DB_Creation.yml

kubectl delete pod my_sql_testing