#ifndef MARKUP_TYPES_HPP
#define MARKUP_TYPES_HPP

#include <vector>

namespace markup
{
    typedef std::vector<double> vectorized_word_t;
    typedef std::vector<vectorized_word_t> vectorized_sentence_t;
    typedef std::vector<vectorized_sentence_t> vectorized_text_t;
}

#endif //MARKUP_TYPES_HPP
