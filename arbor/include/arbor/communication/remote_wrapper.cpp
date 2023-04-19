#include <pybind11/pybind11.h>
#include "remote.hpp"

namespace py = pybind11;

using namespace pybind11::literals;

// taken from:
// https://people.duke.edu/~ccc14/sta-663-2018/notebooks/S13C_pybind11.html

// signature from hpp:
//inline 
// std::vector<arb_spike> gather_spikes(const std::vector<arb_spike>& send, MPI_Comm comm)
PYBIND11_MODULE(wrap1, m) {
    m.doc() = "pybind11 ...";
    m.def("gather_spikes", &gather_spikes, "<Description>",
          "i"_a=1, "j"_a=2);
}

// signature from hpp:
// inline
// ctrl_message exchange_ctrl(const ctrl_message& msg, MPI_Comm comm)
PYBIND11_MODULE(wrap1, m) {
    m.doc() = "pybind11 ...";
    m.def("exchange_ctrl", &exchange_ctrl, "<Description>",
          "i"_a=1, "j"_a=2);
}