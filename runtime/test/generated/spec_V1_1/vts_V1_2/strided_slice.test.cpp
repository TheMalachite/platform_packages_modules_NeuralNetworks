// Generated from strided_slice.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::strided_slice {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::strided_slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice {

TEST_F(GeneratedTest, strided_slice) {
    Execute(device, ::generated_tests::strided_slice::get_test_model());
}

TEST_F(DynamicOutputShapeTest, strided_slice) {
    Execute(device, ::generated_tests::strided_slice::get_test_model(), true);
}

TEST_F(ValidationTest, strided_slice) {
    const Model model = createModel(::generated_tests::strided_slice::get_test_model());
    const Request request = createRequest(::generated_tests::strided_slice::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice


namespace generated_tests::strided_slice {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::strided_slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice {

TEST_F(GeneratedTest, strided_slice_all_inputs_as_internal) {
    Execute(device, ::generated_tests::strided_slice::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, strided_slice_all_inputs_as_internal) {
    Execute(device, ::generated_tests::strided_slice::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, strided_slice_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::strided_slice::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::strided_slice::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice


namespace generated_tests::strided_slice {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs();

} // namespace generated_tests::strided_slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice {

TEST_F(GeneratedTest, strided_slice_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::strided_slice::get_test_model_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, strided_slice_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::strided_slice::get_test_model_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, strided_slice_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::strided_slice::get_test_model_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::strided_slice::get_test_model_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice


namespace generated_tests::strided_slice {

const ::test_helper::TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::strided_slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice {

TEST_F(GeneratedTest, strided_slice_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::strided_slice::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, strided_slice_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::strided_slice::get_test_model_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, strided_slice_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::strided_slice::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::strided_slice::get_test_model_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::strided_slice
