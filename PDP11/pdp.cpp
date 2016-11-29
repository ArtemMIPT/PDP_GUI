#include <iostream>
#include <string>
#include <cstring>
#include "pdp.h"


bool pdp::load_program() {
        return true;
}

pdp_status * pdp::run_next_instruction() {
    pdp_status *elem = new pdp_status();
    elem -> registers = new WORD[8];
    elem -> disasm_command = "end";
    for(int i = 0; i < 8; i++) {
        elem -> registers[i] = i*i;
    }
    return elem;
}

pdp::pdp() {

}
