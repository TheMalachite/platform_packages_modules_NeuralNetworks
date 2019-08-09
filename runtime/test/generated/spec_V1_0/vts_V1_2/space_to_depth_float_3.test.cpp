// Generated from space_to_depth_float_3.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::space_to_depth_float_3 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::space_to_depth_float_3

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_float_3 {

TEST_F(GeneratedTest, space_to_depth_float_3) {
    Execute(device, ::generated_tests::space_to_depth_float_3::get_test_model());
}

TEST_F(DynamicOutputShapeTest, space_to_depth_float_3) {
    Execute(device, ::generated_tests::space_to_depth_float_3::get_test_model(), true);
}

TEST_F(ValidationTest, space_to_depth_float_3) {
    const Model model = createModel(::generated_tests::space_to_depth_float_3::get_test_model());
    const Request request = createRequest(::generated_tests::space_to_depth_float_3::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_float_3


namespace generated_tests::space_to_depth_float_3 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::space_to_depth_float_3

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_float_3 {

TEST_F(GeneratedTest, space_to_depth_float_3_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_depth_float_3::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, space_to_depth_float_3_all_inputs_as_internal) {
    Execute(device, ::generated_tests::space_to_depth_float_3::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, space_to_depth_float_3_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::space_to_depth_float_3::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::space_to_depth_float_3::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_float_3

