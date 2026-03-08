#! /bin/bash

if ! [[ -x rectangle ]]; then
    echo "program rectangle executable does not exist"
    exit 1
fi

tester/run-tests.sh -d tests-rectangle


