#include "stream_insertable.h"

ostream& operator << (ostream& out, const StreamInsertable& operand) {
    operand.stream_insert(out);
    return out;
}
