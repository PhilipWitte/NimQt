NimQt
===
Simple example of using Qt with Nim

How to Build
---
```
$ qmake && make
$ nim cpp -d:release main
```

Other Notes
---
This uses static libs, but can easily be made to use dynamic libs by doing the following:
- Change the `CONFIG` value in `main.pro` to `dynamiclib`
- Make both `initQt` & `sendNim` C++ functions `extern "C"`
- Use Nim's `dynLib` pragma instead of `link` & `passL` to link