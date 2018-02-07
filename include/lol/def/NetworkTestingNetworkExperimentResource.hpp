#pragma once
#include "../base_def.hpp" 
#include "NetworkTestingNetworkExperimentStatus.hpp"
namespace lol {
  struct NetworkTestingNetworkExperimentResource { 
    NetworkTestingNetworkExperimentStatus status; 
  };
  inline void to_json(json& j, const NetworkTestingNetworkExperimentResource& v) {
    j["status"] = v.status; 
  }
  inline void from_json(const json& j, NetworkTestingNetworkExperimentResource& v) {
    v.status = j.at("status").get<NetworkTestingNetworkExperimentStatus>(); 
  }
}