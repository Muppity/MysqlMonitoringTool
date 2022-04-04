#!/bin/bash bash
#minikube list|grep Docker


vcheck=$(launchctl list | grep docker)
if [["-       0       com.docker.helper"="$vcheck" ]]
 then echo "docker daemon is already stopped 🐋 "
else

    echo 'stopping minikube...👍'
    minikube stop
    sleep 20
    #Stop Docker👌⌘
    echo 'stopping docker engine... 🐳'
    osascript -e 'quit app "Docker"'
fi
#launchctl stop com.docker.docker.56332


