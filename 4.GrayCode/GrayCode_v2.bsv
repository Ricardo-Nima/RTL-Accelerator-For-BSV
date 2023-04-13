// 把组合逻辑电路实现在 rule 内 
// 组合逻辑的结果变量的作用域仅仅是当前 rule 内。
// 限制变量的作用域，有利于提高可读性！！
//
// 把一些重复有规律的运算写成 for 循环，提高可读性！

package GrayCode_v2;

module mkTb ();

   // 寄存器
   Reg#(Bit#(6)) cnt <- mkReg(0);

   rule up_counter;           // 每周期都执行
      cnt <= cnt + 1;         // cnt 从0自增到63
      if(cnt >= 63) $finish;  // 自增到 63 时，仿真结束
   endrule

   rule convert;
      // 把 cnt （二进制编码）转化为 cnt_gray （格雷码）
      Bit#(6) cnt_gray = (cnt >> 1) ^ cnt;

      // 把 cnt_gray （格雷码） 转化回 cnt_bin （二进制编码）
      Bit#(6) cnt_bin = cnt_gray;
      // 该循环不表示任何时序行为，编译器会把它完全展开（unroll）为组合逻辑
      for(int i=4; i>=0; i=i-1)
         cnt_bin[i] = cnt_gray[i] ^ cnt_bin[i+1];

      $display("cnt=%b   cnt_gray=%b   cnt_bin=%b", cnt, cnt_gray, cnt_bin );
   endrule

endmodule

endpackage
