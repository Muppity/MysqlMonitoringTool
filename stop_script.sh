#!/bin/bash bash
#minikube list|grep Docker


vcheck=$(launchctl list | grep docker)
if [["-       0       com.docker.helper"="$vcheck" ]]
 then echo "docker daemon is already stopped π "
else

    echo 'stopping minikube...π'
    minikube stop
    sleep 20
    #Stop Dockerπβ
    echo 'stopping docker engine... π³'
    osascript -e 'quit app "Docker"'
fi
#launchctl stop com.docker.docker.56332


