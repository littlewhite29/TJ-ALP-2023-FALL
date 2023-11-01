::从示范data文件中取数据
get_input_data test-data.txt 4-b12-02 >data.txt

4-b12-demo >demo.txt <data.txt
helloworld >hw.txt <data.txt
txt_compare --file1 demo.txt --file2 hw.txt --display normal
::4-b7-demo >demo.txt <data.txt
::helloworld-c >hw.txt <data.txt
::txt_compare --file1 demo.txt --file2 hw.txt --display normal

