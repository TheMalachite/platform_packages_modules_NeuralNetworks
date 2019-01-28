// clang-format off
// Generated file (from: unidirectional_sequence_lstm_batch_major_norm_peephole_projection.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace unidirectional_sequence_lstm_batch_major_norm_peephole_projection {
// Generated unidirectional_sequence_lstm_batch_major_norm_peephole_projection test
#include "generated/examples/unidirectional_sequence_lstm_batch_major_norm_peephole_projection.example.cpp"
// Generated model constructor
#include "generated/models/unidirectional_sequence_lstm_batch_major_norm_peephole_projection.model.cpp"
} // namespace unidirectional_sequence_lstm_batch_major_norm_peephole_projection

TEST_F(GeneratedTests, unidirectional_sequence_lstm_batch_major_norm_peephole_projection) {
    execute(unidirectional_sequence_lstm_batch_major_norm_peephole_projection::CreateModel,
            unidirectional_sequence_lstm_batch_major_norm_peephole_projection::is_ignored,
            unidirectional_sequence_lstm_batch_major_norm_peephole_projection::get_examples());
}

#if 0
TEST_F(DynamicOutputShapeTests, unidirectional_sequence_lstm_batch_major_norm_peephole_projection_dynamic_output_shape) {
    execute(unidirectional_sequence_lstm_batch_major_norm_peephole_projection::CreateModel_dynamic_output_shape,
            unidirectional_sequence_lstm_batch_major_norm_peephole_projection::is_ignored_dynamic_output_shape,
            unidirectional_sequence_lstm_batch_major_norm_peephole_projection::get_examples_dynamic_output_shape());
}

#endif