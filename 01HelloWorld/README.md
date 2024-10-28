

## [C/C++ for Visual Studio Code](https://code.visualstudio.com/docs/languages/cpp)

### C++ 언어의 특징
- 컴파일 언어 : 실행 전에 소스 코드를 컴파일(번역)해야 함
- VS Code는 명령어 기반의 개발 도구이므로 별도의 컴파일러나 디버거가 필요

### 운영체제별 기본적으로 설치된 컴파일러
- Linux : GCC (GNU Compiler Collection)
- macOS : Xcode에 있는 Clang
    - 설치된 버전 확인
        ```bash
        clang --version
        ```

### 소스코드 파일 실행 설정
- `.vscode` 폴더 내 `task.json`, `launch.json`
- `task.json`: VS Code 빌드 버튼 클릭 시 수행 동작 설정
    - `"type": "cppbuild",`
    - active file을 output file로 변환 (`01HelloWorld.c` -> `01HelloWorld`)
- `launch.json` : VS Code 디버깅 버튼 클릭 시 수행 동작 설정
    - `"type": "cppdbg",`
    - `"preLaunchTask": "C/C++: clang build active file"` 빌드 수행 전 디버깅 동작
    - `"stopAtEntry": false,` `true`일 경우, 메인 실행 시 디버깅을 위해 멈춤

- 빌드 시 실행되는 명령어
    ```
    clang -g 01HelloWorld.c -o 01HelloWorld
    ```
    - 소스 코드 파일 : `01HelloWorld.c`
    - 목적 파일 : `01HelloWorld`
        - 목적 파일 실행 결과
            ```
            ...
            Hello, World!
            ...
            ```

### Linux C++ 설치
- [Using C++ on Linux in VS Code](https://code.visualstudio.com/docs/cpp/config-linux)

- GCC 컴파일러 설치 확인
```
gcc -v
```

- 패키지 저장소 업데이트
```
sudo apt-get update
```

- GNU 컴파일러 툴과 GDB 디버거 설치
```
sudo apt-get install build-essential gdb
```