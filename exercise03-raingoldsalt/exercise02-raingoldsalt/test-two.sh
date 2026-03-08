#! /bin/bash

if ! [[ -x two ]]; then
    echo "program two executable does not exist"
    exit 1
fi

tester/run-tests-two.sh $*


