
// Generated from Line.g4 by ANTLR 4.8


#include "LineLexer.h"


using namespace antlr4;


LineLexer::LineLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

LineLexer::~LineLexer() {
  delete _interpreter;
}

std::string LineLexer::getGrammarFileName() const {
  return "Line.g4";
}

const std::vector<std::string>& LineLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& LineLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& LineLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& LineLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& LineLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> LineLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& LineLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> LineLexer::_decisionToDFA;
atn::PredictionContextCache LineLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN LineLexer::_atn;
std::vector<uint16_t> LineLexer::_serializedATN;

std::vector<std::string> LineLexer::_ruleNames = {
  u8"ESC_SEQ", u8"BOUNDED_VARIABLE", u8"UNBOUNDED_VARIABLE", u8"STRING_CHAR", 
  u8"UNICODE_ESC", u8"OCTAL_ESC", u8"UNBOUNDED_STRING", u8"LIMITED_UNBOUNDED_STRING", 
  u8"LETTER", u8"DIGIT", u8"HEX_DIGIT"
};

std::vector<std::string> LineLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> LineLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> LineLexer::_literalNames = {
};

std::vector<std::string> LineLexer::_symbolicNames = {
  "", u8"ESC_SEQ", u8"BOUNDED_VARIABLE", u8"UNBOUNDED_VARIABLE", u8"STRING_CHAR"
};

dfa::Vocabulary LineLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> LineLexer::_tokenNames;

LineLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x2, 0x6, 0x4e, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 
    0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x5, 0x2, 0x1e, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x5, 0x7, 0x3a, 0xa, 0x7, 0x3, 0x8, 0x6, 0x8, 0x3d, 0xa, 0x8, 
    0xd, 0x8, 0xe, 0x8, 0x3e, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x44, 
    0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x47, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x2, 0x2, 0xd, 0x3, 0x3, 0x5, 0x4, 
    0x7, 0x5, 0x9, 0x6, 0xb, 0x2, 0xd, 0x2, 0xf, 0x2, 0x11, 0x2, 0x13, 0x2, 
    0x15, 0x2, 0x17, 0x2, 0x3, 0x2, 0x6, 0xb, 0x2, 0x24, 0x24, 0x26, 0x26, 
    0x29, 0x29, 0x5e, 0x5e, 0x64, 0x64, 0x68, 0x68, 0x70, 0x70, 0x74, 0x74, 
    0x76, 0x76, 0x4, 0x2, 0x7d, 0x7d, 0x7f, 0x7f, 0x4, 0x2, 0x43, 0x5c, 
    0x63, 0x7c, 0x5, 0x2, 0x32, 0x3b, 0x43, 0x48, 0x63, 0x68, 0x2, 0x4d, 
    0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x5, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x7, 0x24, 0x3, 0x2, 0x2, 0x2, 
    0x9, 0x27, 0x3, 0x2, 0x2, 0x2, 0xb, 0x29, 0x3, 0x2, 0x2, 0x2, 0xd, 0x39, 
    0x3, 0x2, 0x2, 0x2, 0xf, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x11, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x13, 0x48, 0x3, 0x2, 0x2, 0x2, 0x15, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0x17, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x7, 0x5e, 0x2, 
    0x2, 0x1a, 0x1e, 0x9, 0x2, 0x2, 0x2, 0x1b, 0x1e, 0x5, 0xb, 0x6, 0x2, 
    0x1c, 0x1e, 0x5, 0xd, 0x7, 0x2, 0x1d, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1d, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x4, 
    0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x26, 0x2, 0x2, 0x20, 0x21, 0x7, 
    0x7d, 0x2, 0x2, 0x21, 0x22, 0x5, 0xf, 0x8, 0x2, 0x22, 0x23, 0x7, 0x7f, 
    0x2, 0x2, 0x23, 0x6, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x7, 0x26, 0x2, 
    0x2, 0x25, 0x26, 0x5, 0x11, 0x9, 0x2, 0x26, 0x8, 0x3, 0x2, 0x2, 0x2, 
    0x27, 0x28, 0xb, 0x2, 0x2, 0x2, 0x28, 0xa, 0x3, 0x2, 0x2, 0x2, 0x29, 
    0x2a, 0x7, 0x5e, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x77, 0x2, 0x2, 0x2b, 0x2c, 
    0x5, 0x17, 0xc, 0x2, 0x2c, 0x2d, 0x5, 0x17, 0xc, 0x2, 0x2d, 0x2e, 0x5, 
    0x17, 0xc, 0x2, 0x2e, 0x2f, 0x5, 0x17, 0xc, 0x2, 0x2f, 0xc, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x31, 0x7, 0x5e, 0x2, 0x2, 0x31, 0x32, 0x4, 0x32, 0x35, 
    0x2, 0x32, 0x33, 0x4, 0x32, 0x39, 0x2, 0x33, 0x3a, 0x4, 0x32, 0x39, 
    0x2, 0x34, 0x35, 0x7, 0x5e, 0x2, 0x2, 0x35, 0x36, 0x4, 0x32, 0x39, 0x2, 
    0x36, 0x3a, 0x4, 0x32, 0x39, 0x2, 0x37, 0x38, 0x7, 0x5e, 0x2, 0x2, 0x38, 
    0x3a, 0x4, 0x32, 0x39, 0x2, 0x39, 0x30, 0x3, 0x2, 0x2, 0x2, 0x39, 0x34, 
    0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3a, 0xe, 0x3, 
    0x2, 0x2, 0x2, 0x3b, 0x3d, 0xa, 0x3, 0x2, 0x2, 0x3c, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x3d, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x10, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x45, 0x5, 0x13, 0xa, 0x2, 0x41, 0x44, 0x5, 0x13, 0xa, 0x2, 0x42, 
    0x44, 0x5, 0x15, 0xb, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x47, 0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x45, 0x46, 0x3, 0x2, 0x2, 0x2, 0x46, 0x12, 0x3, 0x2, 
    0x2, 0x2, 0x47, 0x45, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x9, 0x4, 0x2, 
    0x2, 0x49, 0x14, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x4, 0x32, 0x3b, 0x2, 
    0x4b, 0x16, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x9, 0x5, 0x2, 0x2, 0x4d, 
    0x18, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2, 0x1d, 0x39, 0x3e, 0x43, 0x45, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

LineLexer::Initializer LineLexer::_init;
