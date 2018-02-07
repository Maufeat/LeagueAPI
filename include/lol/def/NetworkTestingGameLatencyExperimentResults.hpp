#pragma once
#include "../base_def.hpp" 
#include "NetworkTestingGameLatencyExperimentResult.hpp"
namespace lol {
  struct NetworkTestingGameLatencyExperimentResults { 
    std::vector<NetworkTestingGameLatencyExperimentResult> results;
    std::string timestamp; 
  };
  inline void to_json(json& j, const NetworkTestingGameLatencyExperimentResults& v) {
    j["results"] = v.results; 
    j["timestamp"] = v.timestamp; 
  }
  inline void from_json(const json& j, NetworkTestingGameLatencyExperimentResults& v) {
    v.results = j.at("results").get<std::vector<NetworkTestingGameLatencyExperimentResult>>(); 
    v.timestamp = j.at("timestamp").get<std::string>(); 
  }
}