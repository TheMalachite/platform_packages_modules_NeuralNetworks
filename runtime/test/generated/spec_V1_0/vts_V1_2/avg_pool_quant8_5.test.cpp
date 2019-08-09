// Generated from avg_pool_quant8_5.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::avg_pool_quant8_5 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::avg_pool_quant8_5

namespace android::hardware::neuralnetworks::V1_2::generated_tests::avg_pool_quant8_5 {

TEST_F(GeneratedTest, avg_pool_quant8_5) {
    Execute(device, ::generated_tests::avg_pool_quant8_5::get_test_model());
}

TEST_F(DynamicOutputShapeTest, avg_pool_quant8_5) {
    Execute(device, ::generated_tests::avg_pool_quant8_5::get_test_model(), true);
}

TEST_F(ValidationTest, avg_pool_quant8_5) {
    const Model model = createModel(::generated_tests::avg_pool_quant8_5::get_test_model());
    const Request request = createRequest(::generated_tests::avg_pool_quant8_5::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::avg_pool_quant8_5


namespace generated_tests::avg_pool_quant8_5 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::avg_pool_quant8_5

namespace android::hardware::neuralnetworks::V1_2::generated_tests::avg_pool_quant8_5 {

TEST_F(GeneratedTest, avg_pool_quant8_5_all_inputs_as_internal) {
    Execute(device, ::generated_tests::avg_pool_quant8_5::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, avg_pool_quant8_5_all_inputs_as_internal) {
    Execute(device, ::generated_tests::avg_pool_quant8_5::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, avg_pool_quant8_5_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::avg_pool_quant8_5::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::avg_pool_quant8_5::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::avg_pool_quant8_5

