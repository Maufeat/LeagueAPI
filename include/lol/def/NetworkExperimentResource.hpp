#pragma once
#include "../base_def.hpp" 
#include "NetworkExperimentStatus.hpp"
namespace lol {
  struct NetworkExperimentResource { 
    NetworkExperimentStatus status; 
  };
  inline void to_json(json& j, const NetworkExperimentResource& v) {
    j["status"] = v.status; 
  }
  inline void from_json(const json& j, NetworkExperimentResource& v) {
    v.status = j.at("status").get<NetworkExperimentStatus>(); 
  }
}