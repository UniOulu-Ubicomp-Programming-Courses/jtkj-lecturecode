   0:   55                      push   %rbp
   1:   48 89 e5                mov    %rsp,%rbp
   4:   48 83 ec 30             sub    $0x30,%rsp
   8:   e8 00 00 00 00          callq  d <main+0xd>
   d:   c7 45 fc 00 00 00 00    movl   $0x0,-0x4(%rbp)
  14:   c7 45 f8 00 00 00 00    movl   $0x0,-0x8(%rbp)
  1b:   c7 45 fc 00 00 00 00    movl   $0x0,-0x4(%rbp)
  22:   eb 0a                   jmp    2e <main+0x2e>
  24:   8b 45 fc                mov    -0x4(%rbp),%eax
  27:   01 45 f8                add    %eax,-0x8(%rbp)
  2a:   83 45 fc 01             addl   $0x1,-0x4(%rbp)
  2e:   83 7d fc 09             cmpl   $0x9,-0x4(%rbp)
  32:   7e f0                   jle    24 <main+0x24>
  34:   b8 00 00 00 00          mov    $0x0,%eax
  39:   48 83 c4 30             add    $0x30,%rsp
  3d:   5d                      pop    %rbp
  3e:   c3                      retq
  3f:   90                      nop