// Generated from depthwise_conv2d_float_large_2_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::depthwise_conv2d_float_large_2_relaxed {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::depthwise_conv2d_float_large_2_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv2d_float_large_2_relaxed {

TEST_F(GeneratedTest, depthwise_conv2d_float_large_2_relaxed) {
    Execute(device, ::generated_tests::depthwise_conv2d_float_large_2_relaxed::get_test_model());
}

TEST_F(ValidationTest, depthwise_conv2d_float_large_2_relaxed) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_float_large_2_relaxed::get_test_model());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_float_large_2_relaxed::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv2d_float_large_2_relaxed


namespace generated_tests::depthwise_conv2d_float_large_2_relaxed {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_float_large_2_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv2d_float_large_2_relaxed {

TEST_F(GeneratedTest, depthwise_conv2d_float_large_2_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_float_large_2_relaxed::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_float_large_2_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_float_large_2_relaxed::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_float_large_2_relaxed::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv2d_float_large_2_relaxed


namespace generated_tests::depthwise_conv2d_float_large_2_relaxed {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_float_large_2_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv2d_float_large_2_relaxed {

TEST_F(GeneratedTest, depthwise_conv2d_float_large_2_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_float_large_2_relaxed::get_test_model_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_float_large_2_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_float_large_2_relaxed::get_test_model_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_float_large_2_relaxed::get_test_model_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv2d_float_large_2_relaxed


namespace generated_tests::depthwise_conv2d_float_large_2_relaxed {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_float_large_2_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv2d_float_large_2_relaxed {

TEST_F(GeneratedTest, depthwise_conv2d_float_large_2_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_float_large_2_relaxed::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_float_large_2_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_float_large_2_relaxed::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_float_large_2_relaxed::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv2d_float_large_2_relaxed

