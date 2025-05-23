//==================================================================================
// BSD 2-Clause License
//
// Copyright (c) 2014-2022, NJIT, Duality Technologies Inc. and other contributors
//
// All rights reserved.
//
// Author TPOC: contact@openfhe.org
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this
//    list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//==================================================================================

#include <ostream>

#include "binfhe-constants.h"
#include "utils/exception.h"

namespace lbcrypto {

std::ostream& operator<<(std::ostream& s, BINFHE_PARAMSET f) {
    switch (f) {
        case TOY:
            s << "TOY";
            break;
        case MEDIUM:
            s << "MEDIUM";
            break;
        case STD128_AP:
            s << "STD128_AP";
            break;
        case STD128:
            s << "STD128";
            break;
        case STD128_3:
            s << "STD128_3";
            break;
        case STD128_4:
            s << "STD128_4";
            break;
        case STD128Q:
            s << "STD128Q";
            break;
        case STD128Q_3:
            s << "STD128Q_3";
            break;
        case STD128Q_4:
            s << "STD128Q_4";
            break;
        case STD192:
            s << "STD192";
            break;
        case STD192_3:
            s << "STD192_3";
            break;
        case STD192_4:
            s << "STD192_4";
            break;
        case STD192Q:
            s << "STD192Q";
            break;
        case STD192Q_3:
            s << "STD192Q_3";
            break;
        case STD192Q_4:
            s << "STD192Q_4";
            break;
        case STD256:
            s << "STD256";
            break;
        case STD256_3:
            s << "STD256_3";
            break;
        case STD256_4:
            s << "STD256_4";
            break;
        case STD256Q:
            s << "STD256Q";
            break;
        case STD256Q_3:
            s << "STD256Q_3";
            break;
        case STD256Q_4:
            s << "STD256Q_4";
            break;
        case STD128_LMKCDEY:
            s << "STD128_LMKCDEY";
            break;
        case STD128_3_LMKCDEY:
            s << "STD128_3_LMKCDEY";
            break;
        case STD128_4_LMKCDEY:
            s << "STD128_4_LMKCDEY";
            break;
        case STD128Q_LMKCDEY:
            s << "STD128Q_LMKCDEY";
            break;
        case STD128Q_3_LMKCDEY:
            s << "STD128Q_3_LMKCDEY";
            break;
        case STD128Q_4_LMKCDEY:
            s << "STD128Q_4_LMKCDEY";
            break;
        case STD192_LMKCDEY:
            s << "STD192_LMKCDEY";
            break;
        case STD192_3_LMKCDEY:
            s << "STD192_3_LMKCDEY";
            break;
        case STD192_4_LMKCDEY:
            s << "STD192_4_LMKCDEY";
            break;
        case STD192Q_LMKCDEY:
            s << "STD192Q_LMKCDEY";
            break;
        case STD192Q_3_LMKCDEY:
            s << "STD192Q_3_LMKCDEY";
            break;
        case STD192Q_4_LMKCDEY:
            s << "STD192Q_4_LMKCDEY";
            break;
        case STD256_LMKCDEY:
            s << "STD256_LMKCDEY";
            break;
        case STD256_3_LMKCDEY:
            s << "STD256_3_LMKCDEY";
            break;
        case STD256_4_LMKCDEY:
            s << "STD256_4_LMKCDEY";
            break;
        case STD256Q_LMKCDEY:
            s << "STD256Q_LMKCDEY";
            break;
        case STD256Q_3_LMKCDEY:
            s << "STD256Q_3_LMKCDEY";
            break;
        case STD256Q_4_LMKCDEY:
            s << "STD256Q_4_LMKCDEY";
            break;
        case LPF_STD128:
            s << "LPF_STD128";
            break;
        case LPF_STD128Q:
            s << "LPF_STD128Q";
            break;
        case LPF_STD128_LMKCDEY:
            s << "LPF_STD128_LMKCDEY";
            break;
        case LPF_STD128Q_LMKCDEY:
            s << "LPF_STD128Q_LMKCDEY";
            break;
        case SIGNED_MOD_TEST:
            s << "SIGNED_MOD_TEST";
            break;
        default:
            s << "UNKNOWN";
            break;
    }
    return s;
}

std::ostream& operator<<(std::ostream& s, BINFHE_OUTPUT f) {
    switch (f) {
        case FRESH:
            s << "FRESH";
            break;
        case BOOTSTRAPPED:
            s << "BOOTSTRAPPED";
            break;
        case LARGE_DIM:
            s << "LARGE_DIM";
            break;
        case SMALL_DIM:
            s << "SMALL_DIM";
            break;
        default:
            s << "UNKNOWN";
            break;
    }
    return s;
}

std::ostream& operator<<(std::ostream& s, BINFHE_METHOD f) {
    switch (f) {
        case AP:
            s << "DM";
            break;
        case GINX:
            s << "CGGI";
            break;
        case LMKCDEY:
            s << "LMKCDEY";
            break;
        default:
            s << "UNKNOWN";
            break;
    }
    return s;
}

std::ostream& operator<<(std::ostream& s, BINGATE f) {
    switch (f) {
        case OR:
            s << "OR";
            break;
        case AND:
            s << "AND";
            break;
        case NOR:
            s << "NOR";
            break;
        case NAND:
            s << "NAND";
            break;
        case XOR:
        case XOR_FAST:
            s << "XOR";
            break;
        case XNOR:
        case XNOR_FAST:
            s << "XNOR";
            break;
        case AND3:
            s << "AND3";
            break;
        case OR3:
            s << "OR3";
            break;
        case AND4:
            s << "AND4";
            break;
        case OR4:
            s << "OR4";
            break;
        case MAJORITY:
            s << "MAJORITY";
            break;
        case CMUX:
            s << "CMUX";
            break;
        default:
            s << "UNKNOWN";
            break;
    }
    return s;
}

void isMethodCompatible(BINFHE_METHOD m, BINFHE_PARAMSET p) {
    if (m == LMKCDEY) {
        switch (p) {
            case TOY:
            case MEDIUM:
            case STD128_LMKCDEY:
            case STD128_3_LMKCDEY:
            case STD128_4_LMKCDEY:
            case STD128Q_LMKCDEY:
            case STD128Q_3_LMKCDEY:
            case STD128Q_4_LMKCDEY:
            case STD192_LMKCDEY:
            case STD192_3_LMKCDEY:
            case STD192_4_LMKCDEY:
            case STD192Q_LMKCDEY:
            case STD192Q_3_LMKCDEY:
            case STD192Q_4_LMKCDEY:
            case STD256_LMKCDEY:
            case STD256_3_LMKCDEY:
            case STD256_4_LMKCDEY:
            case STD256Q_LMKCDEY:
            case STD256Q_3_LMKCDEY:
            case STD256Q_4_LMKCDEY:
            case LPF_STD128_LMKCDEY:
            case LPF_STD128Q_LMKCDEY:
                break;
            default:
                OPENFHE_THROW("Specified BINFHE_METHOD and BINFHE_PARAMSET are incompatible");
        }
    }
    else if (m == AP || m == GINX) {
        switch (p) {
            case TOY:
            case MEDIUM:
            case STD128_AP:
            case STD128:
            case STD128_3:
            case STD128_4:
            case STD128Q:
            case STD128Q_3:
            case STD128Q_4:
            case STD192:
            case STD192_3:
            case STD192_4:
            case STD192Q:
            case STD192Q_3:
            case STD192Q_4:
            case STD256:
            case STD256_3:
            case STD256_4:
            case STD256Q:
            case STD256Q_3:
            case STD256Q_4:
            case LPF_STD128:
            case LPF_STD128Q:
            case SIGNED_MOD_TEST:
                break;
            default:
                OPENFHE_THROW("Specified BINFHE_METHOD and BINFHE_PARAMSET are incompatible");
        }
    }
    else {
        OPENFHE_THROW("Invalid BINFHE_METHOD");
    }
}

};  // namespace lbcrypto
