#! /bin/bash

if ! [[ -x distance ]]; then
    echo "program distance executable does not exist"
    exit 1
fi

tester/run-tests.sh -d tests-distance


