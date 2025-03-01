// Declare all the instruction related defines here
// funct7[5]/funct3 field for all the supported instructions

// I-Type
#define ADDI    0x10
#define ANDI    0x1c
#define JALR    0x7
#define LB      0x0
#define LBU     0x4
#define LH      0x1
#define LHU     0x5
#define LW      0x2
#define ORI     0x16
#define SLLI    0x1
#define SLTI    0x12
#define SLTIU   0x13
#define SRAI    0x15
#define SRLI    0x5
#define XORI    0x14

// J-Type
#define JAL     0x3

// S-Type
#define SB      0x0
#define SH      0x1
#define SW      0x2

// B-Type
#define BEQ     0x0
#define BNE     0x1
#define BLT     0x4
#define BGE     0x5
#define BLTU    0x6
#define BGEU    0x7

// U-Type
#define AUIPC   0x27
#define LUI     0x37

// R-Type
#define ADD     0x0
#define AND     0x7
#define OR      0x6
#define SLL     0x1
#define SLT     0x2
#define SLTU    0x3
#define SRA     0xd
#define SRL     0x5
#define SUB     0x8
#define XOR     0x4













