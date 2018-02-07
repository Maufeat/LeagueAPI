#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct NetworkTestingGameLatencyExperimentResult { 
    std::string server;
    uint16_t size;
    std::optional<double> latency; 
  };
  inline void to_json(json& j, const NetworkTestingGameLatencyExperimentResult& v) {
    j["server"] = v.server; 
    j["size"] = v.size; 
    if(v.latency)
      j["latency"] = *v.latency;
  }
  inline void from_json(const json& j, NetworkTestingGameLatencyExperimentResult& v) {
    v.server = j.at("server").get<std::string>(); 
    v.size = j.at("size").get<uint16_t>(); 
    if(auto it = j.find("latency"); it != j.end() && !it->is_null())
      v.latency = it->get<std::optional<double>>(); 
  }
}