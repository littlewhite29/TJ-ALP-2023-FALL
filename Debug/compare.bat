::从示范data文件中取数据
::get_input_data test-data.txt 4-b12-02 >data.txt

::5-b1-demo  >demo.txt <data.txt
7-b1-demo.exe >demo.txt <data.txt
::w13-s1-demo.exe --makedat 2050
helloworld >hw.txt <data.txt
txt_compare --file1 demo.txt --file2 hw.txt --display normal
::5-b16-demo --sub1 >demo.txt <data.txt
::helloworld-c >hw.txt <data.txt
::txt_compare --file1 demo.txt --file2 hw.txt --display normal

