#ifndef PDP_H
#define PDP_H
std::string create_string();

typedef unsigned char BYTE;
typedef unsigned short WORD;

typedef struct pdp_status {
    WORD *  registers;
    BYTE *  RAM;
    BYTE *  VRAM;
    std::string  disasm_command;
} pdp_status;


class pdp
{
    friend class pdp_tester;
    friend class pdp_memory;

/*private:
    pdp_processor   *processor;
    pdp_memory      *memory;

*/
    pdp_status *get_pdp_status();

public:

    pdp();
    bool        load_program();
    //int         run_program();
    pdp_status *run_next_instruction();
    bool        print_next_instruction();
    bool        print_status();

};

#endif // PDP_H
