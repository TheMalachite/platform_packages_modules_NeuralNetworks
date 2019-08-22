// Generated from lstm_state.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::lstm_state {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::lstm_state

namespace android::hardware::neuralnetworks::V1_1::generated_tests::lstm_state {

TEST_F(GeneratedTest, lstm_state) {
    Execute(device, ::generated_tests::lstm_state::get_test_model());
}

TEST_F(ValidationTest, lstm_state) {
    const Model model = createModel(::generated_tests::lstm_state::get_test_model());
    const Request request = createRequest(::generated_tests::lstm_state::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::lstm_state


namespace generated_tests::lstm_state {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::lstm_state

namespace android::hardware::neuralnetworks::V1_1::generated_tests::lstm_state {

TEST_F(GeneratedTest, lstm_state_all_inputs_as_internal) {
    Execute(device, ::generated_tests::lstm_state::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, lstm_state_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::lstm_state::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::lstm_state::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::lstm_state
