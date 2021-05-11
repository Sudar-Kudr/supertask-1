[![Build Status](https://www.travis-ci.org/Spardoks/supertask.svg?branch=master)](https://www.travis-ci.com/Spardoks/supertask)

# USING
## Install
```
- cmake -H. -B_build -DCMAKE_INSTALL_PREFIX=_install -DBUILD_TESTS=ON
- cmake --build _build --target install
```

## Test
```
# after install
- cmake --build _build --target test -- ARGS=--verbose
```

## Cpack
```
- cmake -H. -B_build -DCPACK_GENERATOR="TGZ"
- cmake --build _build --target package
```

# ALTERNATIVE_USING WITH DOCKER
```
- docker build -t supertask .
```
