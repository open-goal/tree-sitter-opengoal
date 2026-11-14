#!/usr/bin/env bash
set -e

yarn gen
yarn wasm
yarn play
