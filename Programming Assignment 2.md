# Data Structures Programming Assignment 2
依照提供的 main function （`main.cpp`）以及給定的資料群 `movieX.dat`，完成 ADT Table 的實作，可以是任意 based 的 implementation (DS11)，除了 class 基本的功能外，請並且完成以下 function：

0. class `Table`：class name 為 Table。
1. `tableInsert(key, value1,  value2,  value3)`：插入一部新電影，第一個參數為 `key`，之後的參數依序為 `movie id`、`movie title`、`release date`、`IMDb URL`。
2. `tableDelete(key)`：刪除一部電影。
3. `tableRetrieve(key)`：搜尋一部電影。
4. `traverseTable()`：列出所有電影。

## 一、程式編譯執行

```
$ g++ main.cpp Table.cpp -o run
$ ./run data/movie100.dat
```
    
![執行](https://raw.github.com/evenchange4/102-1_DS_PA2_ADT-Table/master/image/%E5%9F%B7%E8%A1%8C.png)

## 二、程式說明
### a. Main function (`main.cpp`):
- 已經處理好 file I/O、file parse、並且一開始就將整份文件 insert 入 Table，然後等待使用者操作。
- 基本上這份檔案不需要經過修改。

### b. tableInsert function:

- 插入一部上映時間為 `29-Nov-2013` 的新電影 `Carrie (2013)` movie id 為 `42b4ef9b4362221276571fa1841b8b95`，以及 IMDB 的網址為 `http://www.imdb.com/title/tt1939659/`。

    ![new movie](https://raw.github.com/evenchange4/102-1_DS_PA2_ADT-Table/master/image/insert%20new%20movie.png)

- 插入一部上映時間為 `07-Feb-1997` 的已存在電影 `Dante's Peak (1997)` movie id 為 `fffffe98d0963d27015c198262d97221`，以及 IMDB 的網址為 `http://us.imdb.com/M/title-exact?Dante's%20Peak%20(1997)`。

    ![old movie](https://raw.github.com/evenchange4/102-1_DS_PA2_ADT-Table/master/image/insert%20old%20movie.png)

### c. tableDelete function:
- 刪除 movie id 為 `fffffe98d0963d27015c198262d97221` 的電影，
    ![remove 1](https://raw.github.com/evenchange4/102-1_DS_PA2_ADT-Table/master/image/remove1.png)
- 再次刪除
    ![remove 2](https://raw.github.com/evenchange4/102-1_DS_PA2_ADT-Table/master/image/remove2.png)    

### d. tableRetrieve function:
與 c. tableDelete function 大同小異。

### e. traverseTable function:
列出所有的電影。

## 作業規定
1. 繳交時間: 2013／12／16（一） 下午 15:00

## IO 格式：
1. 無限迴圈鍵入。
2. 以一個 `space` 爲間格，數量不一定是 6 個 integer。
3. example: 
    - input:
         
    ```
    > 請鍵入 Arr array:
    > 6 3 5 9 2 10 
    ```
    - 按下 `ENTER 鍵` 後結果:
    
    ```
    > 請鍵入 Arr array:
    > 6 3 5 9 2 10 
    > 10 2 9 3 6 5
    > 請鍵入 Arr array:
    ```
    - next input ...
    
## 繳交檔案要求
- 能夠編譯且執行的完整 source code。其中可能包括 `.h` 、 `.cpp` 、 `專案檔`。


## 建議方向
- 整份 Programming Assignment 2 的專案資料夾架構
    ![架構](https://github.com/evenchange4/102-1_DS_PA2_ADT-Table/raw/master/image/project%20%E6%9E%B6%E6%A7%8B.png)

## 評分標準
1. 批改用的極端測資五組（20 分/組）。
2. 符合作業規定、IO 格式、繳交要求。
3. 請勿抄襲。


## 其他問題
- 本次作業五請聯絡`徐承志`助教 ( `evenchange4@gmail.com` or `r02725013@ntu.edu.tw` )。