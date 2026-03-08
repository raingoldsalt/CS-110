#! /bin/bash

if ! [[ -x one ]]; then
    echo "program one executable does not exist"
    exit 1
fi

tester/run-tests-one.sh $*


