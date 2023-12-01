#include<iostream>
using namespace std;

int main(){
    int x; //ประกาศตัวแปร x
    int even = 0, odd = 0; //ตั้งค่าเริ่มต้นของตัวแปร even กับ odd เพื่อนับจำนวนตัวเลขคู่และคี่
    while(x != 0){ //ตราบใดที่ x ไม่ได้มีค่าเป็น 0 (โปรแกรมจะออกลูปถ้าใส่เลข 0)
        cout << "Enter an integer: "; //พิมพ์ข้อความว่า "Enter an integer: " อีกรอบ 
        cin >> x; //รับค่าตัวแปร x จากผู้ใช้อีกรอบ
        if(x%2 == 0 ){ //ถ้า x หารสองลงตัว
            if(x != 0) even = even+1; //เพิ่มค่า even ไป 1 
        }else{
            odd = odd+1; //เพิ่มค่า odd ไป 1 
        }
    }
    cout << "#Even numbers = " << even << "\n"; //พิมพ์ค่าตัวแปร even และขึ้นบรรทัดใหม่
    cout << "#Odd numbers = " << odd; //พิมพ์ค่าตัวแปร odd 
    return 0;
}