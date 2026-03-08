#! /bin/bash

if ! [[ -x triangle ]]; then
    echo "program triangle executable does not exist"
    exit 1
fi

tester/run-tests.sh -d tests-triangle


