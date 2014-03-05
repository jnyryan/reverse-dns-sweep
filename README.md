#reverse-dns-sweep
=================

a reverse DNS sweep of subnets

Introduction

This will simply run through a range of IP addresses and retrieve their Host Names

## Installation

``` bash

make default

```

## Usage

``` bash

./ghba 136.206.1.0/24

```

## Example Output

``` bash
Scanning Class C network 136.206.1...
136.206.1.1 => ns1-ext.dcu.ie
136.206.1.2 => ns2-ext.dcu.ie
136.206.1.3 => ns1-int.dcu.ie
136.206.1.4 => dynamo.dcu.ie
136.206.1.5 => mail.dcu.ie
136.206.1.6 => xeno.dcu.ie
```