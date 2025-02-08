#ifndef _ICODE_H
#define _ICODE_H

class ICode
{
    // IHALT 0 Code for halt instruction
    // INOP 1 Code for nop instruction
    // IRRMOVQ 2 Code for rrmovq instruction
    // IIRMOVQ 3 Code for irmovq instruction
    // IRMMOVQ 4 Code for rmmovq instruction
    // IMRMOVQ 5 Code for mrmovq instruction
    // IOPL 6 Code for integer operation instructions
    // IJXX 7 Code for jump instructions
    // ICALL 8 Code for call instruction
    // IRET 9 Code for ret instruction
    // IPUSHQ A Code for pushq instruction
    // IPOPQ B Code for popq instruction
    enum iCodeType
    {
        IHALT = 0,
        INOP = 1, 
        IRRMOVQ = 2,
        IIRMOVQ = 3,
        IRMMOVQ = 4,
        IMRMOVQ = 5,
        IOPL = 6, 
        IJXX = 7, 
        ICALL = 8,
        IRET = 9, 
        IPUSHQ = 0xa, 
        IPOPQ = 0xb,
    };

    // FNONE 0 Default function code
    // ALUADD 0 Function for addition operation
    enum iCodeFunc
    {
        FNONE = 0,
        ALUADD = 0,
    };
};

class Register
{
    // RESP 4 Register ID for %rsp
    // RNONE F Indicates no register file access
    enum regNum
    {
        RESP = 4,
        RNONE = 0xf,
    };
};

class StatusCode
{
    // SAOK 1 Status code for normal operation
    // SADR 2 Status code for address exception
    // SINS 3 Status code for illegal instruction exception
    // SHLT 4 Status code for halt
    enum statusCodeNum
    {
        SAOK = 1, 
        SADR = 2, 
        SINS = 3, 
        SHLT = 4, 
    };
    ;
};

#endif
