// $ cc -o test1 test1.c
// $ ./test1
// $ echo $?
// 42
int main() {
  return 42;
}


// test2.s 
// .intel_syntax noprefix
// .globl main
// main:
//         mov rax, 42
//         ret
        
// $ cc -o test2 test2.s
// $ ./test2
// $ echo $?
// 42

// 関数からリターンしたときにRAXに入っている値が関数の返り値という約束になっている


// .intel_syntax noprefix
// .globl main
// main:
//     mov eax, 44
//     ret

//64ビットCPUにおける「EAX」とは、RAXに使っているレジスタの下位32ビットのことである。