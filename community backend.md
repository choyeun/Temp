## 버전 관리 시스템

git

## Git 웹호스팅 서비스

Github 

## Git GUI

__CLI에 익숙하지 않거나 
CLI가 뭔지 모르면 
선택__

GitKraken

## API

HTTP API

## 직렬화 포맷

JSON

## 인증 정보의 위치

Authorization Header

## 인증 스키마 

JWT

## API 스펙 설계

-   `GET /user/account/check-duplicate/id/{id}` : ID 중복체크 API
-   `POST /user/account/signup` : 회원가입 API. ID/비밀번호/닉네임을 받는다.
-   `POST /user/account/auth` : 로그인 API. JWT 포맷으로 인코딩된 access token과 refresh token을 발급한다.
-   `GET /user/account/refresh` : access token refresh API. refresh token의 expire가 얼마 남지 않았다면 refresh token도 새로 만들어서 발급해 준다.
-   `POST /board/categories` : 카테고리 생성 API
-   `GET /board/categories` : 카테고리 목록 API
-   `POST /board/posts` : 게시글 작성 API
-   `GET /board/posts` : 게시글 목록 API. category ID를 요청으로 optional하게 받아서, 카테고리별 필터링도 가능하게 할 생각이다.
-   `GET /board/posts/{post_id}` : 게시글 내용 API
-   `PATCH /board/posts/{post_id}` : 게시글 수정 API
-   `DELETE /board/posts/{post_id}` : 게시글 삭제 API
-   `GET /board/posts/{post_id}/comments` : 게시글의 댓글 목록 API
-   `POST /board/posts/{post_id}/comments` : 댓글 작성 API

## API 문서화 방식

GitBook 
https://app.gitbook.com/invite/CnpMekrgYCkIKWWjf3Fj/Wv7ywutJ8RH2pY4qTVjk

## 프로그래밍 언어

Node.js
Typescript

## 웹 프레임워크

Nest.js

## 의존성 관리

자동으로 됨

## 코드 실행

내 개인 서버

## 데이터베이스

SQLite

## 배포 자동화

Github Action 
https://jay-ji.tistory.com/58

## 어플리케이션 구조

미정

## 데이터 유효성 검사

클래스 기반 유효성 검사

```typescript
class User {
  username: string;
  password: string;
  email: string;

  constructor(username: string, password: string, email: string) {
    this.username = username;
    this.password = password;
    this.email = email;
  }

  validate() {
    // 유효성 검사 규칙 적용
    if (this.username.length < 3 || this.username.length > 30) {
      throw new Error('Invalid username');
    }

    // 더 많은 검증 규칙 추가 가능

    console.log('Data is valid');
  }
}

const user = new User('john123', 'password123', 'john@example.com');
user.validate();

```

## SQL 쿼리 처리 방식 

Prisma

## 시간 데이터 저장 방식

**UTC 기준의 시간 문자열**

## 시간 데이터 표현 방식

**ISO 8601 format**

## JSON key 네이밍

카멜 케이스(Camel Case)를 사용한다. `ex) 'signinDate'`

## 테스트 프래임워크

Jest