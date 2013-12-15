# Data Structures Programming Assignment 2
> 繳交時間: 2013／12／16（一） 下午 15:00

依照提供的 main function （`main.cpp`）以及給定的資料群 `movieX.dat`，完成 ADT Table 的實作，可以是任意 based 的 implementation (DS11)，除了 class 基本的功能外，請並且完成以下 function：

0. class `Table`：class name 為 Table。
1. `tableInsert(key, value1,  value2,  value3)`：插入一部新電影，第一個參數為 `key`，之後的參數依序為 `movie id`、`movie title`、`release date`、`IMDb URL`。
2. `tableDelete(key)`：刪除一部電影。
3. `tableRetrieve(key)`：搜尋一部電影。
4. `traverseTable()`：列出所有電影。

## 零、準備工作
### a. dataset 
- 檔案來自 movielen 上面的資料。
- 檔案結構如下：

```
c4ca4238a0b9|Toy Story (1995)|01-Jan-1995||http://us.imdb.com/M/title-exact?Toy%20Story%20(1995)|0|0|0|1|1|1|0|0|0|0|0|0|0|0|0|0|0|0|0
c81e728d9d4c|GoldenEye (1995)|01-Jan-1995||http://us.imdb.com/M/title-exact?GoldenEye%20(1995)|0|1|1|0|0|0|0|0|0|0|0|0|0|0|0|0|1|0|0
eccbc87e4b5c|Four Rooms (1995)|01-Jan-1995||http://us.imdb.com/M/title-exact?Four%20Rooms%20(1995)|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|1|0|0
```

- `movie1.dat` (277.88 KB) [下載](https://drive.google.com/file/d/0B41WBNgHd5hjV3lKTTRyU1pfLW8/edit?usp=sharing) 
- `movie100.dat` (27.14 MB) [下載](https://drive.google.com/file/d/0B41WBNgHd5hjUEEzYXdpcm9QRGc/edit?usp=sharing)
- `movie1000.dat` (271.37 MB) [下載](https://drive.google.com/file/d/0B41WBNgHd5hjVnI2cGYtVzh6QWc/edit?usp=sharing)
- `movie5000.dat` (1.33 GB) [下載](https://drive.google.com/file/d/- 0B41WBNgHd5hjM3pQellDWm9GcWc/edit?usp=sharing)
- 打包 [下載](https://drive.google.com/folderview?id=0B41WBNgHd5hjZF9YS0cwMms3VXM&usp=sharing)
- 分流 [ntuspace](https://www.space.ntu.edu.tw/navigate/s/768D9E47E9F149859F0CE47FA13DA878QQY)

### b. main.cpp
- [下載](https://raw.github.com/evenchange4/102-1_DS_PA2_ADT-Table/master/main.cpp)

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
 - 與 c. tableDelete function 大同小異。

### e. traverseTable function:
- 列出所有的電影。
    ![list](https://github.com/evenchange4/102-1_DS_PA2_ADT-Table/raw/master/image/list.png)
    

## 三、評分標準
1. 按照實作的效能評分。
2. 繳交能夠編譯且執行的完整 source code。其中可能包括 `.h` 、 `.cpp` 、 `專案檔`。
3. 請勿抄襲。

## 四、建議方向
- 整份 Programming Assignment 2 的專案資料夾架構
    ![架構](https://github.com/evenchange4/102-1_DS_PA2_ADT-Table/raw/master/image/project%20%E6%9E%B6%E6%A7%8B.png)

## 五、其他問題
- 本次 PA2 請聯絡`徐承志`助教 ( `evenchange4@gmail.com` or `r02725013@ntu.edu.tw` )。