#pragma once
#include "../base_def.hpp" 
#include "NetworkTestingNetworkExperimentResource.hpp"
namespace lol {
  struct NetworkTestingNetworkExperimentsResource { 
    std::map<std::string, NetworkTestingNetworkExperimentResource> experiments; 
  };
  inline void to_json(json& j, const NetworkTestingNetworkExperimentsResource& v) {
    j["experiments"] = v.experiments; 
  }
  inline void from_json(const json& j, NetworkTestingNetworkExperimentsResource& v) {
    v.experiments = j.at("experiments").get<std::map<std::string, NetworkTestingNetworkExperimentResource>>(); 
  }
}