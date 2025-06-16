Stanford CS 144 Networking Lab
==============================

These labs are open to the public under the (friendly) request that to
preserve their value as a teaching tool, solutions not be posted
publicly by anybody.

Website: https://cs144.stanford.edu

To set up the build system: `cmake -S . -B build`

To compile: `cmake --build build`

To run tests: `cmake --build build --target test`

To run speed benchmarks: `cmake --build build --target speed`

To run clang-tidy (which suggests improvements): `cmake --build build --target tidy`

To format code: `cmake --build build --target format`



## resources

[GitHub Repository](https://github.com/CS144/minnow)

[课程网站](https://cs144.github.io/)

[课程视频](https://www.youtube.com/watch?v=r2WZNaFyrbQ&list=PL6RdenZrxrw9inR-IJv-erlOKRHjymxMN)

[历史课程网站](https://web.archive.org/web/20241209004804/https://cs144.github.io/)

## commands

```bash
docker build -t cs144-lab .
```

```bash
docker run -it --name cs144-lab --network host \
    -v $(pwd):/cs144-lab cs144-lab /bin/bash
```
