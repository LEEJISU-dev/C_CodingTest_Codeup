# C_CodingTest_Codeup
CodeUP 코딩테스트 공부(기초 100제)

## 1. 출력
- 유니코드 특수문자를 출력하는 방법
```c
printf("\u250C\u252C\u2510\n");
```
## 2. 입출력
- fgets( ) : 공백문자가 포함되어잇는 문장을 입력받아 저장할 수 있다.
```c
char data[2001];
fgets(data, 2000, stdin);
printf("%s", data);
```
- C언어에서는 문장을 저장하기 위해 배열 사용. 문자열의 마지막에는 NULL 삽입.
	
## 3. 데이터형
- int (%d) : -2147483648 ~ +2147483647 범위의 정수를 저장
- unsigned int (%u) : 0 ~ 4294967295 범위의 정수를 저장
- long long int (%lld) : -9,223,372,036,854,775,808 ~ +9,223,372,036,854,775,807 범위의 정수를 저장
- float (%f) : +- 3.4*10-38 ~ +- 3.4*1038 범위의 실수를 저장
- double (%lf) : +- 1.7*10-308 ~ +- 1.7*10308 범위의 실수를 저장

## 4. 출력변환
- %o : 8진수(octal) 출력
- %x : 16진수(hexadecimal) 소문자로 출력
- %X : 16진수(hexadecimal) 대문자로 출력

## 5. 산술연산
