#include "UnresolvedListener.h"


using namespace dotenv;
using namespace std;


UnresolvedListener::UnresolvedListener(const string& key, SymbolsTable& symbols_table):
    key(key),
    symbols_table(symbols_table)
{

}


void UnresolvedListener::enterLine(LineParser::LineContext* ctx)
{
    // Clear the stack in case the listener is reused
    resolve_stack.clear();
}


void UnresolvedListener::exitLine(LineParser::LineContext* ctx)
{
    // At this point all the resolve operations have been registered
    resolve_stack.run();
}


void UnresolvedListener::exitVariable(LineParser::VariableContext* ctx)
{
    size_t pos;
    size_t size;

    // Get variable positional info
    if (ctx->BOUNDED_VARIABLE() != nullptr)
    {
        // Start position of the variable substring in the line
        pos = ctx->BOUNDED_VARIABLE()->getSymbol()->getCharPositionInLine();
        size = ctx->BOUNDED_VARIABLE()->getText().size();
    }
    else if (ctx->UNBOUNDED_VARIABLE() != nullptr)
    {
        // Start position of the variable substring in the line
        pos = ctx->UNBOUNDED_VARIABLE()->getSymbol()->getCharPositionInLine();
        size = ctx->UNBOUNDED_VARIABLE()->getText().size();
    }

    SymbolRecord& record = symbols_table.at(key);

    // If there is more than one substitution operation, they must be performed
    // from end to beginning so position and size indices are maintained
    // constant throughout the different operations
    resolve_stack.emplace(record.value(), "", pos, size);
    record.dependency_resolve_one();
}