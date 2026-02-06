# AtCoder
AtCoderで提出したコード保管用リポジトリ
https://atcoder.jp/users/UltiMorse

## 目的など

- AtCoder に提出したコードを保存する
- 複数環境から編集できるようにする

## Git

- 複数環境(Windows/Linux)から編集するので、今までのようにmainぶち込みをするとまずい。作業前に必ずプル、チェックアウト。特に、プルを忘れやすい
- 意味不明な commit messageを禁止

```bash
プル
git pull origin main
git checkout -b feature/作業内容

コミット
git status
git add .
git commit -m "コミットメッセージ(ABC hoge hogeなど具体的に)"

プッシュ
git push origin feature/作業内容

mainを更新
git checkout main
git pull origin main

マージ
git checkout feature/作業内容
git merge main

```
