// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace conv_float_2_relaxed {
std::vector<MixedTypedExample> examples = {
// Generated conv_float_2_relaxed test
#include "generated/examples/conv_float_2_relaxed.example.cpp"
};
// Generated model constructor
#include "generated/models/conv_float_2_relaxed.model.cpp"
} // namespace conv_float_2_relaxed
TEST_F(GeneratedTests, conv_float_2_relaxed) {
    execute(conv_float_2_relaxed::CreateModel,
            conv_float_2_relaxed::is_ignored,
            conv_float_2_relaxed::examples);
}
