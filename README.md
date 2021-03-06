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
- 아스키문자표에서 'A'는 10진수 65저장. 따라서 문자도 값으로 덧셈을 할 수 있다.
- 묵시적 (데이터)형변환 : 정수/실수 계산결과가 자동으로 실수형으로 바뀌는 것
- 명시적 (데이터)형변환 : 어떤 값이나 결과의 데이터형을 강제로 바꾸는 것

## 6. 비트시프트연산
- 비트단위시프트연산자 (<<, >>) :2진수 형태로 저장되어 있는 값들을 왼쪽(<<)이나 오른쪽(>>)으로 지정한 비트 수만큼 밀어주면 2배씩 늘어나거나 반으로 줄어든다.
- 왼쪽 비트시프트(<<) : 오른쪽에 0이 주어진 개수만큼 추가
- 오른쪽 비트시프트(>>) : 왼쪽에 0(0 또는 양의 정수인 경우)이나 1(음의 정수인 경우)이 개수만큼 추가
```c
int a=10;
printf("%d", a<<1); //10을 2배 한 값인 20 이 출력된다.
printf("%d", a>>1); //10을 반으로 나눈 값인 5 가 출력된다.
printf("%d", a<<2); //10을 4배 한 값인 40 이 출력된다.
printf("%d", a>>2); //10을 반으로 나눈 후 다시 반으로 나눈 값인 2 가 출력된다.
```
```c
int a=1, b=4;
printf("%d", a << b); //2⁴ = 16 이 출력된다.
```

## 7. 비교연산
- 비교/관계연산자 : 주어진 2개의 값을 비교하여 그 결과가 참인 경우 참(true)을 나타내는 정수값 1로 계산하고, 거짓인 경우 거짓(false)를 나타내는 정수값 0으로 계산한다.

## 8. 논리연산
- 논리연산자 : !(not), &&(and), ||(or)

## 9. 비트단위논리연산
- 비트단위(bitwise) 연산자 : ~(bitwise not), &(bitwise and), |(bitwise or), ^(bitwise xor), <<(bitwise left shift), >>(bitwise right shift)

## 10. 삼항연산
- "조건식 ? (참일 때의 값) : (거짓일 때의 값)” 의 형태로 사용하는 연산자

## 11. 조건/선택실행구조
- if(조건){}else{} / if(조건){}else if(조건)
- switch(정수값){case (): break; ... default ...}

## 12. 반복실행구조
- goto : goto 명령문을 사용하면 간단한 반복 실행을 만들 수 있다. 그러나 이해가 어렵고 오류가 생기기 쉽다.
- goto 이름: - "이름:" 과 같이 콜론(:)이 붙어있는 부분을 이름표(label, 레이블)라고 한다.

## 13. 종합

## 14. 1차원배열

## 15. 2차원배열


## 그리디 (Greedy)

## 탐색기반설계
